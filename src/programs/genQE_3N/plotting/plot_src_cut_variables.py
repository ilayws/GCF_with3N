#!/usr/bin/env python3
"""Distributions of the SRC-trigger cut variables under BASE cuts only.

Base cuts: weight > 0, exactly-2-measured tag (|p| > kF), theta_e in
(theta-e-min, theta-e-max), Q2 > Q2-min.  NO xB cut and none of the SRC
cuts — these are the variables one wants to re-choose cuts on:

    xB, theta(p_lead, q) [deg], |p_lead|/|q|, pmiss [GeV/c]

Layout: 2 rows (3N+FSI, 2N+FSI) x 4 columns (one per variable).  Each panel
overlays unit-normalized weighted distributions of

    all base events (black), events in region L (blue), events in region R
    (red; L/R = fig5 triangles, A=135 deg, K=4)

with the current SRC cut values marked as dashed vertical lines.  Choosing a
cut window where the blue curve dominates (3N row) / red dominates (2N row)
enhances the respective region.
"""
import argparse
import os
import sys

import numpy as np
import uproot
import matplotlib.pyplot as plt

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from paper_style import apply_style, figure_size
from plot_fig5_theta_heatmap_pair import in_region_L_array, in_region_R_array

mN = 0.93892


def angle_deg(ax, ay, az, bx, by, bz):
    dot = ax * bx + ay * by + az * bz
    a = np.sqrt(ax * ax + ay * ay + az * az)
    b = np.sqrt(bx * bx + by * by + bz * bz)
    return np.degrees(np.arccos(np.clip(dot / (a * b + 1e-30), -1.0, 1.0)))


def load_3N_vars(path, ebeam, kF, theta_e_min, theta_e_max, Q2_min):
    print(f'Reading 3N: {path}')
    with uproot.open(path) as f:
        arr = f['genT'].arrays(['weight', 'pe', 'pLead', 'p2', 'p3'],
                               library='np')
    w = arr['weight']
    pe = arr['pe']; pL = arr['pLead']; p2 = arr['p2']; p3 = arr['p3']

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
    only_p2 = (p2_mag > kF) & ~(p3_mag > kF)
    only_p3 = (p3_mag > kF) & ~(p2_mag > kF)
    eq2 = (pL_mag > kF) & (only_p2 | only_p3)

    rx = np.where(only_p2, p2[:, 0], p3[:, 0])
    ry = np.where(only_p2, p2[:, 1], p3[:, 1])
    rz = np.where(only_p2, p2[:, 2], p3[:, 2])

    pmx = pL[:, 0] - qx; pmy = pL[:, 1] - qy; pmz = pL[:, 2] - qz
    pmiss = np.sqrt(pmx**2 + pmy**2 + pmz**2)
    p3rx = -(pmx + rx); p3ry = -(pmy + ry); p3rz = -(pmz + rz)

    base = (np.isfinite(w) & (w > 0) & eq2
            & (theta_e > theta_e_min) & (theta_e < theta_e_max)
            & (Q2 > Q2_min))
    print(f'  total {len(w)}; base (no xB/SRC cuts): {int(base.sum())}')

    return dict(
        w=w[base],
        xB=xB[base],
        theta_pq=angle_deg(pL[:, 0], pL[:, 1], pL[:, 2], qx, qy, qz)[base],
        lead_over_q=(pL_mag / (q_mag + 1e-30))[base],
        pmiss=pmiss[base],
        t12=angle_deg(pmx, pmy, pmz, rx, ry, rz)[base],
        t23=angle_deg(rx, ry, rz, p3rx, p3ry, p3rz)[base],
    )


def load_2N_vars(path, kF, theta_e_min, theta_e_max, Q2_min):
    print(f'Reading 2N: {path}')
    with uproot.open(path) as f:
        arr = f['events'].arrays(
            ['weight', 'lead_post', 'recoil_post', 'q', 'Q2', 'xB',
             'scattering_angle', 'pmiss', 'nAboveKF'], library='np')
    w = arr['weight']
    lp = arr['lead_post']; rp = arr['recoil_post']; q = arr['q']
    lp_mag = np.sqrt(lp[:, 0]**2 + lp[:, 1]**2 + lp[:, 2]**2)
    q_mag = np.sqrt(q[:, 0]**2 + q[:, 1]**2 + q[:, 2]**2)

    pmx = lp[:, 0] - q[:, 0]; pmy = lp[:, 1] - q[:, 1]; pmz = lp[:, 2] - q[:, 2]
    p3rx = -(pmx + rp[:, 0]); p3ry = -(pmy + rp[:, 1]); p3rz = -(pmz + rp[:, 2])

    base = (np.isfinite(w) & (w > 0) & (arr['nAboveKF'] == 2)
            & (arr['scattering_angle'] > theta_e_min)
            & (arr['scattering_angle'] < theta_e_max)
            & (arr['Q2'] > Q2_min))
    print(f'  total {len(w)}; base (no xB/SRC cuts): {int(base.sum())}')

    return dict(
        w=w[base],
        xB=arr['xB'][base],
        theta_pq=angle_deg(lp[:, 0], lp[:, 1], lp[:, 2],
                           q[:, 0], q[:, 1], q[:, 2])[base],
        lead_over_q=(lp_mag / (q_mag + 1e-30))[base],
        pmiss=arr['pmiss'][base],
        t12=angle_deg(pmx, pmy, pmz, rp[:, 0], rp[:, 1], rp[:, 2])[base],
        t23=angle_deg(rp[:, 0], rp[:, 1], rp[:, 2], p3rx, p3ry, p3rz)[base],
    )


VARS = [
    ('xB',          r'$x_B$',                     (0.0, 2.0),  [1.2]),
    ('theta_pq',    r'$\theta_{p_{lead},q}$ (deg)', (0.0, 60.0), [8.0]),
    ('lead_over_q', r'$|p_{lead}|/|q|$',          (0.0, 1.5),  [0.75]),
    ('pmiss',       r'$p_{miss}$ (GeV/c)',        (0.0, 1.5),  [0.25, 0.9]),
]


def main():
    p = argparse.ArgumentParser()
    p.add_argument('--input-3N', default='events/3N_FSI_hN_20M_12C_kF220_6GeV.root')
    p.add_argument('--input-2N',
                   default='../genQE_FSI/events/misc/events_2N_hN_6GeV_kF220_20M.root')
    p.add_argument('--output', default='analysis/Plots/src_cut_variables_kF220.pdf')
    p.add_argument('--ebeam', type=float, default=6.0)
    p.add_argument('--kF', type=float, default=0.22)
    p.add_argument('--theta-e-min', type=float, default=8.0)
    p.add_argument('--theta-e-max', type=float, default=45.0)
    p.add_argument('--Q2-min', type=float, default=1.0)
    p.add_argument('--bins', type=int, default=60)
    p.add_argument('--dpi', type=int, default=400)
    args = p.parse_args()

    apply_style()
    script_dir = os.path.dirname(os.path.abspath(__file__))
    root_dir = os.path.abspath(os.path.join(script_dir, '..'))
    in3 = args.input_3N if os.path.isabs(args.input_3N) else os.path.join(root_dir, args.input_3N)
    in2 = args.input_2N if os.path.isabs(args.input_2N) else os.path.join(root_dir, args.input_2N)
    out_path = args.output if os.path.isabs(args.output) else os.path.join(root_dir, args.output)
    os.makedirs(os.path.dirname(out_path), exist_ok=True)

    d3 = load_3N_vars(in3, args.ebeam, args.kF,
                      args.theta_e_min, args.theta_e_max, args.Q2_min)
    d2 = load_2N_vars(in2, args.kF,
                      args.theta_e_min, args.theta_e_max, args.Q2_min)

    w, h = figure_size(cols=2, ratio=0.55)
    fig, axes = plt.subplots(2, 4, figsize=(w, h))
    for row, (d, row_lbl) in enumerate([(d3, r'3N+FSI on $^{12}$C'),
                                        (d2, r'2N+FSI')]):
        inL = in_region_L_array(d['t12'], d['t23'])
        inR = in_region_R_array(d['t12'], d['t23'])
        for col, (key, xlabel, rng, cut_vals) in enumerate(VARS):
            ax = axes[row, col]
            for mask, color, lbl in [(np.ones_like(inL, bool), 'k', 'all base'),
                                     (inL, 'tab:blue', 'region L'),
                                     (inR, 'tab:red', 'region R')]:
                x = d[key][mask]; ww = d['w'][mask]
                if ww.sum() <= 0:
                    continue
                ax.hist(x, bins=args.bins, range=rng, weights=ww / ww.sum(),
                        histtype='step', color=color, lw=0.9,
                        label=lbl if (row == 0 and col == 0) else None)
            for cv in cut_vals:
                ax.axvline(cv, color='gray', linestyle='--', lw=0.7)
            ax.set_xlim(rng)
            ax.set_xlabel(xlabel)
            if col == 0:
                ax.set_ylabel(f'{row_lbl}\nnormalized weight')
            ax.tick_params(labelsize=7)
    axes[0, 0].legend(fontsize=6, frameon=False)

    fig.tight_layout()
    fig.savefig(out_path, dpi=args.dpi)
    print(f'Saved {out_path}')


if __name__ == '__main__':
    main()
