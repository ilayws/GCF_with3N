#!/usr/bin/env python3
"""theta12-theta23 heatmap from 3N+FSI events under a 2N+FSI selection.

We treat the 3N+FSI sample as if a real experiment had measured only two
nucleons (the lead plus one recoil) and reconstructed the third from
missing-momentum balance, mirroring the 2N+FSI Fig. 5 panel produced by
plot_fig5_theta_heatmap_pair.py.

For each event the post-FSI nucleon multiplicity above kF is computed:
    n_above_kF = (|pLead| > kF) + (|p2| > kF) + (|p3| > kF)

We keep events with `n_above_kF == 2` AND `|pLead| > kF` (the lead is
required to be one of the measured pair, since experimentally the SRC tag is
a forward fast proton). The remaining above-kF recoil is the "measured"
nucleon; the other recoil is the "missed/reconstructed" one.

Reconstruction:
    p_miss        = pLead - q
    p_recon_third = -(p_miss + p_recoil_measured)
    theta12       = angle(p_miss, p_recoil_measured)
    theta23       = angle(p_recoil_measured, p_recon_third)

Selection cuts (verbatim from plot_fig5_theta_heatmap_pair.py:182-188):
    weight > 0
    theta_e < 45 deg
    Q^2 > 1.0 GeV^2
    xB < 1.2
    angle(p_lead, q) < 8 deg
    |p_lead| / |q| > 0.75
    0.25 < |p_miss| < 0.90 GeV/c

plus the 3N-specific n_above_kF == 2 detector-acceptance cut.
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


def main():
    p = argparse.ArgumentParser()
    p.add_argument('--input',  default='events/3N_FSI_5M_12C.root',
                   help='ROOT file produced by genQE_3N_FSI')
    p.add_argument('--output', default='analysis/Plots/theta_heatmap_3N_FSI_2NLike.pdf')
    p.add_argument('--ebeam', type=float, default=6.0,
                   help='Beam energy in GeV (along +z)')
    p.add_argument('--bins', type=int, default=200)
    p.add_argument('--dpi',  type=int, default=400)
    # Cut thresholds (defaults match plot_fig5_theta_heatmap_pair.py)
    p.add_argument('--theta-e-max',     type=float, default=45.0)
    p.add_argument('--Q2-min',          type=float, default=1.0)
    p.add_argument('--xB-max',          type=float, default=1.2)
    p.add_argument('--theta-pq-max',    type=float, default=8.0)
    p.add_argument('--lead-over-q-min', type=float, default=0.75)
    p.add_argument('--pmiss-lo',        type=float, default=0.25)
    p.add_argument('--pmiss-hi',        type=float, default=0.90)
    p.add_argument('--kF',              type=float, default=kF)
    # Color scale
    p.add_argument('--vmin', type=float, default=1e-6)
    p.add_argument('--vmax', type=float, default=2e-2)
    p.add_argument('--cols', type=int, default=1, choices=(1, 2))
    args = p.parse_args()

    apply_style()

    script_dir = os.path.dirname(os.path.abspath(__file__))
    root_dir   = os.path.abspath(os.path.join(script_dir, '..'))
    in_path  = args.input  if os.path.isabs(args.input)  else os.path.join(root_dir, args.input)
    out_path = args.output if os.path.isabs(args.output) else os.path.join(root_dir, args.output)
    os.makedirs(os.path.dirname(out_path), exist_ok=True)

    print(f'Reading {in_path}')
    with uproot.open(in_path) as f:
        tree = f['genT']
        arr = tree.arrays(
            ['weight', 'pe', 'pLead', 'p2', 'p3', 'doFSI', 'fsiModel'],
            library='np',
        )
    n_total = len(arr['weight'])
    print(f'  total entries: {n_total}')

    w  = arr['weight']
    pe = arr['pe']
    pL = arr['pLead']
    p2 = arr['p2']
    p3 = arr['p3']

    # --- electron / q kinematics -------------------------------------------
    qx = -pe[:, 0]
    qy = -pe[:, 1]
    qz = args.ebeam - pe[:, 2]
    q_mag = np.sqrt(qx**2 + qy**2 + qz**2)

    pe_mag = np.sqrt(pe[:, 0]**2 + pe[:, 1]**2 + pe[:, 2]**2)
    omega  = args.ebeam - pe_mag
    Q2     = q_mag**2 - omega**2
    xB     = Q2 / (2.0 * mN * omega + 1e-30)
    theta_e = np.degrees(np.arctan2(np.sqrt(pe[:, 0]**2 + pe[:, 1]**2),
                                    pe[:, 2]))

    # --- nucleon magnitudes & lead-frame angles ----------------------------
    pL_mag = np.sqrt(pL[:, 0]**2 + pL[:, 1]**2 + pL[:, 2]**2)
    p2_mag = np.sqrt(p2[:, 0]**2 + p2[:, 1]**2 + p2[:, 2]**2)
    p3_mag = np.sqrt(p3[:, 0]**2 + p3[:, 1]**2 + p3[:, 2]**2)

    theta_pq      = angle_deg(pL[:, 0], pL[:, 1], pL[:, 2], qx, qy, qz)
    lead_over_q   = pL_mag / (q_mag + 1e-30)

    # --- detector tag: lead + at least one recoil above kF -----------------
    # Mirrors how a 2N analysis behaves on 3N events: the experiment sees
    # whatever is loudest in the detector. We require the lead above kF
    # (already enforced by the theta_pq / lead/q cuts) plus at least one
    # recoil above kF; if both recoils are above kF we pick the higher-|p|
    # one as the measured recoil and treat the lower-|p| nucleon as missed.
    above_L  = pL_mag > args.kF
    above_p2 = p2_mag > args.kF
    above_p3 = p3_mag > args.kF
    detector = above_L & (above_p2 | above_p3)

    both    = above_p2 & above_p3
    only_p2 = above_p2 & ~above_p3
    only_p3 = above_p3 & ~above_p2
    use_p2  = detector & (only_p2 | (both & (p2_mag >= p3_mag)))
    use_p3  = detector & (only_p3 | (both & (p3_mag >  p2_mag)))

    rx = np.where(use_p2, p2[:, 0], p3[:, 0])
    ry = np.where(use_p2, p2[:, 1], p3[:, 1])
    rz = np.where(use_p2, p2[:, 2], p3[:, 2])

    # --- 2N+FSI angle definitions -----------------------------------------
    p_miss_x = pL[:, 0] - qx
    p_miss_y = pL[:, 1] - qy
    p_miss_z = pL[:, 2] - qz
    p_miss_mag = np.sqrt(p_miss_x**2 + p_miss_y**2 + p_miss_z**2)

    p3_rec_x = -(p_miss_x + rx)
    p3_rec_y = -(p_miss_y + ry)
    p3_rec_z = -(p_miss_z + rz)

    theta12 = angle_deg(p_miss_x, p_miss_y, p_miss_z, rx, ry, rz)
    theta23 = angle_deg(rx, ry, rz, p3_rec_x, p3_rec_y, p3_rec_z)

    # --- cut funnel --------------------------------------------------------
    finite = np.isfinite(w) & (w > 0)
    cuts = [
        ('finite & weight > 0',           finite),
        ('+ detector (n_above_kF >= 2, lead + best recoil)', finite & detector),
        ('+ theta_e < %.0f deg' % args.theta_e_max,
            finite & detector & (theta_e < args.theta_e_max)),
        ('+ Q^2 > %.2f GeV^2' % args.Q2_min,
            finite & detector & (theta_e < args.theta_e_max) & (Q2 > args.Q2_min)),
        ('+ xB < %.2f' % args.xB_max,
            finite & detector & (theta_e < args.theta_e_max) & (Q2 > args.Q2_min) & (xB < args.xB_max)),
        ('+ theta(p_lead, q) < %.1f deg' % args.theta_pq_max,
            finite & detector & (theta_e < args.theta_e_max) & (Q2 > args.Q2_min) & (xB < args.xB_max)
              & (theta_pq < args.theta_pq_max)),
        ('+ |p_lead|/|q| > %.2f' % args.lead_over_q_min,
            finite & detector & (theta_e < args.theta_e_max) & (Q2 > args.Q2_min) & (xB < args.xB_max)
              & (theta_pq < args.theta_pq_max) & (lead_over_q > args.lead_over_q_min)),
        ('+ %.2f < |p_miss| < %.2f GeV/c' % (args.pmiss_lo, args.pmiss_hi),
            finite & detector & (theta_e < args.theta_e_max) & (Q2 > args.Q2_min) & (xB < args.xB_max)
              & (theta_pq < args.theta_pq_max) & (lead_over_q > args.lead_over_q_min)
              & (p_miss_mag > args.pmiss_lo) & (p_miss_mag < args.pmiss_hi)),
    ]
    print('Cut funnel:')
    for label, m in cuts:
        print(f'  {m.sum():>8d}  {label}')

    final_mask = cuts[-1][1]
    n_cut = int(final_mask.sum())
    print(f'Final selection: {n_cut} events')

    if n_cut == 0:
        print('ERROR: no events passing cuts; nothing to plot.')
        return

    # --- histogram + plot --------------------------------------------------
    h, xe, ye = np.histogram2d(
        theta12[final_mask], theta23[final_mask],
        bins=args.bins, range=[[0, 180], [0, 180]],
        weights=w[final_mask],
    )
    h_norm = h / (h.sum() + 1e-30)
    h_plot = np.where(h_norm > 0, h_norm, np.nan)

    fig, ax = plt.subplots(figsize=figure_size(cols=args.cols, ratio=0.92))
    im = ax.pcolormesh(
        xe, ye, h_plot.T, cmap=CMAP,
        norm=LogNorm(vmin=args.vmin, vmax=args.vmax),
        shading='auto', rasterized=True,
    )
    cbar = fig.colorbar(im, ax=ax, label='Normalized weight',
                        pad=0.02, fraction=0.046)
    cbar.ax.tick_params(labelsize=8)
    cbar.ax.yaxis.label.set_size(9)

    x = np.linspace(0, 180, 200)
    line_kw = dict(color=OVERLAY_COLOR, linestyle='--', lw=0.7, alpha=0.85)
    ax.plot(x, 180.0 - x / 2.0, **line_kw)
    ax.plot(180.0 - x / 2.0, x, **line_kw)
    ax.plot(x, x, **line_kw)

    ax.set_xlim(0, 180)
    ax.set_ylim(0, 180)
    ax.set_aspect('equal')
    ax.set_xticks(np.arange(0, 181, 30))
    ax.set_yticks(np.arange(0, 181, 30))
    ax.set_xlabel(r'$\theta_{12}$ (deg)')
    ax.set_ylabel(r'$\theta_{23}$ (deg)')
    ax.set_title('3N+FSI on $^{12}$C, 2 measured (highest $|p|$) + 1 reconstructed\n'
                 r'(2N+FSI cut chain, $n_{>k_F}\geq 2$, $N=%d$ events)' % n_cut,
                 fontsize=8)

    fig.tight_layout()
    fig.savefig(out_path, dpi=args.dpi)
    png_path = os.path.splitext(out_path)[0] + '.png'
    fig.savefig(png_path, dpi=args.dpi)
    print(f'Saved {out_path}')
    print(f'Saved {png_path}')


if __name__ == '__main__':
    main()
