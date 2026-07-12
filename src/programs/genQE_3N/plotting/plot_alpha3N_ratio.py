#!/usr/bin/env python3
"""Cross-section (weight) ratio sigma(A1)/sigma(A2) vs alpha_3N.

alpha_3N (lab-frame 3N light-cone fraction the photon imparts to a 3N
sub-system) is the kinematic variable from the user's notes:

    alpha_3N = 3 - (q_- + 3m)/(2m) * [1 + (m_d^2 - m^2)/W^2
                                       + sqrt((1 - (m_d+m)^2/W^2)
                                              (1 - (m_d-m)^2/W^2))]

with
    m       = nucleon mass
    m_d     = 2 m  (spectator-pair mass)
    q_V     = sqrt(q_0^2 + Q^2)                                  (3-mom transfer)
    q_-     = q_0 - q_V                                          (light-cone minus)
    W^2     = 9 m^2 + 6 m q_0 - Q^2 = Q^2 (3 - x)/x + 9 m^2     (3N invariant mass^2)

The variables on the RHS depend only on electron-side kinematics
(q_0 = E_beam - |p_e|, Q^2 = q_V^2 - q_0^2), so alpha_3N is computed
per event from `pe` and the beam energy stored in the tree-side meta.

For each input tree, the per-event weight is summed into alpha_3N bins:
    H_A(alpha) = sum_i w_i for events with alpha_3N in bin
The ratio R(alpha) = H_A1(alpha) / H_A2(alpha) is plotted on the same
alpha axis.
"""
import argparse
import os

import numpy as np
import uproot
import matplotlib.pyplot as plt


M_N = 0.93892    # nucleon mass [GeV]


def compute_alpha3N(pe, ebeam):
    """Per-event alpha_3N from electron 3-momentum and beam energy.

    pe : (N, 3) array of post-scatter electron 3-momenta [GeV/c].
    ebeam : scalar beam energy [GeV].
    Returns (alpha3N, q0, Q2, W2, theta_e_deg).
    """
    pex, pey, pez = pe[:, 0], pe[:, 1], pe[:, 2]
    pe_mag = np.sqrt(pex ** 2 + pey ** 2 + pez ** 2)
    pe_perp = np.sqrt(pex ** 2 + pey ** 2)
    theta_e_deg = np.degrees(np.arctan2(pe_perp, pez))

    q0 = ebeam - pe_mag
    # 3-momentum transfer magnitude: q_vec = (0,0,Ebeam) - p_e
    qx = -pex
    qy = -pey
    qz = ebeam - pez
    qV = np.sqrt(qx ** 2 + qy ** 2 + qz ** 2)

    Q2 = qV ** 2 - q0 ** 2
    q_minus = q0 - qV

    W2 = 9.0 * M_N ** 2 + 6.0 * M_N * q0 - Q2

    # Square-root piece (real for W >= m_d + m = 3m); clip negative argument
    # at 0 to keep the histogram well-defined for low-W events that the GCF
    # generator otherwise rejects but might appear in border bins.
    arg = (1.0 - (3.0 * M_N) ** 2 / W2) * (1.0 - (M_N) ** 2 / W2)
    arg_safe = np.where(arg > 0.0, arg, 0.0)

    bracket = 1.0 + 3.0 * M_N ** 2 / W2 + np.sqrt(arg_safe)
    alpha3N = 3.0 - (q_minus + 3.0 * M_N) / (2.0 * M_N) * bracket
    return alpha3N, q0, Q2, W2, theta_e_deg


def load_alpha3N(path, ebeam, tree_name='genT',
                 theta_e_min=0.0, theta_e_max=180.0,
                 Q2_min=0.0, Q2_max=1e9, w_max=None,
                 xB_min=None, xB_max=None):
    """Load alpha_3N and (per-generated-event) weight from a GCF tree.

    Returns (alpha, w_norm, n_total).  The GCF weights are unnormalized
    cross sections -- sum_i w_i ≈ sigma_total * N_attempts.  Files written
    since the hAttempts histogram was added carry the true attempt count
    (including weight = 0 rejections from generation-time cuts like the -q
    Q^2 window), and n_total is taken from it; older files fall back to
    the tree entry count.  Dividing per-event weights by n_total gives a
    sigma estimator whose ratio between two samples is meaningful even
    when the samples have different generation-cut efficiencies.
    """
    print(f'Reading {path}')
    attempts = None
    with uproot.open(path) as f:
        if tree_name not in f:
            candidates = [k.split(';')[0] for k in f.keys() if hasattr(f[k.split(';')[0]], 'arrays')]
            tree_name = candidates[0]
            print(f'  tree {tree_name!r} (fallback)')
        if 'hAttempts' in f:
            attempts = float(f['hAttempts'].values()[0])
        t = f[tree_name]
        arr = t.arrays(['weight', 'pe'], library='np')
    w = arr['weight']
    pe = arr['pe']
    alpha, q0, Q2, W2, theta_e_deg = compute_alpha3N(pe, ebeam)
    base = np.isfinite(alpha) & np.isfinite(w) & (w > 0) & (W2 > (3.0 * M_N) ** 2)
    if w_max is not None:
        n_cut = int((base & (w > w_max)).sum())
        base &= (w <= w_max)
        print(f'  weight outliers cut (w > {w_max:g}): {n_cut}')
    kin = ((theta_e_deg >= theta_e_min) & (theta_e_deg <= theta_e_max)
           & (Q2 >= Q2_min) & (Q2 <= Q2_max))
    if xB_min is not None or xB_max is not None:
        xB = Q2 / (2.0 * M_N * np.where(q0 > 0, q0, np.nan))
        if xB_min is not None:
            kin &= (xB >= xB_min)
        if xB_max is not None:
            kin &= (xB <= xB_max)
        print(f'  + xB in [{xB_min}, {xB_max}]')
    mask = base & kin
    n_total = attempts if attempts is not None else len(w)
    n_base = int(base.sum())
    n_kept = int(mask.sum())
    print(f'  total entries:      {len(w)}')
    if attempts is not None:
        print(f'  generation attempts (hAttempts, used for norm): {attempts:.0f}')
    print(f'  finite & w>0 & W2:  {n_base}')
    print(f'  + theta_e in [{theta_e_min},{theta_e_max}] deg AND '
          f'Q2 in [{Q2_min},{Q2_max}] GeV^2: {n_kept}')
    return alpha[mask], w[mask] / float(n_total), n_total


def main():
    p = argparse.ArgumentParser(description=__doc__,
                                formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument('--input-num',
                   default='events/new_fsi_v2/fsi_hN_60.root',
                   help='Numerator ROOT file (default 12C 3N+FSI hN 6 GeV)')
    p.add_argument('--input-den',
                   default='events/new_fsi_v2/pwia_4He_60.root',
                   help='Denominator ROOT file (default 4He 3N PWIA 6 GeV)')
    p.add_argument('--label-num', default=r'$^{12}$C, 3N+FSI hN')
    p.add_argument('--label-den', default=r'$^{4}$He, 3N PWIA')
    p.add_argument('--ebeam', type=float, default=6.0)
    p.add_argument('--output',
                   default='analysis/Plots/alpha3N_ratio_12C_4He.pdf')
    p.add_argument('--bins', type=int, default=40)
    p.add_argument('--alpha-min', type=float, default=0.6)
    p.add_argument('--alpha-max', type=float, default=2.6)
    p.add_argument('--min-events-per-bin', type=int, default=20,
                   help='Bins with fewer raw events than this in either '
                        'sample are masked from the ratio (too noisy).')
    p.add_argument('--per-nucleon', action='store_true',
                   help='Scale ratio to per-nucleon (multiply by A_den/A_num).')
    p.add_argument('--A-num', type=int, default=12)
    p.add_argument('--A-den', type=int, default=4)
    p.add_argument('--theta-e-min', type=float, default=0.0,
                   help='Lower bound on electron polar angle [deg]')
    p.add_argument('--theta-e-max', type=float, default=180.0,
                   help='Upper bound on electron polar angle [deg]')
    p.add_argument('--Q2-min', type=float, default=0.0,
                   help='Lower bound on Q^2 [GeV^2]')
    p.add_argument('--Q2-max', type=float, default=1e9,
                   help='Upper bound on Q^2 [GeV^2]')
    p.add_argument('--w-max', type=float, default=None,
                   help='Drop events with weight above this (removes rare '
                        'huge-weight outliers that dominate single bins).')
    args = p.parse_args()

    script_dir = os.path.dirname(os.path.abspath(__file__))
    root_dir = os.path.abspath(os.path.join(script_dir, '..'))
    in_num = args.input_num if os.path.isabs(args.input_num) else os.path.join(root_dir, args.input_num)
    in_den = args.input_den if os.path.isabs(args.input_den) else os.path.join(root_dir, args.input_den)
    out = args.output if os.path.isabs(args.output) else os.path.join(root_dir, args.output)
    os.makedirs(os.path.dirname(out), exist_ok=True)

    a_num, w_num, n_num = load_alpha3N(in_num, args.ebeam,
                                 theta_e_min=args.theta_e_min,
                                 theta_e_max=args.theta_e_max,
                                 Q2_min=args.Q2_min, Q2_max=args.Q2_max,
                                 w_max=args.w_max)
    a_den, w_den, n_den = load_alpha3N(in_den, args.ebeam,
                                 theta_e_min=args.theta_e_min,
                                 theta_e_max=args.theta_e_max,
                                 Q2_min=args.Q2_min, Q2_max=args.Q2_max,
                                 w_max=args.w_max)
    print(f'N_gen: num={n_num}  den={n_den}')

    edges = np.linspace(args.alpha_min, args.alpha_max, args.bins + 1)
    centers = 0.5 * (edges[:-1] + edges[1:])

    H_num, _ = np.histogram(a_num, bins=edges, weights=w_num)
    H_den, _ = np.histogram(a_den, bins=edges, weights=w_den)
    # Raw event counts for noise mask
    N_num, _ = np.histogram(a_num, bins=edges)
    N_den, _ = np.histogram(a_den, bins=edges)
    # sqrt(sum w^2) for ratio errorbars (independent samples; Gaussian
    # propagation in each bin).
    H_num_var, _ = np.histogram(a_num, bins=edges, weights=w_num ** 2)
    H_den_var, _ = np.histogram(a_den, bins=edges, weights=w_den ** 2)

    good = (N_num >= args.min_events_per_bin) & (N_den >= args.min_events_per_bin) & (H_den > 0)
    ratio = np.where(good, H_num / np.where(H_den > 0, H_den, 1.0), np.nan)
    rel_err = np.where(good,
                       np.sqrt(np.where(H_num > 0, H_num_var / H_num ** 2, 0.0)
                              + np.where(H_den > 0, H_den_var / H_den ** 2, 0.0)),
                       np.nan)
    ratio_err = ratio * rel_err

    if args.per_nucleon:
        scale = args.A_den / args.A_num
        ratio = ratio * scale
        ratio_err = ratio_err * scale

    fig, (ax_top, ax_bot) = plt.subplots(2, 1, figsize=(7, 6.5), sharex=True,
                                        gridspec_kw={'height_ratios': [1.2, 1]})

    # Top: alpha_3N distributions (normalized to unit weight integral so we can
    # compare shapes irrespective of total cross-section units)
    norm_num = H_num.sum() if H_num.sum() > 0 else 1.0
    norm_den = H_den.sum() if H_den.sum() > 0 else 1.0
    ax_top.step(edges[:-1], H_num / norm_num, where='post',
                label=args.label_num, color='C0', lw=1.5)
    ax_top.step(edges[:-1], H_den / norm_den, where='post',
                label=args.label_den, color='C3', lw=1.5)
    ax_top.set_yscale('log')
    ax_top.set_ylabel(r'normalized $\sigma$ density')
    ax_top.legend(frameon=False, fontsize=10)
    ax_top.set_title(r'$\alpha_{3N}$ weighted distribution')

    # Bottom: ratio with errorbars
    suffix = ' (per-nucleon)' if args.per_nucleon else ''
    ax_bot.errorbar(centers, ratio, yerr=ratio_err, fmt='o', color='k', ms=4,
                    lw=0.8, capsize=2)
    ax_bot.set_xlabel(r'$\alpha_{3N}$')
    ylabel = f'{args.label_num} / {args.label_den}{suffix}'
    ax_bot.set_ylabel(ylabel)
    ax_bot.set_xlim(args.alpha_min, args.alpha_max)
    finite = np.isfinite(ratio)
    if finite.any():
        finite_vals = ratio[finite]
        ymax = np.nanpercentile(finite_vals + (ratio_err[finite] if np.isfinite(ratio_err[finite]).all() else 0), 98)
        ymin = np.nanpercentile(finite_vals - (ratio_err[finite] if np.isfinite(ratio_err[finite]).all() else 0), 2)
        pad = 0.1 * (ymax - ymin if ymax > ymin else 1.0)
        ax_bot.set_ylim(max(0.0, ymin - pad), ymax + pad)
    ax_bot.grid(alpha=0.3, lw=0.4)

    fig.tight_layout()
    fig.savefig(out, dpi=300)
    fig.savefig(out.replace('.pdf', '.png'), dpi=200)
    print(f'Saved {out}')
    print(f'Saved {out.replace(".pdf", ".png")}')


if __name__ == '__main__':
    main()
