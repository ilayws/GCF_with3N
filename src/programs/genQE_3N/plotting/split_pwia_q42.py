"""Split version of overlay_pwia_q42: separate 12C/4He and 6Li/4He plots,
plus a text table of the per-nucleon ratio values and uncertainties.

Inputs are the uniform-parameter v4 samples in events/pwia_q42/ (sigma_CM =
0.15 GeV and internal-momentum cut k > 0.25 GeV/c for ALL nuclei; 100M
events each; Q^2 in [4.1, 4.3] GeV^2 and theta_e in [11, 12] deg at
generation). Same analysis settings as the combined overlay: per-attempt
normalization, per-nucleon ratio [sigma(A)/A]/[sigma(4He)/4], raw-weight
outlier cut w_max = 1e-9.
"""
import argparse
import os
import sys

import numpy as np
import matplotlib.pyplot as plt

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from plot_alpha3N_ratio import load_alpha3N

p = argparse.ArgumentParser()
p.add_argument('--xB-min', type=float, default=None,
               help='keep only events with x_Bj = Q^2/(2 m_N q0) above this')
p.add_argument('--suffix', default='',
               help='appended to the output file stems, e.g. _xB18')
args = p.parse_args()

ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..'))
EV = os.path.join(ROOT_DIR, 'events/pwia_q42')
PLOTS = os.path.join(ROOT_DIR, 'analysis/Plots')
EBEAM = 10.6
kw = dict(w_max=1e-9, xB_min=args.xB_min)

a_c,  w_c,  _ = load_alpha3N(f'{EV}/pwia_12C.root', EBEAM, **kw)
a_li, w_li, _ = load_alpha3N(f'{EV}/pwia_6Li.root', EBEAM, **kw)
a_he, w_he, _ = load_alpha3N(f'{EV}/pwia_4He.root', EBEAM, **kw)

w_c  = w_c  / 12.0
w_li = w_li / 6.0
w_he = w_he / 4.0

a_all = np.concatenate([a_c, a_li, a_he])
lo, hi = np.percentile(a_all, [0.02, 99.98])
pad = 0.02 * (hi - lo)
edges = np.linspace(lo - pad, hi + pad, 41)
centers = 0.5 * (edges[:-1] + edges[1:])


def ratio_with_err(a_num, w_num, a_den, w_den, min_n=20):
    H_n, _ = np.histogram(a_num, bins=edges, weights=w_num)
    H_d, _ = np.histogram(a_den, bins=edges, weights=w_den)
    V_n, _ = np.histogram(a_num, bins=edges, weights=w_num ** 2)
    V_d, _ = np.histogram(a_den, bins=edges, weights=w_den ** 2)
    N_n, _ = np.histogram(a_num, bins=edges)
    N_d, _ = np.histogram(a_den, bins=edges)
    good = (N_n >= min_n) & (N_d >= min_n) & (H_d > 0)
    r = np.where(good, H_n / np.where(H_d > 0, H_d, 1.0), np.nan)
    rel = np.where(good, np.sqrt(np.where(H_n > 0, V_n / H_n ** 2, 0.0)
                                 + np.where(H_d > 0, V_d / H_d ** 2, 0.0)), np.nan)
    return r, r * rel


TITLE = (r'3N PWIA, $E_{beam}=10.6$ GeV, $\theta_e\in[11°,12°]$, '
         r'$Q^2\in[4.1,4.3]$ GeV$^2$')
if args.xB_min is not None:
    TITLE += rf', $x_B>{args.xB_min:g}$'


def make_plot(r, e, label, color, marker, out_stem):
    fig, ax = plt.subplots(figsize=(7, 5))
    ax.errorbar(centers, r, yerr=e, fmt=marker, ms=4, lw=0.8, capsize=2,
                color=color, label=label)
    ax.set_xlabel(r'$\alpha_{3N}$')
    ax.set_ylabel(r'$\left[\sigma(A)/A\right]\,/\,\left[\sigma(^{4}\mathrm{He})/4\right]$')
    ax.set_xlim(edges[0], edges[-1])
    ax.legend(frameon=False, fontsize=10)
    ax.grid(alpha=0.3, lw=0.4)
    ax.set_title(TITLE)
    fig.tight_layout()
    fig.savefig(out_stem + '.pdf', dpi=300)
    fig.savefig(out_stem + '.png', dpi=200)
    plt.close(fig)
    print('Saved', out_stem + '.png')


r_c,  e_c  = ratio_with_err(a_c,  w_c,  a_he, w_he)
r_li, e_li = ratio_with_err(a_li, w_li, a_he, w_he)

make_plot(r_c, e_c, r'$^{12}$C / $^{4}$He', 'C0', 'o',
          os.path.join(PLOTS, 'alpha3N_ratio_12C_over_4He_pwia_q42' + args.suffix))
make_plot(r_li, e_li, r'$^{6}$Li / $^{4}$He', 'C2', 's',
          os.path.join(PLOTS, 'alpha3N_ratio_6Li_over_4He_pwia_q42' + args.suffix))

table_path = os.path.join(PLOTS, f'alpha3N_ratio_pwia_q42_table{args.suffix}.txt')
with open(table_path, 'w') as f:
    f.write('# 3N PWIA per-nucleon ratios vs alpha3N\n')
    f.write('# samples: events/pwia_q42 (100M events each; sigma_CM = 0.15 GeV\n')
    f.write('#   and internal-momentum cut k > 0.25 GeV/c for ALL nuclei)\n')
    f.write('# Ebeam = 10.6 GeV, theta_e in [11,12] deg, Q^2 in [4.1,4.3] GeV^2\n')
    f.write('# (cuts applied at generation), raw-weight outlier cut w <= 1e-9\n')
    if args.xB_min is not None:
        f.write(f'# x_Bj = Q^2/(2 m_N q0) > {args.xB_min:g} (applied at plot time)\n')
    f.write('# R = [sigma(A)/A] / [sigma(4He)/4]; err = weighted-MC statistical\n')
    f.write('# nan = bin failed min-statistics requirement (>= 20 raw events\n')
    f.write('#   in both numerator and denominator)\n')
    f.write('#\n')
    f.write(f"# {'alpha3N':>9s} {'R(12C/4He)':>12s} {'err':>10s} "
            f"{'R(6Li/4He)':>12s} {'err':>10s}\n")
    for i in range(len(centers)):
        f.write(f'{centers[i]:11.4f} {r_c[i]:12.5f} {e_c[i]:10.5f} '
                f'{r_li[i]:12.5f} {e_li[i]:10.5f}\n')
print('Saved', table_path)
