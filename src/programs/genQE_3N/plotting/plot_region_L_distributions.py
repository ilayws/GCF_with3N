#!/usr/bin/env python3
"""1D kinematic distributions inside Region L (top-left triangle).

Both samples (3N+FSI on 12C with COM, 2N+FSI with COM) are selected with:
    weight > 0
    detector tag:   nAboveKF == 2 (eq2 mode)
    8 deg < theta_e < 45 deg
    Q^2 > 1 GeV^2

After those cuts the (theta12, theta23) of each event is computed in the
2N-style mapping (p_miss = p_lead - q, p_recon_third = -(p_miss + p_recoil)),
and only events landing in Region L (top-left triangle from
plot_fig5_theta_heatmap_pair.in_region_L_array, A=135 deg, K=4) are kept.

For every kinematic variable a single PNG/PDF is written under
analysis/Plots/region_L_distributions/. Histograms are normalised to unit
area so the shape comparison is direct.

Variables (post-FSI momenta where applicable):
  electron     : |p_e|, angle(p_e, q), angle(p_e, z)
  lead         : |p_lead|, angle(p_lead, q), angle(p_lead, z)
  recoil       : |p_rec|,  angle(p_rec,  q), angle(p_rec,  z)
  recon. third : |p_recon|, angle(p_recon, q), angle(p_recon, z)
  p_miss       : |p_miss|, angle(p_miss, q), angle(p_miss, z)
  scalars      : xB, Q^2, |q|, angle(q, z), |p_lead|/|q|
  plane angle  : dihedral between (p_miss, p2) and (p_miss, p3) -- 3N only
"""
import argparse
import os
import sys

import numpy as np
import uproot
import matplotlib.pyplot as plt

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from paper_style import apply_style, LINE_COLORS
from plot_fig5_theta_heatmap_pair import in_region_L_array, in_region_R_array


# Star region: circular mask centred on (120, 120) deg with radius 20 deg
# (matches plot_theta_heatmap_kgrid.py).
STAR_CENTER = (120.0, 120.0)
STAR_RADIUS = 20.0  # deg


def in_star(t12, t23, center=STAR_CENTER, radius=STAR_RADIUS):
    dx = np.asarray(t12) - center[0]
    dy = np.asarray(t23) - center[1]
    return (dx * dx + dy * dy) <= radius * radius


REGION_FUNCS = {
    'L':    in_region_L_array,
    'R':    in_region_R_array,
    'star': in_star,
}
REGION_TITLES = {
    'L':    'Region L (top-left triangle, A=135 deg, K=4)',
    'R':    'Region R (top-right triangle, A=135 deg, K=4)',
    'star': 'Star region (circle at (120,120), r=20 deg)',
}


kF = 0.25
mN = 0.93892


def angle_deg(ax, ay, az, bx, by, bz):
    dot = ax * bx + ay * by + az * bz
    a = np.sqrt(ax * ax + ay * ay + az * az)
    b = np.sqrt(bx * bx + by * by + bz * bz)
    return np.degrees(np.arccos(np.clip(dot / (a * b + 1e-30), -1.0, 1.0)))


def dihedral_deg(ax, ay, az, bx, by, bz, cx, cy, cz):
    """Dihedral angle between planes (a, b) and (a, c)."""
    n1x = ay * bz - az * by
    n1y = az * bx - ax * bz
    n1z = ax * by - ay * bx
    n2x = ay * cz - az * cy
    n2y = az * cx - ax * cz
    n2z = ax * cy - ay * cx
    return angle_deg(n1x, n1y, n1z, n2x, n2y, n2z)


def load_3N_full(path, ebeam, theta_e_lo, theta_e_hi, Q2_min, kF_thr):
    """Return a dict of kinematic arrays for 3N+FSI events that pass the
    eq2 tag + electron-arc cuts. The mapping convention is the same as
    plot_theta_heatmap_3N_vs_2N: the measured recoil is whichever of
    (p2, p3) is above kF; the other is the missed nucleon."""
    print(f'Reading 3N+FSI: {path}')
    with uproot.open(path) as f:
        arr = f['genT'].arrays(
            ['weight', 'pe', 'pLead', 'p2', 'p3',
             'pLead_pre', 'p2_pre', 'p3_pre'],
            library='np',
        )
    w  = arr['weight']
    pe = arr['pe']
    pL = arr['pLead']; p2 = arr['p2']; p3 = arr['p3']
    pL_pre = arr['pLead_pre']; p2_pre = arr['p2_pre']; p3_pre = arr['p3_pre']

    qx = -pe[:, 0]
    qy = -pe[:, 1]
    qz = ebeam - pe[:, 2]
    q_mag = np.sqrt(qx**2 + qy**2 + qz**2)

    pe_mag = np.sqrt((pe**2).sum(axis=1))
    omega  = ebeam - pe_mag
    Q2     = q_mag**2 - omega**2
    xB     = Q2 / (2.0 * mN * omega + 1e-30)
    theta_e = np.degrees(np.arctan2(np.sqrt(pe[:, 0]**2 + pe[:, 1]**2),
                                    pe[:, 2]))

    pL_mag = np.sqrt((pL**2).sum(axis=1))
    p2_mag = np.sqrt((p2**2).sum(axis=1))
    p3_mag = np.sqrt((p3**2).sum(axis=1))

    above_L  = pL_mag > kF_thr
    above_p2 = p2_mag > kF_thr
    above_p3 = p3_mag > kF_thr
    only_p2 = above_p2 & ~above_p3
    only_p3 = above_p3 & ~above_p2

    # eq2: lead + exactly one recoil above kF
    detector = above_L & (only_p2 | only_p3)
    use_p2 = detector & only_p2
    use_p3 = detector & only_p3

    # Measured recoil (post-FSI)
    rx = np.where(use_p2, p2[:, 0], p3[:, 0])
    ry = np.where(use_p2, p2[:, 1], p3[:, 1])
    rz = np.where(use_p2, p2[:, 2], p3[:, 2])
    r_mag = np.sqrt(rx**2 + ry**2 + rz**2)

    # Same nucleon, pre-FSI version
    rx_pre = np.where(use_p2, p2_pre[:, 0], p3_pre[:, 0])
    ry_pre = np.where(use_p2, p2_pre[:, 1], p3_pre[:, 1])
    rz_pre = np.where(use_p2, p2_pre[:, 2], p3_pre[:, 2])
    r_pre_mag = np.sqrt(rx_pre**2 + ry_pre**2 + rz_pre**2)

    pL_pre_mag = np.sqrt((pL_pre**2).sum(axis=1))

    # The actual MC-truth other recoil (the missed one) for plane angle
    o2x = np.where(use_p2, p3[:, 0], p2[:, 0])
    o2y = np.where(use_p2, p3[:, 1], p2[:, 1])
    o2z = np.where(use_p2, p3[:, 2], p2[:, 2])

    p_miss_x = pL[:, 0] - qx
    p_miss_y = pL[:, 1] - qy
    p_miss_z = pL[:, 2] - qz
    p_miss_mag = np.sqrt(p_miss_x**2 + p_miss_y**2 + p_miss_z**2)

    p_recon_x = -(p_miss_x + rx)
    p_recon_y = -(p_miss_y + ry)
    p_recon_z = -(p_miss_z + rz)
    p_recon_mag = np.sqrt(p_recon_x**2 + p_recon_y**2 + p_recon_z**2)

    # Pre-FSI versions: p_miss = pLead_pre - q, reconstructed third from
    # pre-FSI lead + pre-FSI measured recoil.
    p_miss_pre_x = pL_pre[:, 0] - qx
    p_miss_pre_y = pL_pre[:, 1] - qy
    p_miss_pre_z = pL_pre[:, 2] - qz
    p_miss_pre_mag = np.sqrt(p_miss_pre_x**2 + p_miss_pre_y**2 + p_miss_pre_z**2)

    p_recon_pre_x = -(p_miss_pre_x + rx_pre)
    p_recon_pre_y = -(p_miss_pre_y + ry_pre)
    p_recon_pre_z = -(p_miss_pre_z + rz_pre)
    p_recon_pre_mag = np.sqrt(p_recon_pre_x**2 + p_recon_pre_y**2 + p_recon_pre_z**2)

    theta12 = angle_deg(p_miss_x, p_miss_y, p_miss_z, rx, ry, rz)
    theta23 = angle_deg(rx, ry, rz,
                        p_recon_x, p_recon_y, p_recon_z)

    # Dihedral angle between (p_miss, measured recoil) and (p_miss, missed recoil)
    plane_ang = dihedral_deg(p_miss_x, p_miss_y, p_miss_z,
                             rx, ry, rz,
                             o2x, o2y, o2z)

    # Dihedral between (pLead, p2) and (pLead, p3_recon).  p3_recon depends on
    # q via pmiss = pLead - q, so the planes do NOT coincide in general.
    plane_ang_lead = dihedral_deg(pL[:, 0], pL[:, 1], pL[:, 2],
                                  rx, ry, rz,
                                  p_recon_x, p_recon_y, p_recon_z)

    mask = (np.isfinite(w) & (w > 0) & detector
            & (theta_e > theta_e_lo) & (theta_e < theta_e_hi)
            & (Q2 > Q2_min))

    return {
        'w':       w[mask],
        'theta12': theta12[mask],
        'theta23': theta23[mask],
        'pe_mag':  pe_mag[mask],
        'pe_ang_q': angle_deg(pe[:, 0], pe[:, 1], pe[:, 2], qx, qy, qz)[mask],
        'pe_ang_z': theta_e[mask],
        'pL_mag':  pL_mag[mask],
        'pL_ang_q': angle_deg(pL[:, 0], pL[:, 1], pL[:, 2], qx, qy, qz)[mask],
        'pL_ang_z': np.degrees(np.arctan2(np.sqrt(pL[:, 0]**2 + pL[:, 1]**2),
                                         pL[:, 2]))[mask],
        'pr_mag':  r_mag[mask],
        'pr_ang_q': angle_deg(rx, ry, rz, qx, qy, qz)[mask],
        'pr_ang_z': np.degrees(np.arctan2(np.sqrt(rx**2 + ry**2), rz))[mask],
        'precon_mag':  p_recon_mag[mask],
        'precon_ang_q': angle_deg(p_recon_x, p_recon_y, p_recon_z,
                                  qx, qy, qz)[mask],
        'precon_ang_z': np.degrees(np.arctan2(np.sqrt(p_recon_x**2 + p_recon_y**2),
                                              p_recon_z))[mask],
        'pmiss_mag':  p_miss_mag[mask],
        'pmiss_ang_q': angle_deg(p_miss_x, p_miss_y, p_miss_z,
                                 qx, qy, qz)[mask],
        'pmiss_ang_z': np.degrees(np.arctan2(np.sqrt(p_miss_x**2 + p_miss_y**2),
                                             p_miss_z))[mask],
        'xB':      xB[mask],
        'Q2':      Q2[mask],
        'q_mag':   q_mag[mask],
        'q_ang_z': np.degrees(np.arctan2(np.sqrt(qx**2 + qy**2), qz))[mask],
        'lead_over_q': (pL_mag / (q_mag + 1e-30))[mask],
        'plane_ang':   plane_ang[mask],
        'plane_ang_lead': plane_ang_lead[mask],
        # ----- pre-FSI (PWIA final state) versions -----
        'pL_mag_pre':  pL_pre_mag[mask],
        'pL_ang_q_pre': angle_deg(pL_pre[:, 0], pL_pre[:, 1], pL_pre[:, 2],
                                  qx, qy, qz)[mask],
        'pL_ang_z_pre': np.degrees(np.arctan2(np.sqrt(pL_pre[:, 0]**2 + pL_pre[:, 1]**2),
                                              pL_pre[:, 2]))[mask],
        'pr_mag_pre':  r_pre_mag[mask],
        'pr_ang_q_pre': angle_deg(rx_pre, ry_pre, rz_pre, qx, qy, qz)[mask],
        'pr_ang_z_pre': np.degrees(np.arctan2(np.sqrt(rx_pre**2 + ry_pre**2),
                                              rz_pre))[mask],
        'precon_mag_pre':  p_recon_pre_mag[mask],
        'precon_ang_q_pre': angle_deg(p_recon_pre_x, p_recon_pre_y, p_recon_pre_z,
                                      qx, qy, qz)[mask],
        'precon_ang_z_pre': np.degrees(np.arctan2(np.sqrt(p_recon_pre_x**2 + p_recon_pre_y**2),
                                                  p_recon_pre_z))[mask],
        'pmiss_mag_pre':  p_miss_pre_mag[mask],
        'pmiss_ang_q_pre': angle_deg(p_miss_pre_x, p_miss_pre_y, p_miss_pre_z,
                                     qx, qy, qz)[mask],
        'pmiss_ang_z_pre': np.degrees(np.arctan2(np.sqrt(p_miss_pre_x**2 + p_miss_pre_y**2),
                                                 p_miss_pre_z))[mask],
        'lead_over_q_pre': (pL_pre_mag / (q_mag + 1e-30))[mask],
    }


def load_2N_full(path, theta_e_lo, theta_e_hi, Q2_min, kF_thr):
    """Same variables for 2N+FSI; plane_ang is set to nan (no MC-truth p3)."""
    print(f'Reading 2N+FSI: {path}')
    with uproot.open(path) as f:
        arr = f['events'].arrays(
            ['weight', 'electron', 'lead_post', 'recoil_post', 'q',
             'Q2', 'xB', 'scattering_angle', 'pmiss', 'nAboveKF',
             'lead_pre', 'recoil_pre'],
            library='np',
        )
    w        = arr['weight']
    Q2       = arr['Q2']
    xB       = arr['xB']
    theta_e  = arr['scattering_angle']
    nAbove   = arr['nAboveKF']
    pe = arr['electron']
    lp = arr['lead_post']; rp = arr['recoil_post']; q = arr['q']
    lp_pre = arr['lead_pre']; rp_pre = arr['recoil_pre']
    pmiss_branch = arr['pmiss']

    qx, qy, qz = q[:, 0], q[:, 1], q[:, 2]
    q_mag = np.sqrt(qx**2 + qy**2 + qz**2)

    lp_mag = np.sqrt(lp[:, 0]**2 + lp[:, 1]**2 + lp[:, 2]**2)
    rp_mag = np.sqrt(rp[:, 0]**2 + rp[:, 1]**2 + rp[:, 2]**2)
    pe_mag = np.sqrt(pe[:, 0]**2 + pe[:, 1]**2 + pe[:, 2]**2)

    p_miss_x = lp[:, 0] - qx
    p_miss_y = lp[:, 1] - qy
    p_miss_z = lp[:, 2] - qz
    p_miss_mag = np.sqrt(p_miss_x**2 + p_miss_y**2 + p_miss_z**2)

    p_recon_x = -(p_miss_x + rp[:, 0])
    p_recon_y = -(p_miss_y + rp[:, 1])
    p_recon_z = -(p_miss_z + rp[:, 2])
    p_recon_mag = np.sqrt(p_recon_x**2 + p_recon_y**2 + p_recon_z**2)

    # Pre-FSI versions
    lp_pre_mag = np.sqrt(lp_pre[:, 0]**2 + lp_pre[:, 1]**2 + lp_pre[:, 2]**2)
    rp_pre_mag = np.sqrt(rp_pre[:, 0]**2 + rp_pre[:, 1]**2 + rp_pre[:, 2]**2)
    p_miss_pre_x = lp_pre[:, 0] - qx
    p_miss_pre_y = lp_pre[:, 1] - qy
    p_miss_pre_z = lp_pre[:, 2] - qz
    p_miss_pre_mag = np.sqrt(p_miss_pre_x**2 + p_miss_pre_y**2 + p_miss_pre_z**2)
    p_recon_pre_x = -(p_miss_pre_x + rp_pre[:, 0])
    p_recon_pre_y = -(p_miss_pre_y + rp_pre[:, 1])
    p_recon_pre_z = -(p_miss_pre_z + rp_pre[:, 2])
    p_recon_pre_mag = np.sqrt(p_recon_pre_x**2 + p_recon_pre_y**2 + p_recon_pre_z**2)

    theta12 = angle_deg(p_miss_x, p_miss_y, p_miss_z,
                        rp[:, 0], rp[:, 1], rp[:, 2])
    theta23 = angle_deg(rp[:, 0], rp[:, 1], rp[:, 2],
                        p_recon_x, p_recon_y, p_recon_z)

    detector = (nAbove == 2)
    mask = (np.isfinite(w) & (w > 0) & detector
            & (theta_e > theta_e_lo) & (theta_e < theta_e_hi)
            & (Q2 > Q2_min))

    plane_ang = np.full(len(w), np.nan)  # no MC-truth third nucleon in 2N tree

    # Dihedral between (lead, recoil) and (lead, p3_recon) — uses only
    # measured / inferred quantities, so it works the same way for 2N.
    plane_ang_lead = dihedral_deg(lp[:, 0], lp[:, 1], lp[:, 2],
                                  rp[:, 0], rp[:, 1], rp[:, 2],
                                  p_recon_x, p_recon_y, p_recon_z)

    return {
        'w':       w[mask],
        'theta12': theta12[mask],
        'theta23': theta23[mask],
        'pe_mag':  pe_mag[mask],
        'pe_ang_q': angle_deg(pe[:, 0], pe[:, 1], pe[:, 2], qx, qy, qz)[mask],
        'pe_ang_z': np.degrees(np.arctan2(np.sqrt(pe[:, 0]**2 + pe[:, 1]**2),
                                          pe[:, 2]))[mask],
        'pL_mag':  lp_mag[mask],
        'pL_ang_q': angle_deg(lp[:, 0], lp[:, 1], lp[:, 2], qx, qy, qz)[mask],
        'pL_ang_z': np.degrees(np.arctan2(np.sqrt(lp[:, 0]**2 + lp[:, 1]**2),
                                          lp[:, 2]))[mask],
        'pr_mag':  rp_mag[mask],
        'pr_ang_q': angle_deg(rp[:, 0], rp[:, 1], rp[:, 2], qx, qy, qz)[mask],
        'pr_ang_z': np.degrees(np.arctan2(np.sqrt(rp[:, 0]**2 + rp[:, 1]**2),
                                          rp[:, 2]))[mask],
        'precon_mag':  p_recon_mag[mask],
        'precon_ang_q': angle_deg(p_recon_x, p_recon_y, p_recon_z,
                                  qx, qy, qz)[mask],
        'precon_ang_z': np.degrees(np.arctan2(np.sqrt(p_recon_x**2 + p_recon_y**2),
                                              p_recon_z))[mask],
        'pmiss_mag':  p_miss_mag[mask],
        'pmiss_ang_q': angle_deg(p_miss_x, p_miss_y, p_miss_z,
                                 qx, qy, qz)[mask],
        'pmiss_ang_z': np.degrees(np.arctan2(np.sqrt(p_miss_x**2 + p_miss_y**2),
                                             p_miss_z))[mask],
        'xB':      xB[mask],
        'Q2':      Q2[mask],
        'q_mag':   q_mag[mask],
        'q_ang_z': np.degrees(np.arctan2(np.sqrt(qx**2 + qy**2), qz))[mask],
        'lead_over_q': (lp_mag / (q_mag + 1e-30))[mask],
        'plane_ang':   plane_ang[mask],
        'plane_ang_lead': plane_ang_lead[mask],
        # ----- pre-FSI (PWIA final state) versions -----
        'pL_mag_pre':  lp_pre_mag[mask],
        'pL_ang_q_pre': angle_deg(lp_pre[:, 0], lp_pre[:, 1], lp_pre[:, 2],
                                  qx, qy, qz)[mask],
        'pL_ang_z_pre': np.degrees(np.arctan2(np.sqrt(lp_pre[:, 0]**2 + lp_pre[:, 1]**2),
                                              lp_pre[:, 2]))[mask],
        'pr_mag_pre':  rp_pre_mag[mask],
        'pr_ang_q_pre': angle_deg(rp_pre[:, 0], rp_pre[:, 1], rp_pre[:, 2],
                                  qx, qy, qz)[mask],
        'pr_ang_z_pre': np.degrees(np.arctan2(np.sqrt(rp_pre[:, 0]**2 + rp_pre[:, 1]**2),
                                              rp_pre[:, 2]))[mask],
        'precon_mag_pre':  p_recon_pre_mag[mask],
        'precon_ang_q_pre': angle_deg(p_recon_pre_x, p_recon_pre_y, p_recon_pre_z,
                                      qx, qy, qz)[mask],
        'precon_ang_z_pre': np.degrees(np.arctan2(np.sqrt(p_recon_pre_x**2 + p_recon_pre_y**2),
                                                  p_recon_pre_z))[mask],
        'pmiss_mag_pre':  p_miss_pre_mag[mask],
        'pmiss_ang_q_pre': angle_deg(p_miss_pre_x, p_miss_pre_y, p_miss_pre_z,
                                     qx, qy, qz)[mask],
        'pmiss_ang_z_pre': np.degrees(np.arctan2(np.sqrt(p_miss_pre_x**2 + p_miss_pre_y**2),
                                                 p_miss_pre_z))[mask],
        'lead_over_q_pre': (lp_pre_mag / (q_mag + 1e-30))[mask],
    }


def restrict_to_region(d, region):
    mask = REGION_FUNCS[region](d['theta12'], d['theta23'])
    return {k: v[mask] for k, v in d.items()}


def plot_one(out_dir, fname, key3, key2, xlabel, bins, xlim, d3, d2,
             title_suffix=''):
    fig, ax = plt.subplots(figsize=(4.2, 3.4))
    bin_edges = np.linspace(xlim[0], xlim[1], bins + 1)

    h3 = ax.hist(d3[key3], bins=bin_edges, weights=d3['w'], density=True,
                 histtype='step', linewidth=1.4, color=LINE_COLORS[0],
                 label=f'3N+FSI  (N={len(d3["w"])})')
    h2 = ax.hist(d2[key2], bins=bin_edges, weights=d2['w'], density=True,
                 histtype='step', linewidth=1.4, color=LINE_COLORS[1],
                 label=f'2N+FSI  (N={len(d2["w"])})')

    ax.set_xlabel(xlabel)
    ax.set_ylabel('Normalized weight / bin')
    ax.set_xlim(*xlim)
    ax.legend(fontsize=8, frameon=False)
    ax.set_title(title_suffix if title_suffix else 'Region',
                 fontsize=9)
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, fname + '.pdf'), dpi=300)
    fig.savefig(os.path.join(out_dir, fname + '.png'), dpi=300)
    plt.close(fig)


def plot_one_single(out_dir, fname, key, xlabel, bins, xlim, d3,
                    title_suffix=''):
    """3N-only variant (used for the plane-angle plot)."""
    fig, ax = plt.subplots(figsize=(4.2, 3.4))
    bin_edges = np.linspace(xlim[0], xlim[1], bins + 1)
    finite = np.isfinite(d3[key])
    ax.hist(d3[key][finite], bins=bin_edges,
            weights=d3['w'][finite], density=True,
            histtype='step', linewidth=1.4, color=LINE_COLORS[0],
            label=f'3N+FSI  (N={int(finite.sum())})')
    ax.set_xlabel(xlabel)
    ax.set_ylabel('Normalized weight / bin')
    ax.set_xlim(*xlim)
    ax.legend(fontsize=8, frameon=False)
    ax.set_title('Region L' + (f'  -  {title_suffix}' if title_suffix else ''),
                 fontsize=9)
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, fname + '.pdf'), dpi=300)
    fig.savefig(os.path.join(out_dir, fname + '.png'), dpi=300)
    plt.close(fig)


def main():
    p = argparse.ArgumentParser()
    p.add_argument('--input-3N', default='events/3N_FSI_1p5M_12C.root')
    p.add_argument('--input-2N',
                   default='../genQE_FSI/events/misc/events_2N.root')
    p.add_argument('--region', choices=('L', 'R', 'star'), default='L')
    p.add_argument('--out-dir', default=None,
                   help='Output folder (default: analysis/Plots/region_<R>_distributions)')
    p.add_argument('--ebeam', type=float, default=6.0)
    p.add_argument('--theta-e-min', type=float, default=8.0)
    p.add_argument('--theta-e-max', type=float, default=45.0)
    p.add_argument('--Q2-min',      type=float, default=1.0)
    p.add_argument('--kF',          type=float, default=0.25)
    args = p.parse_args()

    apply_style()

    script_dir = os.path.dirname(os.path.abspath(__file__))
    root_dir   = os.path.abspath(os.path.join(script_dir, '..'))
    in3 = args.input_3N if os.path.isabs(args.input_3N) else os.path.join(root_dir, args.input_3N)
    in2 = args.input_2N if os.path.isabs(args.input_2N) else os.path.join(root_dir, args.input_2N)

    out_dir = args.out_dir
    if out_dir is None:
        out_dir = f'analysis/Plots/region_{args.region}_distributions'
    if not os.path.isabs(out_dir):
        out_dir = os.path.join(root_dir, out_dir)
    os.makedirs(out_dir, exist_ok=True)

    region_label = REGION_TITLES[args.region]
    print(f'Region selection: {region_label}')

    d3 = load_3N_full(in3, args.ebeam, args.theta_e_min, args.theta_e_max,
                      args.Q2_min, args.kF)
    d2 = load_2N_full(in2, args.theta_e_min, args.theta_e_max,
                      args.Q2_min, args.kF)

    print(f'3N after eq2+electron-arc cuts:  {len(d3["w"])}')
    print(f'2N after eq2+electron-arc cuts:  {len(d2["w"])}')

    d3L = restrict_to_region(d3, args.region)
    d2L = restrict_to_region(d2, args.region)
    print(f'3N in {region_label}: {len(d3L["w"])}')
    print(f'2N in {region_label}: {len(d2L["w"])}')

    # Common settings: (filename, key3, key2, xlabel, bins, xlim)
    plots = [
        # Electron
        ('e_mag',     'pe_mag',     'pe_mag',     r'$|p_e|$  (GeV/c)',     50, (0.0, 6.0)),
        ('e_ang_q',   'pe_ang_q',   'pe_ang_q',   r'$\angle(p_e, q)$  (deg)', 50, (0.0, 60.0)),
        ('e_ang_z',   'pe_ang_z',   'pe_ang_z',   r'$\angle(p_e, \hat z)$  (deg)', 50, (0.0, 60.0)),
        # Lead
        ('lead_mag',   'pL_mag',     'pL_mag',     r'$|p_\mathrm{lead}|$  (GeV/c)', 50, (0.0, 4.0)),
        ('lead_ang_q', 'pL_ang_q',   'pL_ang_q',   r'$\angle(p_\mathrm{lead}, q)$  (deg)', 50, (0.0, 90.0)),
        ('lead_ang_z', 'pL_ang_z',   'pL_ang_z',   r'$\angle(p_\mathrm{lead}, \hat z)$  (deg)', 50, (0.0, 90.0)),
        # Measured recoil
        ('recoil_mag',   'pr_mag',     'pr_mag',     r'$|p_\mathrm{rec}|$  (GeV/c)', 50, (0.0, 2.0)),
        ('recoil_ang_q', 'pr_ang_q',   'pr_ang_q',   r'$\angle(p_\mathrm{rec}, q)$  (deg)', 50, (0.0, 180.0)),
        ('recoil_ang_z', 'pr_ang_z',   'pr_ang_z',   r'$\angle(p_\mathrm{rec}, \hat z)$  (deg)', 50, (0.0, 180.0)),
        # Reconstructed third
        ('recon_mag',   'precon_mag',  'precon_mag',  r'$|p_\mathrm{recon}|$  (GeV/c)', 50, (0.0, 1.5)),
        ('recon_ang_q', 'precon_ang_q','precon_ang_q',r'$\angle(p_\mathrm{recon}, q)$  (deg)', 50, (0.0, 180.0)),
        ('recon_ang_z', 'precon_ang_z','precon_ang_z',r'$\angle(p_\mathrm{recon}, \hat z)$  (deg)', 50, (0.0, 180.0)),
        # p_miss
        ('pmiss_mag',   'pmiss_mag',   'pmiss_mag',   r'$|p_\mathrm{miss}|$  (GeV/c)', 50, (0.0, 1.5)),
        ('pmiss_ang_q', 'pmiss_ang_q', 'pmiss_ang_q', r'$\angle(p_\mathrm{miss}, q)$  (deg)', 50, (0.0, 180.0)),
        ('pmiss_ang_z', 'pmiss_ang_z', 'pmiss_ang_z', r'$\angle(p_\mathrm{miss}, \hat z)$  (deg)', 50, (0.0, 180.0)),
        # Scalars
        ('xB',          'xB',         'xB',         r'$x_B$',                50, (0.0, 2.5)),
        ('Q2',          'Q2',         'Q2',         r'$Q^2$  (GeV$^2$)',     50, (0.0, 6.0)),
        ('q_mag',       'q_mag',      'q_mag',      r'$|q|$  (GeV/c)',       50, (0.0, 6.0)),
        ('q_ang_z',     'q_ang_z',    'q_ang_z',    r'$\angle(q, \hat z)$  (deg)', 50, (0.0, 60.0)),
        ('lead_over_q', 'lead_over_q','lead_over_q',r'$|p_\mathrm{lead}|/|q|$', 50, (0.0, 2.0)),
        # ----- pre-FSI (PWIA final state) versions -----
        ('lead_mag_pre',   'pL_mag_pre',     'pL_mag_pre',     r'$|p_\mathrm{lead}^\mathrm{pre}|$  (GeV/c)', 50, (0.0, 4.0)),
        ('lead_ang_q_pre', 'pL_ang_q_pre',   'pL_ang_q_pre',   r'$\angle(p_\mathrm{lead}^\mathrm{pre}, q)$  (deg)', 50, (0.0, 90.0)),
        ('lead_ang_z_pre', 'pL_ang_z_pre',   'pL_ang_z_pre',   r'$\angle(p_\mathrm{lead}^\mathrm{pre}, \hat z)$  (deg)', 50, (0.0, 90.0)),
        ('recoil_mag_pre',   'pr_mag_pre',     'pr_mag_pre',     r'$|p_\mathrm{rec}^\mathrm{pre}|$  (GeV/c)', 50, (0.0, 2.0)),
        ('recoil_ang_q_pre', 'pr_ang_q_pre',   'pr_ang_q_pre',   r'$\angle(p_\mathrm{rec}^\mathrm{pre}, q)$  (deg)', 50, (0.0, 180.0)),
        ('recoil_ang_z_pre', 'pr_ang_z_pre',   'pr_ang_z_pre',   r'$\angle(p_\mathrm{rec}^\mathrm{pre}, \hat z)$  (deg)', 50, (0.0, 180.0)),
        ('recon_mag_pre',   'precon_mag_pre',  'precon_mag_pre',  r'$|p_\mathrm{recon}^\mathrm{pre}|$  (GeV/c)', 50, (0.0, 1.5)),
        ('recon_ang_q_pre', 'precon_ang_q_pre','precon_ang_q_pre',r'$\angle(p_\mathrm{recon}^\mathrm{pre}, q)$  (deg)', 50, (0.0, 180.0)),
        ('recon_ang_z_pre', 'precon_ang_z_pre','precon_ang_z_pre',r'$\angle(p_\mathrm{recon}^\mathrm{pre}, \hat z)$  (deg)', 50, (0.0, 180.0)),
        ('pmiss_mag_pre',   'pmiss_mag_pre',   'pmiss_mag_pre',   r'$|p_\mathrm{miss}^\mathrm{pre}|$  (GeV/c)', 50, (0.0, 1.5)),
        ('pmiss_ang_q_pre', 'pmiss_ang_q_pre', 'pmiss_ang_q_pre', r'$\angle(p_\mathrm{miss}^\mathrm{pre}, q)$  (deg)', 50, (0.0, 180.0)),
        ('pmiss_ang_z_pre', 'pmiss_ang_z_pre', 'pmiss_ang_z_pre', r'$\angle(p_\mathrm{miss}^\mathrm{pre}, \hat z)$  (deg)', 50, (0.0, 180.0)),
        ('lead_over_q_pre', 'lead_over_q_pre','lead_over_q_pre', r'$|p_\mathrm{lead}^\mathrm{pre}|/|q|$', 50, (0.0, 2.0)),
    ]
    for name, k3, k2, xlbl, nb, xlim in plots:
        plot_one(out_dir, name, k3, k2, xlbl, nb, xlim, d3L, d2L,
                 title_suffix=region_label)
        print(f'  saved {name}')

    # Dihedral between (pLead, p2) and (pLead, p3_recon) planes -- works for
    # both samples (purely measured/inferred quantities).
    plot_one(out_dir, 'plane_angle_lead', 'plane_ang_lead', 'plane_ang_lead',
             r'dihedral $\angle$ between $(p_\mathrm{lead},p_2)$ and $(p_\mathrm{lead},p_3)$  (deg)',
             50, (0.0, 180.0), d3L, d2L,
             title_suffix=region_label)
    print('  saved plane_angle_lead')

    print(f'\nAll plots in: {out_dir}')


if __name__ == '__main__':
    main()
