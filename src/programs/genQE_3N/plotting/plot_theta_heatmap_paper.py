#!/usr/bin/env python3
"""Reproduce Fig. 1 of the 3N-SRC paper: opening-angle heatmap.

Cuts (paper convention, applied to all figures):
  - outgoing electron angle with beam < 45 deg
  - Q^2 > 1.0 GeV^2
  - no CM momentum (uses events_3N_noCM_nosigma.root)
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


def angle_deg(ax, ay, az, bx, by, bz):
    dot = ax * bx + ay * by + az * bz
    a = np.sqrt(ax * ax + ay * ay + az * az)
    b = np.sqrt(bx * bx + by * by + bz * bz)
    return np.degrees(np.arccos(np.clip(dot / (a * b + 1e-30), -1.0, 1.0)))


def main():
    p = argparse.ArgumentParser()
    p.add_argument('--input', default='events_3N.root')
    p.add_argument('--output', default='analysis_output/png_files/Paper plots/fig1_theta_heatmap.pdf')
    p.add_argument('--bins', type=int, default=400)
    p.add_argument('--dpi', type=int, default=400)
    p.add_argument('--theta-e-max', type=float, default=45.0)
    p.add_argument('--Q2-min', type=float, default=1.0)
    p.add_argument('--vmin', type=float, default=1e-10)
    p.add_argument('--vmax', type=float, default=1e-2)
    p.add_argument('--no-symmetry-lines', action='store_true')
    p.add_argument('--cols', type=int, default=1, choices=(1, 2),
                   help='1 = single-column PRR (8.6 cm), 2 = two-column (17.8 cm)')
    args = p.parse_args()

    apply_style()

    script_dir = os.path.dirname(os.path.abspath(__file__))
    root_dir = os.path.abspath(os.path.join(script_dir, '..'))
    in_path = args.input if os.path.isabs(args.input) else os.path.join(root_dir, args.input)
    out_path = args.output if os.path.isabs(args.output) else os.path.join(root_dir, args.output)
    os.makedirs(os.path.dirname(out_path), exist_ok=True)

    print(f'Reading {in_path}')
    tree = uproot.open(in_path)['events']
    arr = tree.arrays(
        ['weight', 'lead', 'recoil2', 'recoil3', 'q', 'Q2', 'scattering_angle'],
        library='np',
    )
    print(f'  {len(arr["weight"])} events')

    w = arr['weight']
    Q2 = arr['Q2']
    theta_e = arr['scattering_angle']
    lead, r2, r3, q = arr['lead'], arr['recoil2'], arr['recoil3'], arr['q']

    p1x = lead[:, 0] - q[:, 0]
    p1y = lead[:, 1] - q[:, 1]
    p1z = lead[:, 2] - q[:, 2]
    theta12 = angle_deg(p1x, p1y, p1z, r2[:, 0], r2[:, 1], r2[:, 2])
    theta23 = angle_deg(r2[:, 0], r2[:, 1], r2[:, 2],
                        r3[:, 0], r3[:, 1], r3[:, 2])

    mask = (np.isfinite(w) & (w > 0)
            & (theta_e < args.theta_e_max)
            & (Q2 > args.Q2_min))
    print(f'  events after cuts: {int(mask.sum())} '
          f'(theta_e<{args.theta_e_max}, Q2>{args.Q2_min}, no CM)')

    h, xe, ye = np.histogram2d(
        theta12[mask], theta23[mask],
        bins=args.bins, range=[[0, 180], [0, 180]], weights=w[mask],
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

    if not args.no_symmetry_lines:
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

    fig.tight_layout()
    fig.savefig(out_path, dpi=args.dpi)
    png_path = os.path.splitext(out_path)[0] + '.png'
    fig.savefig(png_path, dpi=args.dpi)
    print(f'Saved {out_path}')
    print(f'Saved {png_path} (preview)')


if __name__ == '__main__':
    main()
