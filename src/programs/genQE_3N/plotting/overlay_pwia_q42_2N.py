"""Per-nucleon A/4He ratios vs alpha3N for the 2N (GCF pair) PWIA generator.

Companion to overlay_pwia_q42.py (the 3N version): same beam (10.6 GeV),
same generator-level Q^2 window [4.1, 4.3] GeV^2, sigma_CM = 0, and the
theta_e in [11, 12] deg cut applied HERE (the 2N generator has no theta
handle; the electron angle is an outcome). alpha3N -- the electron-side
variable, computed identically for any hadronic final state -- is used on
the x axis on purpose: inclusive data cannot distinguish 2N from 3N
absorption, so the measured ratio is a combination of this plot and the
3N one. The 2N W >= 2m_N threshold caps these curves at alpha3N ~ 1.5.

6Li is plotted if its sample exists (pending the gcfNucleus entry).
"""
import argparse
import os
import sys

import numpy as np
import matplotlib.pyplot as plt

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from plot_alpha3N_ratio import load_alpha3N

ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..'))

p = argparse.ArgumentParser()
p.add_argument('--ev-dir', default='../genQE_FSI/events/pwia_q42_2N',
               help='event directory (relative to genQE_3N/)')
p.add_argument('--suffix', default='',
               help='appended to the output file stem, e.g. _kF')
p.add_argument('--title-tag', default=r', $\sigma_{CM}=0$',
               help='appended to "2N PWIA" in the title')
args = p.parse_args()

EV = os.path.join(ROOT_DIR, args.ev_dir)
OUT = os.path.join(ROOT_DIR, 'analysis/Plots/alpha3N_ratio_2N_over_4He_pwia_q42' + args.suffix)
EBEAM = 10.6
kw = dict(theta_e_min=11.0, theta_e_max=12.0)

samples = [('pwia_12C.root', 12, r'$^{12}$C / $^{4}$He', 'C0', 'o'),
           ('pwia_6Li.root', 6,  r'$^{6}$Li / $^{4}$He', 'C2', 's')]

a_he, w_he, _ = load_alpha3N(f'{EV}/pwia_4He.root', EBEAM, **kw)
w_he = w_he / 4.0

loaded = []
for fname, A, label, color, marker in samples:
    path = f'{EV}/{fname}'
    if not os.path.exists(path):
        print(f'(skipping {fname}: not generated)')
        continue
    a, w, _ = load_alpha3N(path, EBEAM, **kw)
    loaded.append((a, w / A, label, color, marker))

a_all = np.concatenate([a for a, *_ in loaded] + [a_he])
lo, hi = np.percentile(a_all, [0.02, 99.98])
pad = 0.02 * (hi - lo)
edges = np.linspace(lo - pad, hi + pad, 41)
centers = 0.5 * (edges[:-1] + edges[1:])

# Threshold trim: each nucleus's spectrum dies at its own alpha endpoint
# (set by its 2N separation energy; e.g. removing a pn pair costs only
# 3.7 MeV in 6Li vs 26.1 MeV in 4He). Ratio bins beyond the EARLIEST
# endpoint compare a live spectrum to a dying one and diverge, so drop
# every bin inside the top-0.1% tail of any sample.
alpha_trim = min(np.percentile(a, 99.9) for a, *_ in loaded + [(a_he,)])
print(f'threshold trim: dropping ratio bins with center > {alpha_trim:.4f}')


def ratio_with_err(a_num, w_num, a_den, w_den, min_n=20):
    H_n, _ = np.histogram(a_num, bins=edges, weights=w_num)
    H_d, _ = np.histogram(a_den, bins=edges, weights=w_den)
    V_n, _ = np.histogram(a_num, bins=edges, weights=w_num ** 2)
    V_d, _ = np.histogram(a_den, bins=edges, weights=w_den ** 2)
    N_n, _ = np.histogram(a_num, bins=edges)
    N_d, _ = np.histogram(a_den, bins=edges)
    good = (N_n >= min_n) & (N_d >= min_n) & (H_d > 0) & (centers <= alpha_trim)
    r = np.where(good, H_n / np.where(H_d > 0, H_d, 1.0), np.nan)
    rel = np.where(good, np.sqrt(np.where(H_n > 0, V_n / H_n ** 2, 0.0)
                                 + np.where(H_d > 0, V_d / H_d ** 2, 0.0)), np.nan)
    return r, r * rel


fig, ax = plt.subplots(figsize=(7, 5))
for a, w, label, color, marker in loaded:
    r, e = ratio_with_err(a, w, a_he, w_he)
    ax.errorbar(centers, r, yerr=e, fmt=marker, ms=4, lw=0.8, capsize=2,
                color=color, label=label)
ax.set_xlabel(r'$\alpha_{3N}$')
ax.set_ylabel(r'$\left[\sigma(A)/A\right]\,/\,\left[\sigma(^{4}\mathrm{He})/4\right]$')
ax.set_xlim(edges[0], edges[-1])
ax.legend(frameon=False, fontsize=10)
ax.grid(alpha=0.3, lw=0.4)
ax.set_title('2N PWIA' + args.title_tag + r', $E_{beam}=10.6$ GeV, '
             r'$\theta_e\in[11°,12°]$, $Q^2\in[4.1,4.3]$ GeV$^2$')

fig.tight_layout()
fig.savefig(OUT + '.pdf', dpi=300)
fig.savefig(OUT + '.png', dpi=200)
print('Saved', OUT + '.png')
