#!/usr/bin/env python3
"""Side-by-side theta12-theta23 heatmap: 3N+FSI vs 2N+FSI.

Both panels use the same 2N-style angle conventions (p_miss = p_lead - q,
p3_recon = -(p_miss + p_recoil_measured)) and the same cut chain. The only
difference is the input sample.

Cuts (default; flags can override):
    weight > 0
    detector tag:
        - 3N: |p_lead| > kF AND at least one recoil above kF;
              if both above kF, pick the higher-|p| one as the measured recoil.
        - 2N: nAboveKF == 2 (both nucleons above kF; the only 2N-quality tag).
    theta_e < 45 deg
    Q^2 > 1.0 GeV^2
    xB < 1.2

The tighter SRC-trigger cuts (theta_pq, lead/q, |p_miss| range) are NOT
applied here -- this matches the user's "drop those three cuts" request.

Both panels share a single colour scale so visual comparison is direct.
"""
import argparse
import os
import sys

import numpy as np
import uproot
import matplotlib.pyplot as plt
from matplotlib.colors import LogNorm

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from paper_style import apply_style, figure_size, CMAP, OVERLAY_COLOR


kF = 0.25
mN = 0.93892


def angle_deg(ax, ay, az, bx, by, bz):
    dot = ax * bx + ay * by + az * bz
    a = np.sqrt(ax * ax + ay * ay + az * az)
    b = np.sqrt(bx * bx + by * by + bz * bz)
    return np.degrees(np.arccos(np.clip(dot / (a * b + 1e-30), -1.0, 1.0)))


# ---------- 3N sample (raw genQE_3N_FSI tree) -------------------------------
def load_3N(path, ebeam, theta_e_max, Q2_min, xB_max, kF_thr,
            theta_pq_max=180.0, lead_over_q_min=0.0,
            pmiss_lo=0.0, pmiss_hi=1e9, mode='ge2',
            theta_e_min=0.0):
    print(f'Reading 3N+FSI: {path}')
    with uproot.open(path) as f:
        arr = f['genT'].arrays(
            ['weight', 'pe', 'pLead', 'p2', 'p3'],
            library='np',
        )
    w  = arr['weight']
    pe = arr['pe']
    pL = arr['pLead']; p2 = arr['p2']; p3 = arr['p3']

    qx = -pe[:, 0]; qy = -pe[:, 1]; qz = ebeam - pe[:, 2]
    q_mag = np.sqrt(qx**2 + qy**2 + qz**2)
    pe_mag = np.sqrt((pe**2).sum(axis=1))
    omega = ebeam - pe_mag
    Q2 = q_mag**2 - omega**2
    xB = Q2 / (2.0 * mN * omega + 1e-30)
    theta_e = np.degrees(np.arctan2(np.sqrt(pe[:, 0]**2 + pe[:, 1]**2),
                                    pe[:, 2]))

    pL_mag = np.sqrt((pL**2).sum(axis=1))
    p2_mag = np.sqrt((p2**2).sum(axis=1))
    p3_mag = np.sqrt((p3**2).sum(axis=1))

    above_L  = pL_mag > kF_thr
    above_p2 = p2_mag > kF_thr
    above_p3 = p3_mag > kF_thr
    only_p2 = above_p2 & ~above_p3
    only_p3 = above_p3 & ~above_p2
    both    = above_p2 & above_p3

    if mode == 'eq2':
        # exactly 2 of {lead, p2, p3} above kF, with the lead always one of them
        detector = above_L & (only_p2 | only_p3)
        use_p2 = detector & only_p2
        use_p3 = detector & only_p3
    elif mode == 'ge2':
        # lead above kF AND at least one recoil above kF; pick higher-|p|
        detector = above_L & (above_p2 | above_p3)
        use_p2 = detector & (only_p2 | (both & (p2_mag >= p3_mag)))
        use_p3 = detector & (only_p3 | (both & (p3_mag >  p2_mag)))
    else:
        raise ValueError(f"mode must be 'eq2' or 'ge2', got {mode!r}")

    rx = np.where(use_p2, p2[:, 0], p3[:, 0])
    ry = np.where(use_p2, p2[:, 1], p3[:, 1])
    rz = np.where(use_p2, p2[:, 2], p3[:, 2])

    p_miss_x = pL[:, 0] - qx
    p_miss_y = pL[:, 1] - qy
    p_miss_z = pL[:, 2] - qz
    p_miss_mag = np.sqrt(p_miss_x**2 + p_miss_y**2 + p_miss_z**2)

    p3rec_x = -(p_miss_x + rx)
    p3rec_y = -(p_miss_y + ry)
    p3rec_z = -(p_miss_z + rz)

    theta12 = angle_deg(p_miss_x, p_miss_y, p_miss_z, rx, ry, rz)
    theta23 = angle_deg(rx, ry, rz, p3rec_x, p3rec_y, p3rec_z)

    theta_pq    = angle_deg(pL[:, 0], pL[:, 1], pL[:, 2], qx, qy, qz)
    lead_over_q = pL_mag / (q_mag + 1e-30)

    mask = (np.isfinite(w) & (w > 0) & detector
            & (theta_e > theta_e_min) & (theta_e < theta_e_max)
            & (Q2 > Q2_min)
            & (xB < xB_max)
            & (theta_pq < theta_pq_max)
            & (lead_over_q > lead_over_q_min)
            & (p_miss_mag > pmiss_lo) & (p_miss_mag < pmiss_hi))
    print(f'  total entries: {len(w)}; passing 3N cuts ({mode}): {int(mask.sum())}')
    return theta12[mask], theta23[mask], w[mask]


# ---------- 2N sample (processed events_2N.root) ----------------------------
def load_2N(path, theta_e_max, Q2_min, xB_max, kF_thr=kF,
            theta_pq_max=180.0, lead_over_q_min=0.0,
            pmiss_lo=0.0, pmiss_hi=1e9, mode='ge2',
            theta_e_min=0.0):
    print(f'Reading 2N+FSI: {path}')
    with uproot.open(path) as f:
        arr = f['events'].arrays(
            ['weight', 'lead_post', 'recoil_post', 'q',
             'Q2', 'xB', 'scattering_angle', 'pmiss', 'nAboveKF'],
            library='np',
        )
    w        = arr['weight']
    Q2       = arr['Q2']
    xB       = arr['xB']
    theta_e  = arr['scattering_angle']
    pmiss    = arr['pmiss']
    nAbove   = arr['nAboveKF']
    lp = arr['lead_post']; rp = arr['recoil_post']; q = arr['q']

    lp_mag = np.sqrt(lp[:, 0]**2 + lp[:, 1]**2 + lp[:, 2]**2)
    rp_mag = np.sqrt(rp[:, 0]**2 + rp[:, 1]**2 + rp[:, 2]**2)
    q_mag  = np.sqrt(q[:, 0]**2 + q[:, 1]**2 + q[:, 2]**2)

    if mode == 'eq2':
        # Strict tag: tree's nAboveKF == 2 (no FSI secondary above kF).
        # Mirrors the paper's 2N+FSI cut.
        detector = (nAbove == 2)
    elif mode == 'ge2':
        # Loose tag: lead and recoil both above kF (FSI may have kicked
        # extra nucleons above kF; we don't have their 4-vectors anyway).
        detector = (lp_mag > kF_thr) & (rp_mag > kF_thr)
    else:
        raise ValueError(f"mode must be 'eq2' or 'ge2', got {mode!r}")

    p_miss_x = lp[:, 0] - q[:, 0]
    p_miss_y = lp[:, 1] - q[:, 1]
    p_miss_z = lp[:, 2] - q[:, 2]

    p3rec_x = -(p_miss_x + rp[:, 0])
    p3rec_y = -(p_miss_y + rp[:, 1])
    p3rec_z = -(p_miss_z + rp[:, 2])

    theta12 = angle_deg(p_miss_x, p_miss_y, p_miss_z,
                        rp[:, 0], rp[:, 1], rp[:, 2])
    theta23 = angle_deg(rp[:, 0], rp[:, 1], rp[:, 2],
                        p3rec_x, p3rec_y, p3rec_z)

    theta_pq    = angle_deg(lp[:, 0], lp[:, 1], lp[:, 2],
                            q[:, 0], q[:, 1], q[:, 2])
    lead_over_q = lp_mag / (q_mag + 1e-30)

    mask = (np.isfinite(w) & (w > 0)
            & detector
            & (theta_e > theta_e_min) & (theta_e < theta_e_max)
            & (Q2 > Q2_min)
            & (xB < xB_max)
            & (theta_pq < theta_pq_max)
            & (lead_over_q > lead_over_q_min)
            & (pmiss > pmiss_lo) & (pmiss < pmiss_hi))
    print(f'  total entries: {len(w)}; passing 2N cuts ({mode}): {int(mask.sum())}')
    return theta12[mask], theta23[mask], w[mask]


def plot_panel(ax, t12, t23, w, bins, vmin, vmax):
    h, xe, ye = np.histogram2d(
        t12, t23, bins=bins, range=[[0, 180], [0, 180]], weights=w,
    )
    h_norm = h / (h.sum() + 1e-30)
    h_plot = np.where(h_norm > 0, h_norm, np.nan)
    im = ax.pcolormesh(xe, ye, h_plot.T, cmap=CMAP,
                       norm=LogNorm(vmin=vmin, vmax=vmax),
                       shading='auto', rasterized=True)

    x = np.linspace(0, 180, 200)
    line_kw = dict(color=OVERLAY_COLOR, linestyle='--', lw=0.7, alpha=0.85)
    ax.plot(x, 180.0 - x / 2.0, **line_kw)
    ax.plot(180.0 - x / 2.0, x, **line_kw)
    ax.plot(x, x, **line_kw)

    ax.set_xlim(0, 180); ax.set_ylim(0, 180)
    ax.set_aspect('equal')
    ax.set_xticks(np.arange(0, 181, 30))
    ax.set_yticks(np.arange(0, 181, 30))
    ax.set_xlabel(r'$\theta_{12}$ (deg)')
    return im


def main():
    p = argparse.ArgumentParser()
    p.add_argument('--input-3N', default='events/3N_FSI_5M_12C.root')
    p.add_argument('--input-2N',
                   default='../genQE_FSI/events/misc/events_2N.root')
    p.add_argument('--output',
                   default='analysis/Plots/theta_heatmap_3N_vs_2N.pdf')
    p.add_argument('--ebeam', type=float, default=6.0)
    p.add_argument('--bins',  type=int,   default=36)
    p.add_argument('--dpi',   type=int,   default=400)
    p.add_argument('--theta-e-min', type=float, default=8.0)
    p.add_argument('--theta-e-max', type=float, default=45.0)
    p.add_argument('--Q2-min',      type=float, default=1.0)
    p.add_argument('--xB-max',      type=float, default=1.2)
    p.add_argument('--kF',          type=float, default=kF)
    p.add_argument('--vmin', type=float, default=1e-5)
    p.add_argument('--vmax', type=float, default=5e-2)
    p.add_argument('--mode', choices=('eq2', 'ge2'), default='ge2',
                   help='detector tag: eq2 = exactly 2 above kF, ge2 = at least 2')
    p.add_argument('--theta-pq-max',    type=float, default=180.0)
    p.add_argument('--lead-over-q-min', type=float, default=0.0)
    p.add_argument('--pmiss-lo',        type=float, default=0.0)
    p.add_argument('--pmiss-hi',        type=float, default=1e9)
    args = p.parse_args()

    apply_style()

    script_dir = os.path.dirname(os.path.abspath(__file__))
    root_dir   = os.path.abspath(os.path.join(script_dir, '..'))
    in3 = args.input_3N if os.path.isabs(args.input_3N) else os.path.join(root_dir, args.input_3N)
    in2 = args.input_2N if os.path.isabs(args.input_2N) else os.path.join(root_dir, args.input_2N)
    out_path = args.output if os.path.isabs(args.output) else os.path.join(root_dir, args.output)
    os.makedirs(os.path.dirname(out_path), exist_ok=True)

    t12_3, t23_3, w_3 = load_3N(in3, args.ebeam,
                                args.theta_e_max, args.Q2_min, args.xB_max,
                                args.kF,
                                theta_pq_max=args.theta_pq_max,
                                lead_over_q_min=args.lead_over_q_min,
                                pmiss_lo=args.pmiss_lo,
                                pmiss_hi=args.pmiss_hi,
                                mode=args.mode,
                                theta_e_min=args.theta_e_min)
    t12_2, t23_2, w_2 = load_2N(in2,
                                args.theta_e_max, args.Q2_min, args.xB_max,
                                args.kF,
                                theta_pq_max=args.theta_pq_max,
                                lead_over_q_min=args.lead_over_q_min,
                                pmiss_lo=args.pmiss_lo,
                                pmiss_hi=args.pmiss_hi,
                                mode=args.mode,
                                theta_e_min=args.theta_e_min)

    n3 = len(w_3); n2 = len(w_2)

    fig, axes = plt.subplots(1, 2, sharey=True,
                             figsize=figure_size(cols=2, ratio=0.50))
    im_left  = plot_panel(axes[0], t12_3, t23_3, w_3,
                          args.bins, args.vmin, args.vmax)
    im_right = plot_panel(axes[1], t12_2, t23_2, w_2,
                          args.bins, args.vmin, args.vmax)

    axes[0].set_ylabel(r'$\theta_{23}$ (deg)')
    axes[1].tick_params(labelleft=False)

    tag_lbl = r'$n_{>k_F}=2$' if args.mode == 'eq2' else r'$n_{>k_F}\geq 2$'
    axes[0].set_title(r'3N+FSI on $^{12}$C (%s, $N=%d$)' % (tag_lbl, n3),
                      fontsize=8)
    axes[1].set_title(r'2N+FSI (%s, $N=%d$)' % (tag_lbl, n2),
                      fontsize=8)

    cbar = fig.colorbar(im_right, ax=axes, label='Normalized weight',
                        pad=0.02, fraction=0.046)
    cbar.ax.tick_params(labelsize=8)
    cbar.ax.yaxis.label.set_size(9)

    fig.savefig(out_path, dpi=args.dpi, bbox_inches='tight')
    png_path = os.path.splitext(out_path)[0] + '.png'
    fig.savefig(png_path, dpi=args.dpi, bbox_inches='tight')
    print(f'Saved {out_path}')
    print(f'Saved {png_path}')


if __name__ == '__main__':
    main()
