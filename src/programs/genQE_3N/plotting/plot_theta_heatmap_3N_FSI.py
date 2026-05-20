#!/usr/bin/env python3
"""theta12-theta23 opening-angle heatmap for the 3N+FSI generator.

Reads the raw genQE_3N_FSI ROOT output (branches pe, pLead, p2, p3, weight,
plus the FSI extras pLead_pre/p2_pre/p3_pre/doFSI) and produces a single
log-scaled heatmap of the SRC opening angles, mirroring the convention from
plot_theta_heatmap_paper.py.

Definitions (post-FSI by default):
  q          = (0, 0, Ebeam) - pe                # 3-momentum transfer
  p1_initial = pLead - q                         # struck nucleon BEFORE the eN vertex
  theta12    = angle(p1_initial, p2)             # opening angle between
                                                 # struck-nucleon initial-state momentum
                                                 # and second outgoing nucleon
  theta23    = angle(p2, p3)                     # opening angle between
                                                 # the two recoil nucleons

Cuts (paper convention):
  weight > 0, theta_e < theta_e_max, Q^2 > Q2_min.

Use --pre to use the pre-FSI 4-vectors instead (lets you produce a no-FSI
overlay for direct comparison).

Usage:
    python plot_theta_heatmap_3N_FSI.py \
        --input events/3N_FSI_500k.root --ebeam 6.0 \
        --output analysis/Plots/theta_heatmap_3N_FSI.pdf
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
    p.add_argument('--input',  default='events/3N_FSI_500k.root',
                   help='ROOT file produced by genQE_3N_FSI')
    p.add_argument('--output', default='analysis/Plots/theta_heatmap_3N_FSI.pdf')
    p.add_argument('--ebeam', type=float, default=6.0,
                   help='Beam energy in GeV (along +z)')
    p.add_argument('--bins', type=int, default=200)
    p.add_argument('--dpi',  type=int, default=400)
    p.add_argument('--theta-e-max', type=float, default=45.0)
    p.add_argument('--Q2-min',      type=float, default=1.0)
    p.add_argument('--vmin', type=float, default=1e-6)
    p.add_argument('--vmax', type=float, default=2e-2)
    p.add_argument('--cols', type=int, default=1, choices=(1, 2))
    p.add_argument('--pre', action='store_true',
                   help='Use pre-FSI (pLead_pre, p2_pre, p3_pre) instead of post-FSI')
    args = p.parse_args()

    apply_style()

    script_dir = os.path.dirname(os.path.abspath(__file__))
    root_dir   = os.path.abspath(os.path.join(script_dir, '..'))
    in_path  = args.input  if os.path.isabs(args.input)  else os.path.join(root_dir, args.input)
    out_path = args.output if os.path.isabs(args.output) else os.path.join(root_dir, args.output)
    os.makedirs(os.path.dirname(out_path), exist_ok=True)

    branches_post = ['weight', 'pe', 'pLead', 'p2', 'p3', 'doFSI', 'fsiModel']
    branches_pre  = ['weight', 'pe', 'pLead_pre', 'p2_pre', 'p3_pre', 'doFSI', 'fsiModel']
    branches = branches_pre if args.pre else branches_post

    print(f'Reading {in_path}')
    with uproot.open(in_path) as f:
        tree = f['genT']
        arr = tree.arrays(branches, library='np')

    w   = arr['weight']
    pe  = arr['pe']
    if args.pre:
        lead = arr['pLead_pre']; v2 = arr['p2_pre']; v3 = arr['p3_pre']
        tag = 'pre-FSI'
    else:
        lead = arr['pLead'];     v2 = arr['p2'];     v3 = arr['p3']
        tag = 'post-FSI'

    nFSI_on = int((arr['doFSI'] == 1).sum())
    model   = 'hN' if (arr['fsiModel'].size and arr['fsiModel'][0] == 0) else 'hA'
    print(f'  total entries: {len(w)}  ({nFSI_on} with doFSI=1, model={model})')

    # 3-momentum transfer q = beam - pe, where beam = (0, 0, Ebeam).
    qx = -pe[:, 0]
    qy = -pe[:, 1]
    qz = args.ebeam - pe[:, 2]

    # |pe| (electron is treated massless; consistent with QEGenerator_3N).
    pe_mag = np.sqrt(pe[:, 0]**2 + pe[:, 1]**2 + pe[:, 2]**2)
    omega  = args.ebeam - pe_mag
    q2vec  = qx**2 + qy**2 + qz**2
    Q2     = q2vec - omega**2

    # Electron polar angle vs +z beam axis.
    theta_e = np.degrees(np.arctan2(np.sqrt(pe[:, 0]**2 + pe[:, 1]**2),
                                    pe[:, 2]))

    # Initial-state struck nucleon: p1 = pLead - q (the eN vertex undoes q).
    p1x = lead[:, 0] - qx
    p1y = lead[:, 1] - qy
    p1z = lead[:, 2] - qz

    theta12 = angle_deg(p1x, p1y, p1z,
                        v2[:, 0], v2[:, 1], v2[:, 2])
    theta23 = angle_deg(v2[:, 0], v2[:, 1], v2[:, 2],
                        v3[:, 0], v3[:, 1], v3[:, 2])

    mask = (np.isfinite(w) & (w > 0)
            & (theta_e < args.theta_e_max)
            & (Q2 > args.Q2_min))
    n_cut = int(mask.sum())
    print(f'  events after cuts (theta_e < {args.theta_e_max} deg, '
          f'Q2 > {args.Q2_min} GeV^2): {n_cut}')
    if n_cut == 0:
        print('  ERROR: no events passing cuts.')
        return

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

    # The three symmetry guide lines used in the paper figure.
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
    ax.set_title(f'3N + FSI ({tag}, hN intranuke, A=12 transport)',
                 fontsize=9)

    fig.tight_layout()
    fig.savefig(out_path, dpi=args.dpi)
    png_path = os.path.splitext(out_path)[0] + '.png'
    fig.savefig(png_path, dpi=args.dpi)
    print(f'Saved {out_path}')
    print(f'Saved {png_path}')


if __name__ == '__main__':
    main()
