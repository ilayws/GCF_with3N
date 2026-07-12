"""Overlay of the 12C/4He and 6Li/4He alpha3N ratios, all PWIA (no FSI).

Inputs are the Q^2-windowed samples in events/pwia_q42/ (generated with
-q 4.1:4.3 -t 11:12 at 10.6 GeV), so no kinematic cuts are applied here.
Weights are normalized per generation attempt via each file's hAttempts
histogram (handled inside load_alpha3N). Run from anywhere; paths are
resolved relative to this file.
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
p.add_argument('--ev-dir', default='events/pwia_q42',
               help='event directory (relative to genQE_3N/), default the CM-on samples')
p.add_argument('--suffix', default='',
               help='appended to the output file stem, e.g. _noCM')
p.add_argument('--title-tag', default='',
               help='appended to the plot title, e.g. ", CM off"')
p.add_argument('--w-max', type=float, default=1e-9,
               help='raw-weight outlier cut; 0 disables. The 1e-9 default was '
                    'tuned for the k > 0.25 GeV/c samples; with lower kF cuts '
                    'the tail above 1e-9 carries real cross section (12.8%% of '
                    'the 4He weight at kF = 0.18) and the cut must be disabled '
                    'or raised.')
p.add_argument('--dominance-cut', type=float, default=0.,
               help='if > 0, drop any single event that carries more than this '
                    'fraction of its own histogram bin weight (e.g. 0.5). '
                    'Targets sparse tail bins where one event with globally '
                    'unremarkable weight dominates locally; unlike --w-max '
                    'this removes O(1) events and leaves the bulk untouched.')
args = p.parse_args()

EV = os.path.join(ROOT_DIR, args.ev_dir)
OUT = os.path.join(ROOT_DIR,
                   'analysis/Plots/alpha3N_ratio_12C_6Li_over_4He_pwia_q42' + args.suffix)
EBEAM = 10.6
# 1e-9 rather than 1e-8: with 100M events per sample the raw-weight tail
# between 1e-9 and 1e-8 still holds single events that can dominate a sparse
# high-alpha bin (e.g. the 6Li alpha3N ~ 1.89 outlier).
kw = dict(w_max=(args.w_max if args.w_max > 0 else None))

a_c,  w_c,  _ = load_alpha3N(f'{EV}/pwia_12C.root', EBEAM, **kw)
a_he, w_he, _ = load_alpha3N(f'{EV}/pwia_4He.root', EBEAM, **kw)
has_li = os.path.exists(f'{EV}/pwia_6Li.root')
if has_li:
    a_li, w_li, _ = load_alpha3N(f'{EV}/pwia_6Li.root', EBEAM, **kw)
else:
    print('(no 6Li sample in this directory; plotting 12C/4He only)')

# Per-nucleon cross sections: sigma_A / A.
w_c  = w_c  / 12.0
w_he = w_he / 4.0
if has_li:
    w_li = w_li / 6.0

# Auto-range the alpha3N axis to the populated region.
a_all = np.concatenate([a_c, a_li, a_he] if has_li else [a_c, a_he])
lo, hi = np.percentile(a_all, [0.02, 99.98])
pad = 0.02 * (hi - lo)
edges = np.linspace(lo - pad, hi + pad, 41)
centers = 0.5 * (edges[:-1] + edges[1:])


def bin_dominance_mask(a, w, frac, name):
    """Mask out any single event carrying > frac of its bin's total weight."""
    keep = np.ones(len(w), bool)
    idx = np.digitize(a, edges) - 1
    for b in range(len(edges) - 1):
        sel = np.where(idx == b)[0]
        if len(sel) < 2:
            continue
        wb = w[sel]
        j = np.argmax(wb)
        if wb[j] > frac * wb.sum():
            keep[sel[j]] = False
            print(f'  dominance cut [{name}]: dropped event at alpha={a[sel[j]]:.4f} '
                  f'carrying {100*wb[j]/wb.sum():.0f}% of bin {b}')
    return keep


if args.dominance_cut > 0:
    m = bin_dominance_mask(a_c, w_c, args.dominance_cut, '12C')
    a_c, w_c = a_c[m], w_c[m]
    m = bin_dominance_mask(a_he, w_he, args.dominance_cut, '4He')
    a_he, w_he = a_he[m], w_he[m]
    if has_li:
        m = bin_dominance_mask(a_li, w_li, args.dominance_cut, '6Li')
        a_li, w_li = a_li[m], w_li[m]


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


r_c,  e_c  = ratio_with_err(a_c,  w_c,  a_he, w_he)

fig, ax = plt.subplots(figsize=(7, 5))
ax.errorbar(centers, r_c, yerr=e_c, fmt='o', ms=4, lw=0.8, capsize=2,
            color='C0', label=r'$^{12}$C / $^{4}$He')
if has_li:
    r_li, e_li = ratio_with_err(a_li, w_li, a_he, w_he)
    ax.errorbar(centers, r_li, yerr=e_li, fmt='s', ms=4, lw=0.8, capsize=2,
                color='C2', label=r'$^{6}$Li / $^{4}$He')
ax.set_xlabel(r'$\alpha_{3N}$')
ax.set_ylabel(r'$\left[\sigma(A)/A\right]\,/\,\left[\sigma(^{4}\mathrm{He})/4\right]$')
ax.set_xlim(edges[0], edges[-1])
ax.legend(frameon=False, fontsize=10)
ax.grid(alpha=0.3, lw=0.4)
ax.set_title(r'3N PWIA, $E_{beam}=10.6$ GeV, $\theta_e\in[11°,12°]$, '
             r'$Q^2\in[4.1,4.3]$ GeV$^2$' + args.title_tag)

fig.tight_layout()
fig.savefig(OUT + '.pdf', dpi=300)
fig.savefig(OUT + '.png', dpi=200)
print('Saved', OUT + '.png')
