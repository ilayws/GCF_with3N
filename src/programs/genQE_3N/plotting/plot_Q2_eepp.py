#!/usr/bin/env python3
"""Q^2 distributions / ratios in the (e,e'p) / (e,e'pp) channels.

Plot 1: weighted Q^2 distribution of 2N (e,e'pp) events WITH and WITHOUT FSI.
Plot 2: R = MF(e,e'p) / (MF(e,e'p) + C * 2N-SRC(e,e'pp))  vs Q^2, WITH and
        WITHOUT FSI; C chosen (per curve) so the lowest-Q^2 point = 0.6.
Plot 3: the two pieces MF(Q^2) and C*2N(Q^2) on one figure.

All Q^2-dependence plots use a LOG x-axis over [0.1, 10] GeV^2.  The 2N
generator samples Q^2 only in [1, 10] GeV^2, so there is no data below
Q^2 = 1; that lower bound is drawn as a dotted vertical line and the empty
[0.1, 1] decade is left visible.

Detection channels (kF = 0.25 GeV/c; p/n counted over lead + recoil + FSI secs):
  (e,e'pp) : exactly 2 nucleons above kF, both protons  (n_p==2, n_n==0)
  (e,e'p)  : exactly 1 nucleon above kF, a proton        (n_p==1, n_n==0)

Samples (Ebeam = 5.01 GeV, sigma_CM = 0.15; hA FSI -- no hN+CM sample exists):
  2N SRC no FSI : pwia/events_2N_pwia_501_SRC.root   2N SRC +FSI : hA/events_2N_fsi_hA_501_SRC.root
  MF    no FSI : pwia/events_2N_pwia_501_MF.root     MF    +FSI : hA/events_2N_fsi_hA_501_MF.root
"""
import argparse
import os
import sys

import numpy as np
import uproot
import awkward as ak
import matplotlib.pyplot as plt

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from paper_style import apply_style, figure_size, LINE_COLORS

# CLAS acceptance machinery from the natalie-paper analysis (only needed with
# --acceptance).
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)),
                                '..', '..', 'genQE_FSI', 'analysis'))
try:
    from clas_acceptance import ClasAcceptance, apply_acceptance_pipeline
except Exception:
    ClasAcceptance = None

KF = 0.25
P_CODE, N_CODE = 2212, 2112
ANCHOR = 0.6             # lowest-Q^2 point of each ratio curve -> this value
Q2_LO, Q2_HI = 0.1, 10.0  # log x-axis range [GeV^2]
Q2_GEN_MIN = 1.0          # generator Q^2 sampling lower bound (no data below)


def q2_log_edges(bins):
    return np.logspace(np.log10(Q2_LO), np.log10(Q2_HI), bins + 1)


def geo_centers(edges):
    return np.sqrt(edges[:-1] * edges[1:])


def mark_gen_cut(ax):
    # Only mark the generator Q^2 floor when it sits inside the axis (i.e. the
    # data actually start above the axis edge). For Q2min=0.1 == Q2_LO there is
    # nothing to mark.
    if Q2_GEN_MIN <= Q2_LO * 1.001:
        return
    ax.axvline(Q2_GEN_MIN, ls=':', lw=0.8, color='0.4')
    ax.text(Q2_GEN_MIN * 0.96, 0.02, rf'gen. $Q^2\!\geq\!{Q2_GEN_MIN:g}$',
            rotation=90, ha='right', va='bottom', fontsize=6, color='0.4',
            transform=ax.get_xaxis_transform())


def load_channel(path, n_p_req):
    """(Q2, weight) for events with exactly n_p_req protons above kF and zero
    neutrons above kF (lead + recoil + FSI secondaries)."""
    t = uproot.open(path)['events']
    flat = t.arrays(['weight', 'Q2', 'lead_type', 'rec_type',
                     'lead_post', 'recoil_post'], library='np')
    sec = t.arrays(['sec_pdg', 'sec_px', 'sec_py', 'sec_pz'], library='ak')
    w = flat['weight']
    lead_mag = np.linalg.norm(flat['lead_post'][:, :3], axis=1)
    rec_mag = np.linalg.norm(flat['recoil_post'][:, :3], axis=1)
    n_p = (((flat['lead_type'] == P_CODE) & (lead_mag > KF)).astype(int)
           + ((flat['rec_type'] == P_CODE) & (rec_mag > KF)).astype(int))
    n_n = (((flat['lead_type'] == N_CODE) & (lead_mag > KF)).astype(int)
           + ((flat['rec_type'] == N_CODE) & (rec_mag > KF)).astype(int))
    smag = np.sqrt(sec.sec_px ** 2 + sec.sec_py ** 2 + sec.sec_pz ** 2)
    n_p += ak.to_numpy(ak.sum((sec.sec_pdg == P_CODE) & (smag > KF), axis=1))
    n_n += ak.to_numpy(ak.sum((sec.sec_pdg == N_CODE) & (smag > KF), axis=1))
    sel = (w > 0) & np.isfinite(w) & (n_p == n_p_req) & (n_n == 0)
    chan = "(e,e'pp)" if n_p_req == 2 else "(e,e'p) "
    print(f'  {os.path.basename(path):34s} {chan} {int(sel.sum()):>8d} events')
    return flat['Q2'][sel], w[sel]


def load_channel_acc(path, n_p_req, acc, ebeam):
    """Like load_channel, but additionally applies the CLAS acceptance exactly
    as the natalie-paper pipeline does (apply_acceptance_pipeline): per-event
    momentum smearing, electron+proton fiducial cuts, and proton map weights.
      (e,e'pp): electron + lead + recoil fiducial, weight *= map_lead*map_rec
      (e,e'p) : electron + lead fiducial,          weight *= map_lead
    Returns the SMEARED (Q2, weight) for events inside the acceptance."""
    t = uproot.open(path)['events']
    flat = t.arrays(['weight', 'lead_type', 'rec_type', 'lead_post',
                     'recoil_post', 'electron', 'q'], library='np')
    sec = t.arrays(['sec_pdg', 'sec_px', 'sec_py', 'sec_pz'], library='ak')
    w = flat['weight']
    lead_mag = np.linalg.norm(flat['lead_post'][:, :3], axis=1)
    rec_mag = np.linalg.norm(flat['recoil_post'][:, :3], axis=1)
    n_p = (((flat['lead_type'] == P_CODE) & (lead_mag > KF)).astype(int)
           + ((flat['rec_type'] == P_CODE) & (rec_mag > KF)).astype(int))
    n_n = (((flat['lead_type'] == N_CODE) & (lead_mag > KF)).astype(int)
           + ((flat['rec_type'] == N_CODE) & (rec_mag > KF)).astype(int))
    smag = np.sqrt(sec.sec_px ** 2 + sec.sec_py ** 2 + sec.sec_pz ** 2)
    n_p += ak.to_numpy(ak.sum((sec.sec_pdg == P_CODE) & (smag > KF), axis=1))
    n_n += ak.to_numpy(ak.sum((sec.sec_pdg == N_CODE) & (smag > KF), axis=1))
    sel = (w > 0) & np.isfinite(w) & (n_p == n_p_req) & (n_n == 0)

    d = {'electron': flat['electron'][sel], 'lead_post': flat['lead_post'][sel],
         'recoil_post': flat['recoil_post'][sel], 'q': flat['q'][sel],
         'weight': w[sel]}
    apply_acceptance_pipeline(d, acc, ebeam=ebeam)
    if n_p_req == 2:
        amask, aw = d['acc_mask_epp'], d['acc_w_epp']
    else:
        amask, aw = d['acc_mask_ep'], d['acc_w_ep']
    q2 = d['Q2_calc'][amask]
    ww = (d['weight'] * aw)[amask]
    chan = "(e,e'pp)" if n_p_req == 2 else "(e,e'p) "
    print(f"  {os.path.basename(path):34s} {chan} {int(sel.sum()):>8d} sel -> "
          f"{int(amask.sum()):>8d} accepted")
    return q2, ww


def _whist(q2, w, edges):
    hw, _ = np.histogram(q2, bins=edges, weights=w)
    hw2, _ = np.histogram(q2, bins=edges, weights=w ** 2)
    return hw, hw2


def _setup_logx(ax):
    ax.set_xscale('log')
    ax.set_xlim(Q2_LO, Q2_HI)
    ax.set_xlabel(r'$Q^2$  (GeV$^2$)')
    mark_gen_cut(ax)


def plot_q2_dists(samples, out_path, bins, dpi):
    edges = q2_log_edges(bins)
    centers = geo_centers(edges)
    width = np.diff(edges)
    fig, ax = plt.subplots(figsize=figure_size(cols=1, ratio=0.78))
    for label, q2, w, color in samples:
        h, _ = _whist(q2, w, edges)
        dens = np.where(h > 0, h / width, np.nan)
        ax.step(centers, dens, where='mid', lw=1.4, color=color, label=label)
    ax.set_yscale('log')
    _setup_logx(ax)
    ax.set_ylabel(r'weighted yield  $d\sigma/dQ^2$  (arb.)')
    ax.legend(frameon=False, fontsize=8)
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    fig.tight_layout()
    fig.savefig(out_path, dpi=dpi)
    plt.close(fig)
    print(f'  saved {out_path}')


def plot_mf_fraction(curves, out_path, bins, dpi, ylabel):
    """R = MF / (MF + C*2N) per Q^2 bin; C per curve so R(lowest bin)=ANCHOR."""
    edges = q2_log_edges(bins)
    centers = geo_centers(edges)
    fig, ax = plt.subplots(figsize=figure_size(cols=1, ratio=0.78))
    for label, mf, twoN, color in curves:
        nw, nw2 = _whist(mf[0], mf[1], edges)
        dw, dw2 = _whist(twoN[0], twoN[1], edges)
        valid = (nw > 0) & (dw > 0)
        aidx = np.flatnonzero(valid)[0]          # lowest populated Q^2 bin
        C = (1.0 - ANCHOR) / ANCHOR * nw[aidx] / dw[aidx]
        D = nw + C * dw
        R = np.full_like(nw, np.nan, dtype=float)
        ok = valid & (D > 0)
        R[ok] = nw[ok] / D[ok]
        var = np.zeros_like(R)
        var[ok] = (C ** 2 / D[ok] ** 4) * (dw[ok] ** 2 * nw2[ok]
                                           + nw[ok] ** 2 * dw2[ok])
        ax.errorbar(centers[ok], R[ok], yerr=np.sqrt(var[ok]), fmt='o', ms=3,
                    lw=1.0, color=color, capsize=2, label=label)
        print(f'    {label}: C={C:.4g}  (anchor bin @ {centers[aidx]:.2f} '
              f'GeV^2 -> R={ANCHOR})')
    ax.set_ylim(0, 1.0)
    ax.axhline(ANCHOR, ls=':', lw=0.6, color='gray')
    _setup_logx(ax)
    ax.set_ylabel(ylabel)
    ax.legend(frameon=False, fontsize=8)
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    fig.tight_layout()
    fig.savefig(out_path, dpi=dpi)
    plt.close(fig)
    print(f'  saved {out_path}')


def plot_components(curves, out_path, bins, dpi):
    """MF(Q^2) and C*2N(Q^2) weighted-yield densities on one figure."""
    edges = q2_log_edges(bins)
    centers = geo_centers(edges)
    width = np.diff(edges)
    fig, ax = plt.subplots(figsize=figure_size(cols=1, ratio=0.78))
    for cond, mf, twoN, color in curves:
        nw, _ = _whist(mf[0], mf[1], edges)
        dw, _ = _whist(twoN[0], twoN[1], edges)
        valid = (nw > 0) & (dw > 0)
        aidx = np.flatnonzero(valid)[0]          # lowest populated Q^2 bin
        C = (1.0 - ANCHOR) / ANCHOR * nw[aidx] / dw[aidx]
        ax.step(centers, np.where(nw > 0, nw / width, np.nan), where='mid',
                lw=1.4, ls='-', color=color, label=f'MF ({cond})')
        ax.step(centers, np.where(dw > 0, C * dw / width, np.nan), where='mid',
                lw=1.4, ls='--', color=color, label=rf'$C\cdot$2N ({cond})')
        print(f'    {cond}: C={C:.4g}')
    ax.set_yscale('log')
    _setup_logx(ax)
    ax.set_ylabel(r'weighted yield  $d\sigma/dQ^2$  (arb.)')
    ax.legend(frameon=False, fontsize=7)
    os.makedirs(os.path.dirname(out_path), exist_ok=True)
    fig.tight_layout()
    fig.savefig(out_path, dpi=dpi)
    plt.close(fig)
    print(f'  saved {out_path}')


def main():
    p = argparse.ArgumentParser()
    base = '../genQE_FSI/events'
    p.add_argument('--src-fsi',  default=f'{base}/hA/events_2N_fsi_hA_501_SRC.root')
    p.add_argument('--src-pwia', default=f'{base}/pwia/events_2N_pwia_501_SRC.root')
    p.add_argument('--mf-fsi',   default=f'{base}/hA/events_2N_fsi_hA_501_MF.root')
    p.add_argument('--mf-pwia',  default=f'{base}/pwia/events_2N_pwia_501_MF.root')
    p.add_argument('--out-dir', default='analysis/Plots/Q2_eepp')
    p.add_argument('--bins', type=int, default=40)
    p.add_argument('--dpi', type=int, default=400)
    p.add_argument('--gen-q2min', type=float, default=1.0,
                   help='generator Q^2 floor to mark (use 0.1 for the Q2min=0.1 samples)')
    p.add_argument('--acceptance', action='store_true',
                   help='apply CLAS acceptance (smearing+fiducial+map) per natalie pipeline')
    p.add_argument('--acc-map', default='../genQE_FSI/Acceptance/map_eg2_adin.root')
    p.add_argument('--acc-seed', type=int, default=42)
    p.add_argument('--ebeam', type=float, default=5.01)
    args = p.parse_args()
    global Q2_GEN_MIN
    Q2_GEN_MIN = args.gen_q2min

    apply_style()
    script_dir = os.path.dirname(os.path.abspath(__file__))
    root_dir = os.path.abspath(os.path.join(script_dir, '..'))
    res = lambda q: q if os.path.isabs(q) else os.path.join(root_dir, q)
    out_dir = res(args.out_dir)

    if args.acceptance:
        if ClasAcceptance is None:
            sys.exit('ERROR: clas_acceptance not importable; cannot apply acceptance')
        acc = ClasAcceptance(res(args.acc_map), seed=args.acc_seed)
        load = lambda path, npr: load_channel_acc(res(path), npr, acc, args.ebeam)
        print('Loading events (with CLAS acceptance):')
    else:
        load = lambda path, npr: load_channel(res(path), npr)
        print('Loading events:')
    q2_src_fsi,  w_src_fsi  = load(args.src_fsi, 2)
    q2_src_pwia, w_src_pwia = load(args.src_pwia, 2)
    q2_mf_fsi,   w_mf_fsi   = load(args.mf_fsi, 1)
    q2_mf_pwia,  w_mf_pwia  = load(args.mf_pwia, 1)
    print(f'\nQ^2 axis: log [{Q2_LO}, {Q2_HI}] GeV^2, {args.bins} bins; '
          f'generator Q^2 floor = {Q2_GEN_MIN}\n')

    plot_q2_dists(
        [('2N (no FSI)', q2_src_pwia, w_src_pwia, LINE_COLORS[1]),
         ('2N + FSI (hA)', q2_src_fsi, w_src_fsi, LINE_COLORS[0])],
        os.path.join(out_dir, 'Q2_2N_FSI_vs_noFSI_eepp.pdf'), args.bins, args.dpi)

    plot_mf_fraction(
        [('no FSI', (q2_mf_pwia, w_mf_pwia), (q2_src_pwia, w_src_pwia), LINE_COLORS[1]),
         ('with FSI (hA)', (q2_mf_fsi, w_mf_fsi), (q2_src_fsi, w_src_fsi), LINE_COLORS[0])],
        os.path.join(out_dir, 'MFfrac_MF_over_MFplusC2N_vs_Q2.pdf'), args.bins, args.dpi,
        r"MF / (MF $+\,C\,$2N)   [MF$=(e,e'p)$, 2N$=(e,e'pp)$]")

    plot_components(
        [('no FSI', (q2_mf_pwia, w_mf_pwia), (q2_src_pwia, w_src_pwia), LINE_COLORS[1]),
         ('with FSI (hA)', (q2_mf_fsi, w_mf_fsi), (q2_src_fsi, w_src_fsi), LINE_COLORS[0])],
        os.path.join(out_dir, 'components_MF_and_C2N_vs_Q2.pdf'), args.bins, args.dpi)
    print('\nDone.')


if __name__ == '__main__':
    main()
