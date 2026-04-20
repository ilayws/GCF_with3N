#!/usr/bin/env python3
"""Plot R(xL) = (1 + xL) / (1/R_3N + xL/R_2N)."""
import numpy as np
import matplotlib.pyplot as plt
import matplotlib as mpl

# ── Publication-quality style ──
mpl.rcParams.update({
    'text.usetex': False,
    'font.family': 'serif',
    'font.serif': ['CMU Serif', 'Computer Modern Roman', 'Times New Roman', 'DejaVu Serif'],
    'mathtext.fontset': 'cm',
    'axes.linewidth': 1.8,
    'xtick.major.width': 1.4,
    'xtick.minor.width': 0.9,
    'ytick.major.width': 1.4,
    'ytick.minor.width': 0.9,
    'xtick.major.size': 7,
    'xtick.minor.size': 4,
    'ytick.major.size': 7,
    'ytick.minor.size': 4,
    'xtick.direction': 'in',
    'ytick.direction': 'in',
    'xtick.top': True,
    'ytick.right': True,
    'xtick.minor.visible': True,
    'ytick.minor.visible': True,
})

R_3N = 1.0
R_2N = 0.052

def R(xL):
    return (1.0 + xL) / (1.0 / R_3N + xL / R_2N)

xL = np.linspace(0, 0.5, 500)
y = R(xL)

fig, ax = plt.subplots(figsize=(5.2, 4.0))
ax.plot(xL, y, 'k-', linewidth=2.4)

# Annotated points — text placed directly, no arrows
xL_fsi = 0.10
ax.plot(xL_fsi, R(xL_fsi), 'o', color='#c0392b', markersize=9, zorder=5,
        markeredgecolor='k', markeredgewidth=0.8)
ax.text(xL_fsi + 0.02, R(xL_fsi) + 0.06, r'$\mathbf{10\%\;FSI}$',
        fontsize=13, color='#c0392b', va='bottom')

ax.plot(0, R(0), 'o', color='#2471a3', markersize=9, zorder=5,
        markeredgecolor='k', markeredgewidth=0.8)
ax.text(0.02, R(0) - 0.06, r'$\mathbf{No\;FSI}$',
        fontsize=13, color='#2471a3', va='top')

ax.set_xlabel(r'$x_L \equiv N_{\mathrm{FSI}} \,/\, N_{3N}$  in region L',
              fontsize=14, labelpad=6)
ax.set_ylabel(r'$R \equiv N_L \,/\, N_R$', fontsize=14, labelpad=6)
ax.tick_params(axis='both', which='major', labelsize=13)
ax.set_xlim(-0.02, 0.52)
ax.set_ylim(0, 1.12)

fig.tight_layout(pad=0.5)
fig.savefig('R_xL.png', dpi=300, bbox_inches='tight')
fig.savefig('R_xL.pdf', bbox_inches='tight')
plt.close(fig)
print('Saved R_xL.png and R_xL.pdf')
