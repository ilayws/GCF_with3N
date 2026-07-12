#!/usr/bin/env python3
"""theta12-theta23 opening-angle heatmaps, one per (sample, #detected nucleons).

Eight standalone paper-style heatmaps, organised as a 4x2 matrix
(sample type x number of nucleons detected above kF, n = 2 or 3):

  sample              detect 2 (reconstruct 3rd)   detect 3 (use all 3)
  ------------------  --------------------------   --------------------
  no-FSI (PWIA)       2N  pre-FSI                  3N  pre-FSI
  3N + FSI            3N  post-FSI                 3N  post-FSI
  2N + FSI            2N  post-FSI                 2N  post-FSI
  MF(global) + FSI    MF  post-FSI                 MF  post-FSI

"Detect n" = n nucleons with |p| > kF (kF = 0.25 GeV/c), counting protons
and neutrons alike (the nAboveKF convention).

Each plot is produced twice, into two folders:
  baseline/  : scattering angle in [8, 45] deg, Q^2 >= 1 GeV^2
  src_cuts/  : baseline + pLead/|q| > 0.7, 0.25 < pmiss < 0.9, xB < 1.2,
               and (3-detected only) interplane angle < 20 deg.

Angle conventions follow the existing code exactly (analyze_2N.py:170-204,308-311;
plot_mf_fake3n_heatmap.py:178-202):
  * p1 = (lead - q)          reconstructed initial struck-nucleon momentum
  * detect 2: p3 = -(p1 + p2) (zero initial CM); theta12=angle(p1,p2),
              theta23=angle(p2,p3).
  * detect 3: three real nucleons, heatmap symmetrised under 2<->3:
              fill (angle(p1,p2),angle(p2,p3)) and (angle(p1,p3),angle(p2,p3)).
  * 3rd nucleon from FSI (2N/MF detect 3): highest-|p| secondary nucleon >kF.
  * MF: recoil_post is zero, so the measured recoils are FSI secondaries.

Each plot is written as a single PDF; region L/R weighted fractions are printed
and written to region_fractions.txt in each folder.
"""
import argparse
import os
import sys

import numpy as np
import uproot
import awkward as ak
import matplotlib.pyplot as plt
from matplotlib.colors import LogNorm

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from paper_style import apply_style, figure_size, CMAP, OVERLAY_COLOR

KF = 0.25            # Fermi momentum [GeV/c]
MN = 0.93892         # nucleon mass [GeV]
P_CODE, N_CODE = 2212, 2112

# Cut values
THETA_E_MIN, THETA_E_MAX = 8.0, 45.0
Q2_MIN = 1.0
SRC_LEAD_OVER_Q = 0.7
SRC_PMISS_LO, SRC_PMISS_HI = 0.25, 0.9
SRC_XB_MAX = 1.2
SRC_THETA_PQ_MAX = 10.0
SRC_INTERPLANE_MAX = 20.0


# ───────────────────────── angle helpers ─────────────────────────
def angle_deg(a, b):
    dot = np.sum(a * b, axis=1)
    am = np.linalg.norm(a, axis=1)
    bm = np.linalg.norm(b, axis=1)
    return np.degrees(np.arccos(np.clip(dot / (am * bm + 1e-30), -1.0, 1.0)))


def interplane_angle(shared, a, b):
    """Angle [deg] between planes {shared, a} and {shared, b}."""
    n1 = np.cross(shared, a)
    n2 = np.cross(shared, b)
    n1m = np.linalg.norm(n1, axis=1, keepdims=True)
    n2m = np.linalg.norm(n2, axis=1, keepdims=True)
    cos_a = np.clip(np.abs(np.sum(n1 / (n1m + 1e-30) * n2 / (n2m + 1e-30), axis=1)), 0, 1)
    return np.degrees(np.arccos(cos_a))


def topk_secondary_nucleons(sec, kf, k):
    """k highest-|p| secondary NUCLEONS (p or n) above kF, per event, sorted
    descending. Ranks beyond n_valid contain junk -> mask via n_valid."""
    px, py, pz, pdg = sec.sec_px, sec.sec_py, sec.sec_pz, sec.sec_pdg
    smag = np.sqrt(px ** 2 + py ** 2 + pz ** 2)
    valid = ((pdg == P_CODE) | (pdg == N_CODE)) & (smag > kf)
    key = ak.where(valid, smag, -1.0)
    order = ak.argsort(key, axis=1, ascending=False)
    px_s, py_s, pz_s = px[order], py[order], pz[order]
    n_valid = ak.to_numpy(ak.sum(valid, axis=1))
    out = []
    for r in range(k):
        gx = ak.to_numpy(ak.fill_none(ak.firsts(px_s[:, r:r + 1]), 0.0))
        gy = ak.to_numpy(ak.fill_none(ak.firsts(py_s[:, r:r + 1]), 0.0))
        gz = ak.to_numpy(ak.fill_none(ak.firsts(pz_s[:, r:r + 1]), 0.0))
        out.append(np.column_stack([gx, gy, gz]))
    return out, n_valid


# ───────────────────────── region definitions (A=135 deg, K=4) ─────────────
def _region_B(A=135.0, K=4.0):
    A_rad = np.radians(A)
    return np.degrees(np.arctan(np.sin(A_rad) / (K + np.cos(A_rad)))) / (180.0 - A)


def in_region_R(t12, t23, A=135.0, K=4.0):
    B = _region_B(A, K)
    line1 = B * (t12 - 180.0) + 180.0
    line2 = (1.0 / B) * (t12 - 180.0) + 180.0
    line3 = -(t12 - A) + 180.0 - (180.0 - A) * B
    return (t23 <= line1) & (t23 >= line2) & (t23 >= line3)


def in_region_L(t12, t23, A=135.0, K=4.0):
    return in_region_R(360.0 - t12 - t23, t23, A, K)


# ───────────────────────── per-event record ─────────────────────────
def make_record(p1, p2, p3, w, lead_over_q, theta_pq, xB, ndetect):
    """Per-event arrays (un-symmetrised) + SRC-cut quantities. For detect 2,
    p3 is the reconstructed third nucleon; for detect 3, p3 is the real one.
    theta_pq = angle between the detected lead nucleon and q."""
    return dict(
        w=w, ndetect=ndetect,
        t12=angle_deg(p1, p2), t23=angle_deg(p2, p3), t13=angle_deg(p1, p3),
        pmiss=np.linalg.norm(p1, axis=1),
        lead_over_q=lead_over_q, theta_pq=theta_pq, xB=xB,
        interplane=(interplane_angle(p1, p2, p3) if ndetect == 3
                    else np.zeros(len(w))),
    )


def base_mask(w, theta_e, Q2):
    return (np.isfinite(w) & (w > 0)
            & (theta_e > THETA_E_MIN) & (theta_e < THETA_E_MAX) & (Q2 >= Q2_MIN))


# ───────────────────────── per-sample builders (apply base cuts) ─────────────
def build_3N(path, ndetect, pre, ebeam):
    lb = ['pLead_pre', 'p2_pre', 'p3_pre'] if pre else ['pLead', 'p2', 'p3']
    arr = uproot.open(path)['genT'].arrays(['weight', 'pe'] + lb, library='np')
    w, pe = arr['weight'], arr['pe']
    lead, r2, r3 = arr[lb[0]], arr[lb[1]], arr[lb[2]]
    qx, qy, qz = -pe[:, 0], -pe[:, 1], ebeam - pe[:, 2]
    q = np.column_stack([qx, qy, qz])
    q_mag = np.linalg.norm(q, axis=1)
    pe_mag = np.linalg.norm(pe, axis=1)
    omega = ebeam - pe_mag
    Q2 = q_mag ** 2 - omega ** 2
    xB = Q2 / (2.0 * MN * omega + 1e-30)
    theta_e = np.degrees(np.arctan2(np.hypot(pe[:, 0], pe[:, 1]), pe[:, 2]))
    p1 = lead - q
    lead_over_q = np.linalg.norm(lead, axis=1) / (q_mag + 1e-30)
    theta_pq = angle_deg(lead, q)
    r2_mag, r3_mag = np.linalg.norm(r2, axis=1), np.linalg.norm(r3, axis=1)
    above2, above3 = r2_mag > KF, r3_mag > KF
    bm = base_mask(w, theta_e, Q2)

    if ndetect == 3:
        sel = bm & above2 & above3
        return make_record(p1[sel], r2[sel], r3[sel], w[sel],
                           lead_over_q[sel], theta_pq[sel], xB[sel], 3)
    only2, only3 = above2 & ~above3, above3 & ~above2
    sel = bm & (only2 | only3)
    recoil = np.where(only2[:, None], r2, r3)
    p1s, rs = p1[sel], recoil[sel]
    p3 = -(p1s + rs)
    return make_record(p1s, rs, p3, w[sel], lead_over_q[sel],
                       theta_pq[sel], xB[sel], 2)


def build_2N_nofsi(path):
    arr = uproot.open(path)['events'].arrays(
        ['weight', 'lead_pre', 'recoil_pre', 'q', 'Q2', 'scattering_angle', 'xB'],
        library='np')
    w = arr['weight']
    lead, rec, q = arr['lead_pre'][:, :3], arr['recoil_pre'][:, :3], arr['q'][:, :3]
    q_mag = np.linalg.norm(q, axis=1)
    bm = base_mask(w, arr['scattering_angle'], arr['Q2'])
    sel = bm & (np.linalg.norm(lead, axis=1) > KF) & (np.linalg.norm(rec, axis=1) > KF)
    p1 = lead[sel] - q[sel]
    p3 = -(p1 + rec[sel])
    lead_over_q = np.linalg.norm(lead[sel], axis=1) / (q_mag[sel] + 1e-30)
    theta_pq = angle_deg(lead[sel], q[sel])
    return make_record(p1, rec[sel], p3, w[sel], lead_over_q,
                       theta_pq, arr['xB'][sel], 2)


def build_2N_fsi(path, ndetect):
    flat = uproot.open(path)['events'].arrays(
        ['weight', 'lead_post', 'recoil_post', 'q', 'Q2', 'scattering_angle',
         'xB', 'nAboveKF'], library='np')
    w = flat['weight']
    lead, rec, q = flat['lead_post'][:, :3], flat['recoil_post'][:, :3], flat['q'][:, :3]
    q_mag = np.linalg.norm(q, axis=1)
    p1 = lead - q
    lead_over_q = np.linalg.norm(lead, axis=1) / (q_mag + 1e-30)
    theta_pq = angle_deg(lead, q)
    bm = base_mask(w, flat['scattering_angle'], flat['Q2'])

    if ndetect == 2:
        sel = bm & (flat['nAboveKF'] == 2)
        p1s, rs = p1[sel], rec[sel]
        p3 = -(p1s + rs)
        return make_record(p1s, rs, p3, w[sel], lead_over_q[sel],
                           theta_pq[sel], flat['xB'][sel], 2)
    sec = uproot.open(path)['events'].arrays(
        ['sec_pdg', 'sec_px', 'sec_py', 'sec_pz'], library='ak')
    (p3,), n_valid = topk_secondary_nucleons(sec, KF, 1)
    sel = bm & (flat['nAboveKF'] >= 3) & (n_valid >= 1)
    return make_record(p1[sel], rec[sel], p3[sel], w[sel],
                       lead_over_q[sel], theta_pq[sel], flat['xB'][sel], 3)


def build_MF(path, ndetect):
    flat = uproot.open(path)['events'].arrays(
        ['weight', 'lead_post', 'q', 'Q2', 'scattering_angle', 'xB'], library='np')
    sec = uproot.open(path)['events'].arrays(
        ['sec_pdg', 'sec_px', 'sec_py', 'sec_pz'], library='ak')
    w = flat['weight']
    lead, q = flat['lead_post'][:, :3], flat['q'][:, :3]
    q_mag = np.linalg.norm(q, axis=1)
    lead_above = np.linalg.norm(lead, axis=1) > KF
    p1 = lead - q
    lead_over_q = np.linalg.norm(lead, axis=1) / (q_mag + 1e-30)
    theta_pq = angle_deg(lead, q)
    bm = base_mask(w, flat['scattering_angle'], flat['Q2'])

    if ndetect == 2:
        (p2,), n_valid = topk_secondary_nucleons(sec, KF, 1)
        sel = bm & lead_above & (n_valid == 1)
        p1s, p2s = p1[sel], p2[sel]
        p3 = -(p1s + p2s)
        return make_record(p1s, p2s, p3, w[sel], lead_over_q[sel],
                           theta_pq[sel], flat['xB'][sel], 2)
    (p2, p3), n_valid = topk_secondary_nucleons(sec, KF, 2)
    sel = bm & lead_above & (n_valid == 2)
    return make_record(p1[sel], p2[sel], p3[sel], w[sel],
                       lead_over_q[sel], theta_pq[sel], flat['xB'][sel], 3)


# ───────────────────────── finalize + plot ─────────────────────────
def src_mask(d):
    m = ((d['lead_over_q'] > SRC_LEAD_OVER_Q)
         & (d['pmiss'] > SRC_PMISS_LO) & (d['pmiss'] < SRC_PMISS_HI)
         & (d['xB'] < SRC_XB_MAX)
         & (d['theta_pq'] < SRC_THETA_PQ_MAX))
    if d['ndetect'] == 3:
        m = m & (d['interplane'] < SRC_INTERPLANE_MAX)
    return m


def finalize_and_plot(d, title, out_path, apply_src, bins, dpi):
    mask = src_mask(d) if apply_src else np.ones(len(d['w']), bool)
    w, t12, t23, t13 = d['w'][mask], d['t12'][mask], d['t23'][mask], d['t13'][mask]
    if d['ndetect'] == 3:                       # symmetrise 2<->3
        T12 = np.concatenate([t12, t13])
        T23 = np.concatenate([t23, t23])
        W = np.concatenate([w, w])
    else:
        T12, T23, W = t12, t23, w

    h, xe, ye = np.histogram2d(T12, T23, bins=bins, range=[[0, 180], [0, 180]],
                               weights=W)
    h_norm = h / (h.sum() + 1e-30)
    h_plot = np.where(h_norm > 0, h_norm, np.nan)
    pos = h_norm[h_norm > 0]
    vmin = pos.min() if pos.size else 1e-10
    vmax = pos.max() if pos.size else 1e-2

    fig, ax = plt.subplots(figsize=figure_size(cols=1, ratio=0.92))
    x = np.linspace(0, 180, 200)
    for xs, ys in [(x, 180 - x / 2), (180 - x / 2, x), (x, x)]:
        ax.plot(xs, ys, ls='--', lw=0.6, color=OVERLAY_COLOR, alpha=0.6)
    im = ax.pcolormesh(xe, ye, h_plot.T, cmap=CMAP,
                       norm=LogNorm(vmin=vmin, vmax=vmax),
                       shading='auto', rasterized=True)
    cb = fig.colorbar(im, ax=ax, pad=0.02, fraction=0.046)
    cb.set_label('Normalized weight / bin')
    ax.set_xlim(0, 180); ax.set_ylim(0, 180); ax.set_aspect('equal')
    ax.set_xticks(np.arange(0, 181, 30)); ax.set_yticks(np.arange(0, 181, 30))
    ax.set_xlabel(r'$\theta_{12}$ (deg)')
    ax.set_ylabel(r'$\theta_{23}$ (deg)')
    ax.set_title(title, fontsize=9)
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    fig.tight_layout()
    fig.savefig(out_path, dpi=dpi)
    plt.close(fig)

    wtot = W.sum() + 1e-30
    fr_L = W[in_region_L(T12, T23)].sum() / wtot
    fr_R = W[in_region_R(T12, T23)].sum() / wtot
    n_eff = (W.sum() ** 2) / (np.sum(W ** 2) + 1e-30)
    print(f'    {os.path.basename(out_path):28s} entries={len(W):>9d} '
          f'N_eff={n_eff:>8.0f}  L={fr_L:.4f} R={fr_R:.4f}')
    return fr_L, fr_R


def write_fractions(path, header, rows):
    with open(path, 'w') as fh:
        fh.write(header)
        fh.write(f'{"plot":24s} {"frac_L":>10s} {"frac_R":>10s}\n')
        for fname, fr_L, fr_R in rows:
            fh.write(f'{fname:24s} {fr_L:10.4f} {fr_R:10.4f}\n')


def main():
    p = argparse.ArgumentParser()
    p.add_argument('--input-3N', default='events/3N_FSI_15M_12C.root')
    p.add_argument('--input-2N', default='../genQE_FSI/events/misc/events_2N.root')
    p.add_argument('--input-MF',
                   default='../genQE_FSI/events/hA/events_2N_fsi_hA_501_MF.root')
    p.add_argument('--out-dir', default='analysis/Plots/detection_heatmaps')
    p.add_argument('--ebeam-3N', type=float, default=6.0)
    p.add_argument('--bins', type=int, default=120)
    p.add_argument('--dpi', type=int, default=400)
    args = p.parse_args()

    apply_style()
    script_dir = os.path.dirname(os.path.abspath(__file__))
    root_dir = os.path.abspath(os.path.join(script_dir, '..'))
    def resolve(pth):
        return pth if os.path.isabs(pth) else os.path.join(root_dir, pth)
    in3, in2, inMF = resolve(args.input_3N), resolve(args.input_2N), resolve(args.input_MF)
    base_out = resolve(args.out_dir)
    dir_base = os.path.join(base_out, 'baseline')
    dir_src = os.path.join(base_out, 'src_cuts')

    # (filename, title, builder) — each builder loads its file ONCE and applies
    # the base cuts; both cut variants are plotted from the same record.
    jobs = [
        ('3N_noFSI_detect3',     '3N (no FSI), 3 detected',
            lambda: build_3N(in3, 3, True,  args.ebeam_3N)),
        ('2N_FSI_detect3',       '2N + FSI, 3 detected',
            lambda: build_2N_fsi(in2, 3)),
        ('2N_noFSI_detect2',     '2N (no FSI), 2 detected',
            lambda: build_2N_nofsi(in2)),
        ('3N_FSI_detect2',       '3N + FSI, 2 detected',
            lambda: build_3N(in3, 2, False, args.ebeam_3N)),
        ('2N_FSI_detect2',       '2N + FSI, 2 detected',
            lambda: build_2N_fsi(in2, 2)),
        ('3N_FSI_detect3',       '3N + FSI, 3 detected',
            lambda: build_3N(in3, 3, False, args.ebeam_3N)),
        ('MFglobal_FSI_detect2', 'MF(global) + FSI, 2 detected',
            lambda: build_MF(inMF, 2)),
        ('MFglobal_FSI_detect3', 'MF(global) + FSI, 3 detected',
            lambda: build_MF(inMF, 3)),
    ]

    base_rows, src_rows = [], []
    for fname, title, builder in jobs:
        print(f'{title}')
        d = builder()
        b = finalize_and_plot(d, title, os.path.join(dir_base, fname + '.pdf'),
                              False, args.bins, args.dpi)
        s = finalize_and_plot(d, title, os.path.join(dir_src, fname + '.pdf'),
                              True, args.bins, args.dpi)
        base_rows.append((fname, *b))
        src_rows.append((fname, *s))

    write_fractions(os.path.join(dir_base, 'region_fractions.txt'),
                    f'# Region L/R weighted fractions (A=135 deg, K=4)\n'
                    f'# cuts: {THETA_E_MIN}<theta_e<{THETA_E_MAX} deg, '
                    f'Q2>={Q2_MIN}; kF={KF}\n', base_rows)
    write_fractions(os.path.join(dir_src, 'region_fractions.txt'),
                    f'# Region L/R weighted fractions (A=135 deg, K=4)\n'
                    f'# cuts: {THETA_E_MIN}<theta_e<{THETA_E_MAX} deg, Q2>={Q2_MIN}, '
                    f'pLead/q>{SRC_LEAD_OVER_Q}, {SRC_PMISS_LO}<pmiss<{SRC_PMISS_HI}, '
                    f'xB<{SRC_XB_MAX}, theta_pq<{SRC_THETA_PQ_MAX}, '
                    f'interplane<{SRC_INTERPLANE_MAX} (3-det); kF={KF}\n', src_rows)
    print(f'\nbaseline -> {dir_base}')
    print(f'src_cuts -> {dir_src}')
    print('All done.')


if __name__ == '__main__':
    main()
