#!/usr/bin/env python3
"""Weighted fractions in the 6 wedges cut by the 3 dashed lines through (120,120).

Dashed lines on plot_theta_heatmap_3N_vs_2N.py:
    y = x            (theta23 = theta12)
    y = 180 - x/2
    y = 360 - 2x     (= mirror of the second across y=x)
All three pass through (120,120); together they cut the populated triangle into
6 wedges. Wedge boundaries (math angle from the centre) fall at
45, 116.57, 153.43, 225, 296.57, 333.43 deg.
"""
import os, sys
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.colors import LogNorm

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from plot_theta_heatmap_3N_vs_2N import load_3N, load_2N

CX = CY = 120.0
BOUNDS = np.array([45.0, 116.565, 153.435, 225.0, 296.565, 333.435])  # deg
LABELS = [
    'W1 top            -> recoil rkt (180,180)',
    'W2 upper-left     -> recoil rkt (0,180)',
    'W3 left           -> (0,180) flank',
    'W4 bottom         -> lead-rkt flank',
    'W5 lower-right    -> lead rkt (180,0)',
    'W6 right          -> (180,0) flank',
]

def wedge_index(t12, t23):
    ang = np.degrees(np.arctan2(np.asarray(t23) - CY, np.asarray(t12) - CX)) % 360.0
    # wedge i is [BOUNDS[i], BOUNDS[i+1]); W6 wraps 333.435 -> 45
    idx = np.searchsorted(BOUNDS, ang, side='right') - 1
    idx = idx % 6  # ang < 45 or >= 333.435 both fall into the wrap wedge (W6)
    return idx

root = os.path.abspath(os.path.join(os.path.dirname(__file__), '..'))
in3 = os.path.join(root, 'events/3N_FSI_15M_12C.root')
in2 = os.path.join(root, '../genQE_FSI/events/misc/events_2N.root')
common = dict(theta_e_max=45.0, Q2_min=1.0, xB_max=1.2, kF_thr=0.25,
              mode='eq2', theta_e_min=8.0)

t12_3, t23_3, w3 = load_3N(in3, 6.0, **common)
t12_2, t23_2, w2 = load_2N(in2, **common)

def report(name, t12, t23, w):
    idx = wedge_index(t12, t23)
    tot = w.sum()
    print(f'\n=== {name} (sum w = {tot:.4e}) ===')
    for i in range(6):
        f = w[idx == i].sum() / tot
        print(f'  {LABELS[i]:42s} {f:7.2%}')

report('3N+FSI 12C', t12_3, t23_3, w3)
report('2N+FSI',     t12_2, t23_2, w2)

# overlay with wedge labels
def panel(ax, t12, t23, w, title):
    h, xe, ye = np.histogram2d(t12, t23, bins=36, range=[[0,180],[0,180]], weights=w)
    h = h/(h.sum()+1e-30)
    ax.pcolormesh(xe, ye, np.where(h>0,h,np.nan).T, cmap='viridis',
                  norm=LogNorm(vmin=1e-5, vmax=5e-2), shading='auto')
    x = np.linspace(0,180,200)
    for yy in (180-x/2, 360-2*x, x):
        ax.plot(x, yy, 'k--', lw=0.6, alpha=0.6)
    idx = wedge_index(t12, t23); tot = w.sum()
    # place a % label at the angular centre of each wedge
    cent = (BOUNDS + np.roll(BOUNDS, -1)) / 2.0
    cent[-1] = ((333.435 + 360 + 45)/2.0) % 360
    for i in range(6):
        a = np.radians(cent[i]); r = 52
        f = w[idx==i].sum()/tot
        ax.text(CX + r*np.cos(a), CY + r*np.sin(a), f'{f:.0%}',
                color='white', fontsize=10, ha='center', va='center', weight='bold')
    ax.set_xlim(0,180); ax.set_ylim(0,180); ax.set_aspect('equal')
    ax.set_xlabel(r'$\theta_{12}$ (deg)'); ax.set_title(title, fontsize=9)

fig, axes = plt.subplots(1,2, figsize=(11,5), sharey=True)
panel(axes[0], t12_3, t23_3, w3, '3N+FSI 12C (15M) - wedge %')
panel(axes[1], t12_2, t23_2, w2, '2N+FSI - wedge %')
axes[0].set_ylabel(r'$\theta_{23}$ (deg)')
out = os.path.join(root, 'analysis/Plots/wedge_fractions.png')
fig.savefig(out, dpi=150, bbox_inches='tight')
print('\nSaved', out)
