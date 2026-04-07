#!/usr/bin/env python3
"""
Comprehensive analysis of 3N SRC events.
Reads events_3N.root via uproot, applies cuts, produces all plots and tables.

Usage:
    python analyze_3N.py events_3N.root [-o output_dir]
"""
import os
import argparse
import numpy as np
import uproot
import matplotlib as mpl
import matplotlib.pyplot as plt
from matplotlib.colors import LogNorm
from matplotlib.patches import Polygon

# ── Publication-quality style ──
mpl.rcParams.update({
    'font.family': 'serif',
    'font.serif': ['CMU Serif', 'Computer Modern Roman', 'Times New Roman', 'DejaVu Serif'],
    'mathtext.fontset': 'cm',
    'axes.linewidth': 1.4,
    'xtick.major.width': 1.2,
    'xtick.minor.width': 0.8,
    'ytick.major.width': 1.2,
    'ytick.minor.width': 0.8,
    'xtick.major.size': 6,
    'xtick.minor.size': 3.5,
    'ytick.major.size': 6,
    'ytick.minor.size': 3.5,
    'xtick.direction': 'in',
    'ytick.direction': 'in',
    'xtick.top': True,
    'ytick.right': True,
    'xtick.minor.visible': True,
    'ytick.minor.visible': True,
    'axes.labelsize': 14,
    'xtick.labelsize': 12,
    'ytick.labelsize': 12,
    'legend.fontsize': 11,
    'legend.framealpha': 0.9,
    'lines.linewidth': 1.8,
})

# ──────────── Physical constants ────────────
mN = 0.93892  # nucleon mass GeV
kF = 0.25     # Fermi momentum GeV/c
pCode = 2212
nCode = 2112

# ──────────── Region definitions ────────────
def region_params(A=135.0, K=4.0):
    A_rad = np.radians(A)
    B = np.degrees(np.arctan(np.sin(A_rad) / (K + np.cos(A_rad)))) / (180.0 - A)
    return A, B

def in_region_R(theta12, theta23, A=135.0, K=4.0):
    _, B = region_params(A, K)
    line1 = B * (theta12 - 180.0) + 180.0
    line2 = (1.0/B) * (theta12 - 180.0) + 180.0
    line3 = -(theta12 - A) + 180.0 - (180.0 - A) * B
    return (theta23 <= line1) & (theta23 >= line2) & (theta23 >= line3)

def in_region_L(theta12, theta23, A=135.0, K=4.0):
    return in_region_R(360.0 - theta12 - theta23, theta23, A, K)

def in_region_BR(theta12, theta23, A=135.0, K=4.0):
    return in_region_R(theta12, 360.0 - theta12 - theta23, A, K)


# ──────────── Data loading ────────────
def load_data(filepath):
    """Load TTree into dict of numpy arrays."""
    f = uproot.open(filepath)
    tree = f["events"]
    data = tree.arrays(library="np")
    return data


def add_derived(d):
    """Add derived kinematic quantities from raw 4-vectors."""
    e_px, e_py, e_pz = d["electron"][:, 0], d["electron"][:, 1], d["electron"][:, 2]
    e_E = d["electron"][:, 3]

    l_px, l_py, l_pz = d["lead"][:, 0], d["lead"][:, 1], d["lead"][:, 2]
    r2_px, r2_py, r2_pz = d["recoil2"][:, 0], d["recoil2"][:, 1], d["recoil2"][:, 2]
    r3_px, r3_py, r3_pz = d["recoil3"][:, 0], d["recoil3"][:, 1], d["recoil3"][:, 2]

    q_px, q_py, q_pz = d["q"][:, 0], d["q"][:, 1], d["q"][:, 2]
    q_mag = np.sqrt(q_px**2 + q_py**2 + q_pz**2)

    # p1 = pmiss = lead - q (initial lead)
    p1_x = l_px - q_px
    p1_y = l_py - q_py
    p1_z = l_pz - q_pz
    d["p1_mag"] = np.sqrt(p1_x**2 + p1_y**2 + p1_z**2)

    # E1 = initial nucleon off-shell energy = E_lead - nu
    l_E = d["lead"][:, 3]
    nu = d["nu"]
    d["E1"] = l_E - nu
    d["E1_over_mN"] = d["E1"] / mN

    # p1_after = lead (final lead after photon absorption)
    d["p1_after_mag"] = np.sqrt(l_px**2 + l_py**2 + l_pz**2)

    # p2, p3 = recoil momenta (no FSI, so initial = final)
    d["p2_mag"] = np.sqrt(r2_px**2 + r2_py**2 + r2_pz**2)
    d["p3_mag"] = np.sqrt(r3_px**2 + r3_py**2 + r3_pz**2)

    # Angle utility
    def angle_deg(ax, ay, az, bx, by, bz):
        dot = ax*bx + ay*by + az*bz
        a_mag = np.sqrt(ax**2 + ay**2 + az**2)
        b_mag = np.sqrt(bx**2 + by**2 + bz**2)
        return np.degrees(np.arccos(np.clip(dot / (a_mag * b_mag + 1e-30), -1, 1)))

    def theta_deg(px, py, pz):
        p_mag = np.sqrt(px**2 + py**2 + pz**2)
        return np.degrees(np.arccos(np.clip(pz / (p_mag + 1e-30), -1, 1)))

    # 3-body angles
    d["theta12"] = angle_deg(p1_x, p1_y, p1_z, r2_px, r2_py, r2_pz)
    d["theta23"] = angle_deg(r2_px, r2_py, r2_pz, r3_px, r3_py, r3_pz)
    d["theta13"] = angle_deg(p1_x, p1_y, p1_z, r3_px, r3_py, r3_pz)

    # Angles with q
    d["p1_angle_q"] = angle_deg(p1_x, p1_y, p1_z, q_px, q_py, q_pz)
    d["p1_after_angle_q"] = angle_deg(l_px, l_py, l_pz, q_px, q_py, q_pz)
    d["p2_angle_q"] = angle_deg(r2_px, r2_py, r2_pz, q_px, q_py, q_pz)
    d["p3_angle_q"] = angle_deg(r3_px, r3_py, r3_pz, q_px, q_py, q_pz)
    d["e_angle_q"] = angle_deg(e_px, e_py, e_pz, q_px, q_py, q_pz)

    # Angles with beam
    d["p1_angle_beam"] = theta_deg(p1_x, p1_y, p1_z)
    d["p1_after_angle_beam"] = theta_deg(l_px, l_py, l_pz)
    d["p2_angle_beam"] = theta_deg(r2_px, r2_py, r2_pz)
    d["p3_angle_beam"] = theta_deg(r3_px, r3_py, r3_pz)

    # Electron
    d["e_mom"] = e_E

    # p_lead / q
    d["lead_over_q"] = d["p1_after_mag"] / (q_mag + 1e-30)

    # Pair observables
    d["pair_cm_12"] = np.sqrt((p1_x + r2_px)**2 + (p1_y + r2_py)**2 + (p1_z + r2_pz)**2)
    d["pair_cm_23"] = np.sqrt((r2_px + r3_px)**2 + (r2_py + r3_py)**2 + (r2_pz + r3_pz)**2)
    d["pair_cm_13"] = np.sqrt((p1_x + r3_px)**2 + (p1_y + r3_py)**2 + (p1_z + r3_pz)**2)

    # Deuteron recoil check (p2, p3 form pn pair)
    d["is_pn_pair"] = ((d["N2_type"] == pCode) & (d["N3_type"] == nCode)) | \
                      ((d["N2_type"] == nCode) & (d["N3_type"] == pCode))
    d["p2_p3_angle"] = angle_deg(r2_px, r2_py, r2_pz, r3_px, r3_py, r3_pz)

    # Deuteron vector
    d["pd_x"] = r2_px + r3_px
    d["pd_y"] = r2_py + r3_py
    d["pd_z"] = r2_pz + r3_pz
    d["pd_mag"] = np.sqrt(d["pd_x"]**2 + d["pd_y"]**2 + d["pd_z"]**2)
    d["pd_angle_q"] = angle_deg(d["pd_x"], d["pd_y"], d["pd_z"], q_px, q_py, q_pz)

    # Lightcone variables (alpha)
    # Need lead proton 4-vector projected onto q direction
    q_hat_x = q_px / (q_mag + 1e-30)
    q_hat_y = q_py / (q_mag + 1e-30)
    q_hat_z = q_pz / (q_mag + 1e-30)

    # alpha = (E - p_parallel) / mN  where p_parallel = p . q_hat
    l_E = d["lead"][:, 3]
    l_ppar = l_px * q_hat_x + l_py * q_hat_y + l_pz * q_hat_z
    d["alpha_p_final"] = (l_E - l_ppar) / mN

    p1_ppar = p1_x * q_hat_x + p1_y * q_hat_y + p1_z * q_hat_z
    d["alpha_p_initial"] = (np.sqrt(p1_x**2 + p1_y**2 + p1_z**2 + mN**2) - p1_ppar) / mN

    d_E = d["recoil2"][:, 3] + d["recoil3"][:, 3]
    d_ppar = (r2_px + r3_px) * q_hat_x + (r2_py + r3_py) * q_hat_y + (r2_pz + r3_pz) * q_hat_z
    d["alpha_deuteron"] = (d_E - d_ppar) / mN

    d["alpha_sum"] = d["alpha_p_initial"] + d["alpha_deuteron"]

    # Interplane angle: angle between planes {pmiss, p2} and {pmiss, p3}
    pmiss_3 = np.column_stack([p1_x, p1_y, p1_z])
    p2_3 = np.column_stack([r2_px, r2_py, r2_pz])
    p3_3 = np.column_stack([r3_px, r3_py, r3_pz])
    n1 = np.cross(pmiss_3, p2_3)
    n2 = np.cross(pmiss_3, p3_3)
    n1_mag = np.linalg.norm(n1, axis=1, keepdims=True)
    n2_mag = np.linalg.norm(n2, axis=1, keepdims=True)
    cos_ip = np.clip(np.abs(np.sum(n1 / (n1_mag + 1e-30) * n2 / (n2_mag + 1e-30), axis=1)), 0, 1)
    d["interplane_angle"] = np.degrees(np.arccos(cos_ip))

    return d


# ──────────── Plotting helpers ────────────
def plot_1d(ax, values, weights, bins, range_, **kwargs):
    counts, edges = np.histogram(values, bins=bins, range=range_, weights=weights)
    centers = 0.5 * (edges[:-1] + edges[1:])
    total = np.sum(counts)
    if total > 0:
        counts = counts / total
    ax.step(centers, counts, where='mid', **kwargs)
    return centers, counts


# ──────────── Cut builder ────────────
def build_cuts(cut_list):
    """Combine a list of (label, mask) pairs into (combined_mask, description_string)."""
    mask = cut_list[0][1]
    for _, m in cut_list[1:]:
        mask = mask & m
    desc = ",  ".join(lbl for lbl, _ in cut_list)
    return mask, desc


# ──────────── Main analysis functions ────────────
def plot_theta_heatmap(d, out_dir):
    """2D theta12-theta23 heatmaps with progressive cuts."""
    bins = 200
    base_mask = d["weight"] > 0

    # Define cut parameters (change values here → labels auto-update)
    angle_e_max = 45
    Q2_min = 1.0
    angle_pq_max = 8
    lead_q_min = 0.75
    pmiss_lo, pmiss_hi = 0.25, 0.9
    xB_max = 1.2
    interplane_max = 20

    cuts_1_list = [
        (r"$|p_i|>k_F$", (d["p1_mag"] > kF) & (d["p2_mag"] > kF) & (d["p3_mag"] > kF) & (d["p1_after_mag"] > kF)),
        (rf"$\theta_e<{angle_e_max}^\circ$", d["scattering_angle"] < angle_e_max),
        (rf"$Q^2\geq{Q2_min}$", d["Q2"] >= Q2_min),
    ]
    mask_cuts_1, desc_1 = build_cuts(cuts_1_list)

    cuts_2_list = cuts_1_list + [
        (rf"$\theta_{{pq}}<{angle_pq_max}^\circ$", d["p1_after_angle_q"] < angle_pq_max),
        (rf"$p_N/q>{lead_q_min}$", d["lead_over_q"] > lead_q_min),
        (rf"${pmiss_lo}<p_{{\rm miss}}<{pmiss_hi}$", (pmiss_lo < d["pmiss"]) & (d["pmiss"] < pmiss_hi)),
        (rf"$x_B<{xB_max}$", d["xB"] < xB_max),
    ]
    mask_cuts_2, desc_2 = build_cuts(cuts_2_list)

    cuts_3_list = cuts_2_list + [
        (rf"$\phi_{{\rm interplane}}<{interplane_max}^\circ$", d["interplane_angle"] < interplane_max),
    ]
    mask_cuts_3, desc_3 = build_cuts(cuts_3_list)

    # Triangle geometry (shared across all plots)
    A, B = region_params()

    def _line_intersection(m1, b1, m2, b2):
        denom = (m1 - m2)
        if abs(denom) < 1e-15:
            return None
        x = (b2 - b1) / denom
        y = m1 * x + b1
        return float(x), float(y)

    def _add_triangle(ax, points, *, edgecolor, label):
        pts = [p for p in points if p is not None and np.isfinite(p[0]) and np.isfinite(p[1])]
        if len(pts) != 3:
            return
        cx = sum(p[0] for p in pts) / 3.0
        cy = sum(p[1] for p in pts) / 3.0
        pts = sorted(pts, key=lambda p: np.arctan2(p[1] - cy, p[0] - cx))
        poly = Polygon(pts, closed=True, fill=False, edgecolor=edgecolor, linewidth=2.0, label=label)
        ax.add_patch(poly)

    # Region R lines
    m1_R, b1_R = B, 180.0 * (1.0 - B)
    m2_R, b2_R = (1.0 / B), 180.0 * (1.0 - (1.0 / B))
    m3_R, b3_R = -1.0, (A + 180.0 - (180.0 - A) * B)
    p12_R = _line_intersection(m1_R, b1_R, m2_R, b2_R)
    p13_R = _line_intersection(m1_R, b1_R, m3_R, b3_R)
    p23_R = _line_intersection(m2_R, b2_R, m3_R, b3_R)

    # Region L vertices
    s1_L = -(m1_R / (1.0 + m1_R))
    s2_L = -(m2_R / (1.0 + m2_R))
    b_L = 180.0
    x_vert_L = 360.0 - b3_R
    p12_L = (0.0, 180.0)
    p13_L = (x_vert_L, s1_L * x_vert_L + b_L)
    p23_L = (x_vert_L, s2_L * x_vert_L + b_L)

    cut_levels = [
        ("cuts1", desc_1, mask_cuts_1),
        ("cuts2", desc_2, mask_cuts_2),
        ("cuts3", desc_3, mask_cuts_3),
    ]

    for cut_label, cut_desc, cut_mask in cut_levels:
        mask = base_mask & cut_mask
        t12 = d["theta12"][mask]
        t23 = d["theta23"][mask]
        w = d["weight"][mask]

        print(f"  [{cut_label}] L region: {sum(w[in_region_L(t12, t23)]) / sum(w):.6f}"
              f"   R region: {sum(w[in_region_R(t12, t23)]) / sum(w):.6f}")

        h, xe, ye = np.histogram2d(t12, t23, bins=bins, range=[[0, 180], [0, 180]], weights=w)
        h_norm = h / (np.sum(h) + 1e-30)
        h_norm[h_norm == 0] = np.nan

        for show_tri, suffix in [(False, ""), (True, "_triangles")]:
            fig, ax = plt.subplots(figsize=(7, 6))

            x_line = np.linspace(0, 180, 100)
            ax.plot(x_line, 180 - x_line / 2, 'r--')
            ax.plot(180 - x_line / 2, x_line, 'r--')
            ax.plot(x_line, x_line, 'r--')

            im = ax.pcolormesh(xe, ye, h_norm.T, norm=LogNorm())
            fig.colorbar(im, ax=ax, label="Normalized weight")
            ax.set_xlabel(r"$\theta_{12}$ (deg)")
            ax.set_ylabel(r"$\theta_{23}$ (deg)")
            ax.set_title("3N SRC - Angular Distribution")

            if show_tri:
                _add_triangle(ax, [p12_R, p13_R, p23_R], edgecolor='b', label='Region R')
                _add_triangle(ax, [p12_L, p13_L, p23_L], edgecolor='purple', label='Region L')
                ax.legend()

            fig.text(0.5, -0.02, f"Cuts: {cut_desc}", ha='center', va='top', fontsize=7,
                     wrap=True, transform=fig.transFigure)
            fig.tight_layout(rect=[0, 0.04, 1, 1])
            fname = f"theta_heatmap_{cut_label}{suffix}.png"
            fig.savefig(os.path.join(out_dir, fname), dpi=200, bbox_inches='tight')
            plt.close(fig)
            print(f"    {fname}")

    # Also deuteron-marked heatmap
    mask_deut = mask & d["is_pn_pair"] & (d["p2_p3_angle"] < 5.0)
    if np.sum(mask_deut) > 0:
        t12_d = d["theta12"][mask_deut]
        t23_d = d["theta23"][mask_deut]
        w_d = d["weight"][mask_deut]
        fig, ax = plt.subplots(figsize=(7, 6))
        h_d, _, _ = np.histogram2d(t12_d, t23_d, bins=bins, range=[[0, 180], [0, 180]], weights=w_d)
        h_d_norm = h_d / (np.sum(h_d) + 1e-30)
        h_d_norm[h_d_norm == 0] = np.nan
        im = ax.pcolormesh(xe, ye, h_d_norm.T, norm=LogNorm())
        fig.colorbar(im, ax=ax, label="Normalized weight")
        ax.set_xlabel(r"$\theta_{12}$ (deg)")
        ax.set_ylabel(r"$\theta_{23}$ (deg)")
        ax.set_title("3N SRC: theta12-theta23 (deuteron recoil)")
        fig.tight_layout()
        fig.savefig(os.path.join(out_dir, "theta_heatmap_deuteron.png"), dpi=200)
        plt.close(fig)
        print("  theta_heatmap_deuteron.png")


def plot_1d_distributions(d, out_dir):
    """Standard 1D kinematic distributions."""
    mask = (d["Q2"] >= 2.0) & (d["Q2"] < 10.0)
    w = d["weight"][mask]

    variables = [
        ("xB", d["xB"][mask], (0, 4), r"$x_B$"),
        ("Q2", d["Q2"][mask], (2, 10), r"$Q^2$ [GeV$^2$]"),
        ("scattering_angle", d["scattering_angle"][mask], (0, 50), "Electron angle with beam [deg]"),
        ("e_angle_q", d["e_angle_q"][mask], (30, 90), r"Electron angle with $\vec{q}$ [deg]"),
        ("e_mom", d["e_mom"][mask], (0, 8), "Electron momentum [GeV/c]"),
        ("pmiss", d["pmiss"][mask], (0, 5), r"$p_{\mathrm{miss}}$ [GeV/c]"),
        ("p1_angle_beam", d["p1_angle_beam"][mask], (0, 180), "Incoming lead angle with beam [deg]"),
        ("p1_angle_q", d["p1_angle_q"][mask], (0, 180), r"Incoming lead angle with $\vec{q}$ [deg]"),
        ("p2_mag", d["p2_mag"][mask], (0, 1.5), "Recoil 2 momentum [GeV/c]"),
        ("p2_angle_q", d["p2_angle_q"][mask], (0, 180), r"Recoil 2 angle with $\vec{q}$ [deg]"),
        ("p3_mag", d["p3_mag"][mask], (0, 1.5), "Recoil 3 momentum [GeV/c]"),
        ("p3_angle_q", d["p3_angle_q"][mask], (0, 180), r"Recoil 3 angle with $\vec{q}$ [deg]"),
        ("p1_after_angle_q", d["p1_after_angle_q"][mask], (0, 50), r"Outgoing lead angle with $\vec{q}$ [deg]"),
        ("p1_after_mag", d["p1_after_mag"][mask], (0, 8), "Outgoing lead momentum [GeV/c]"),
        ("p1_nucleon_mom", d["p1_mag"][mask], (0, 1), "Lead nucleon momentum [GeV/c]"),
        ("p2_nucleon_mom", d["p2_mag"][mask], (0, 1), "Recoil 1 nucleon momentum [GeV/c]"),
        ("p3_nucleon_mom", d["p3_mag"][mask], (0, 1), "Recoil 2 nucleon momentum [GeV/c]"),
    ]

    for name, vals, range_, xlabel in variables:
        fig, ax = plt.subplots(figsize=(7, 5))
        plot_1d(ax, vals, w, 45, range_, label="3N SRC", linewidth=1.5, color='tab:red')
        ax.set_xlabel(xlabel, fontsize=12)
        ax.set_ylabel("Normalized weight", fontsize=12)
        ax.set_title(f"3N SRC: {xlabel}")
        ax.legend()
        fig.tight_layout()
        fig.savefig(os.path.join(out_dir, f"hist_{name}_1D.png"), dpi=200)
        plt.close(fig)

    print(f"  {len(variables)} 1D distribution plots saved")


def plot_xB_Q2_heatmap(d, out_dir):
    """2D xB-Q2 heatmap."""
    mask = (d["Q2"] >= 2.0) & (d["Q2"] < 10.0) & (d["xB"] >= 0) & (d["xB"] < 4)
    fig, ax = plt.subplots(figsize=(7, 6))
    h, xe, ye = np.histogram2d(d["xB"][mask], d["Q2"][mask], bins=[100, 100],
                                range=[[0, 4], [2, 10]], weights=d["weight"][mask])
    h[h == 0] = np.nan
    im = ax.pcolormesh(xe, ye, h.T, cmap='hot', norm=LogNorm())
    fig.colorbar(im, ax=ax, label="Weight")
    ax.set_xlabel(r"$x_B$")
    ax.set_ylabel(r"$Q^2$ [GeV$^2$]")
    ax.set_title("3N SRC: xB vs Q2")
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, "xB_Q2_heatmap.png"), dpi=200)
    plt.close(fig)
    print("  xB_Q2_heatmap.png")


def plot_region_overlays(d, out_dir):
    """Region L and Region R kinematic distributions for 3N SRC."""
    # All 3 nucleons above kF + kinematic cuts
    mask_cuts = (d["p1_mag"] > kF) & (d["p2_mag"] > kF) & (d["p3_mag"] > kF) \
                & (d["scattering_angle"] < 45) \
                & (d["p1_after_angle_q"] < 8) \
                & (d["lead_over_q"] > 0.75) \
                & (d["interplane_angle"] < 20)

    mask_L = mask_cuts & in_region_L(d["theta12"], d["theta23"])
    mask_R = mask_cuts & in_region_R(d["theta12"], d["theta23"])

    variables = [
        ("init_lead_angle_q", r"Initial lead angle with $\vec{q}$", "deg", (0, 180), d["p1_angle_q"]),
        ("init_rec1_angle_q", r"Initial recoil 1 angle with $\vec{q}$", "deg", (0, 180), d["p2_angle_q"]),
        ("init_rec2_angle_q", r"Initial recoil 2 angle with $\vec{q}$", "deg", (0, 180), d["p3_angle_q"]),
        ("final_lead_angle_q", r"Final lead angle with $\vec{q}$", "deg", (0, 50), d["p1_after_angle_q"]),
        ("final_rec1_angle_q", r"Final recoil 1 angle with $\vec{q}$", "deg", (0, 180), d["p2_angle_q"]),
        ("final_rec2_angle_q", r"Final recoil 2 angle with $\vec{q}$", "deg", (0, 180), d["p3_angle_q"]),
        ("pmiss_LR", r"$p_{\mathrm{miss}}$", "GeV/c", (0, 1.5), d["p1_mag"]),
        ("pmiss_angle_q", r"$p_{\mathrm{miss}}$ angle with $\vec{q}$", "deg", (0, 180), d["p1_angle_q"]),
        ("p2_final_mom", r"$|p_2|$ (final)", "GeV/c", (0, 1.5), d["p2_mag"]),
        ("p3_final_mom", r"$|p_3|$ (final)", "GeV/c", (0, 1.5), d["p3_mag"]),
        ("e_angle_q_LR", r"Electron angle with $\vec{q}$", "deg", (0, 90), d["e_angle_q"]),
        ("e_mom_LR", r"Electron momentum", "GeV/c", (0, 8), d["e_mom"]),
        ("xB_LR", r"$x_B$", "", (0, 4), d["xB"]),
        ("Q2_LR", r"$Q^2$", r"GeV$^2$", (2, 10), d["Q2"]),
        ("lead_mom_over_q", r"$|p_{\mathrm{lead}}|/|\vec{q}|$", "", (0, 2), d["lead_over_q"]),
        ("p1_final_mom", r"$|p_1|$ (final)", "GeV/c", (0, 8), d["p1_after_mag"]),
    ]

    for name, label, unit, range_, vals in variables:
        for region, region_name, mask in [("L", "Region L", mask_L), ("R", "Region R", mask_R)]:
            if np.sum(mask) == 0:
                continue
            fig, ax = plt.subplots(figsize=(7, 5))
            plot_1d(ax, vals[mask], d["weight"][mask], 45, range_,
                    label="3N SRC", linewidth=1.5, color='tab:red')
            xlabel = f"{label}" + (f" [{unit}]" if unit else "")
            ax.set_xlabel(xlabel, fontsize=12)
            ax.set_ylabel("Normalized weight", fontsize=12)
            ax.set_title(f"{label} — {region_name}")
            ax.legend()
            fig.tight_layout()
            fig.savefig(os.path.join(out_dir, f"region_{name}_{region}.png"), dpi=200)
            plt.close(fig)

    print(f"  {len(variables) * 2} region overlay plots saved")


def _signed_out_of_plane_angle(p, a, b):
    """Signed angle (deg) between vector p and the plane spanned by a and b."""
    normal = np.cross(a, b)
    n_mag = np.linalg.norm(normal, axis=1)
    p_mag = np.linalg.norm(p, axis=1)
    dot = np.sum(p * normal, axis=1)
    sin_angle = dot / (p_mag * n_mag + 1e-30)
    return np.degrees(np.arcsin(np.clip(sin_angle, -1, 1)))


def _angle_between_planes(shared, a, b):
    """Angle (deg) between planes {shared, a} and {shared, b}, in [0, 90]."""
    n1 = np.cross(shared, a)
    n2 = np.cross(shared, b)
    n1_mag = np.linalg.norm(n1, axis=1, keepdims=True)
    n2_mag = np.linalg.norm(n2, axis=1, keepdims=True)
    n1_hat = n1 / (n1_mag + 1e-30)
    n2_hat = n2 / (n2_mag + 1e-30)
    cos_angle = np.clip(np.abs(np.sum(n1_hat * n2_hat, axis=1)), 0, 1)
    return np.degrees(np.arccos(cos_angle))


def plot_coplanarity(d, out_dir):
    """Out-of-plane angle for each nucleon (coplanarity measure)."""
    w = d["weight"]

    q = np.column_stack([d["q"][:, 0], d["q"][:, 1], d["q"][:, 2]])
    lead = np.column_stack([d["lead"][:, 0], d["lead"][:, 1], d["lead"][:, 2]])
    pmiss = lead - q
    p2 = np.column_stack([d["recoil2"][:, 0], d["recoil2"][:, 1], d["recoil2"][:, 2]])
    p3 = np.column_stack([d["recoil3"][:, 0], d["recoil3"][:, 1], d["recoil3"][:, 2]])

    angle_lead = _signed_out_of_plane_angle(pmiss, p2, p3)
    angle_p2 = _signed_out_of_plane_angle(p2, pmiss, p3)
    angle_p3 = _signed_out_of_plane_angle(p3, pmiss, p2)

    fig, axes = plt.subplots(1, 3, figsize=(18, 5))
    for ax, vals, title in [
        (axes[0], angle_lead, r"Lead ($p_{\rm miss}$)"),
        (axes[1], angle_p2, "Recoil 2"),
        (axes[2], angle_p3, "Recoil 3"),
    ]:
        plot_1d(ax, vals, w, 20, (-90, 90), linewidth=1.5, color='tab:orange')
        ax.set_xlabel("Out-of-plane angle [deg]")
        ax.set_ylabel("Normalized weight")
        ax.set_title(title)
    fig.suptitle("3N Generator: signed out-of-plane angle (0° = coplanar)", fontsize=12)
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, "coplanarity_3N.png"), dpi=200)
    plt.close(fig)
    print("  coplanarity_3N.png")


def plot_interplane_angle(d, out_dir):
    """Angle between planes {pmiss,p2} and {pmiss,p3}."""
    mask = (d["Q2"] >= 1.0) & (d["scattering_angle"] < 45)
    w = d["weight"][mask]

    q = np.column_stack([d["q"][mask, 0], d["q"][mask, 1], d["q"][mask, 2]])
    lead = np.column_stack([d["lead"][mask, 0], d["lead"][mask, 1], d["lead"][mask, 2]])
    pmiss = lead - q
    p2 = np.column_stack([d["recoil2"][mask, 0], d["recoil2"][mask, 1], d["recoil2"][mask, 2]])
    p3 = np.column_stack([d["recoil3"][mask, 0], d["recoil3"][mask, 1], d["recoil3"][mask, 2]])

    angle = _angle_between_planes(pmiss, p2, p3)

    fig, ax = plt.subplots(figsize=(7, 5))
    plot_1d(ax, angle, w, 50, (0, 90), linewidth=1.5, color='tab:orange')
    ax.set_xlabel(r"Angle between planes $\{p_{\rm miss}, p_2\}$ and $\{p_{\rm miss}, p_3\}$ [deg]")
    ax.set_ylabel("Normalized weight")
    ax.set_title(r"3N Generator: inter-plane angle ($Q^2 \geq 1$ GeV$^2$, $\theta_e < 45^\circ$)")
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, "interplane_angle_3N.png"), dpi=200)
    plt.close(fig)
    print("  interplane_angle_3N.png")


def plot_scattering_plane_angles(d, out_dir):
    """Angles between scattering plane {pmiss,q} and nucleon planes {pmiss,p2}, {pmiss,p3}."""
    base_mask = (d["Q2"] >= 1.0) & (d["scattering_angle"] < 45)

    # Full 3N cuts (same as theta heatmap cuts2 + interplane)
    angle_pq_max = 8
    lead_q_min = 0.75
    pmiss_lo, pmiss_hi = 0.25, 0.9
    xB_max = 1.2
    interplane_cut = 20
    full_cuts = ((d["p1_after_angle_q"] < angle_pq_max)
                 & (d["lead_over_q"] > lead_q_min)
                 & (pmiss_lo < d["pmiss"]) & (d["pmiss"] < pmiss_hi)
                 & (d["xB"] < xB_max)
                 & (d["interplane_angle"] < interplane_cut))

    for cut_label, extra_mask, suffix in [
        ("no extra cuts", np.ones(len(d["weight"]), dtype=bool), ""),
        (rf"$\theta_{{pq}}<{angle_pq_max}^\circ$, $p_N/q>{lead_q_min}$, ${pmiss_lo}<p_{{\rm miss}}<{pmiss_hi}$, $x_B<{xB_max}$, $\phi_{{\rm ip}}<{interplane_cut}^\circ$",
         full_cuts, "_cuts"),
    ]:
        mask = base_mask & extra_mask
        w = d["weight"][mask]
        print(f"    [{suffix or 'base'}] events: {np.sum(mask)}")

        q = np.column_stack([d["q"][mask, 0], d["q"][mask, 1], d["q"][mask, 2]])
        lead = np.column_stack([d["lead"][mask, 0], d["lead"][mask, 1], d["lead"][mask, 2]])
        pmiss = lead - q
        p2 = np.column_stack([d["recoil2"][mask, 0], d["recoil2"][mask, 1], d["recoil2"][mask, 2]])
        p3 = np.column_stack([d["recoil3"][mask, 0], d["recoil3"][mask, 1], d["recoil3"][mask, 2]])

        angle_q_p2 = _angle_between_planes(pmiss, q, p2)
        angle_q_p3 = _angle_between_planes(pmiss, q, p3)

        fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(14, 5))

        plot_1d(ax1, angle_q_p2, w, 50, (0, 90), linewidth=1.5, color='tab:orange')
        ax1.set_xlabel(r"Angle between planes $\{p_{\rm miss}, \vec{q}\}$ and $\{p_{\rm miss}, p_2\}$ [deg]")
        ax1.set_ylabel("Normalized weight")
        ax1.set_title(r"3N: $\{p_{\rm miss}, \vec{q}\}$ vs $\{p_{\rm miss}, p_2\}$")

        plot_1d(ax2, angle_q_p3, w, 50, (0, 90), linewidth=1.5, color='tab:red')
        ax2.set_xlabel(r"Angle between planes $\{p_{\rm miss}, \vec{q}\}$ and $\{p_{\rm miss}, p_3\}$ [deg]")
        ax2.set_ylabel("Normalized weight")
        ax2.set_title(r"3N: $\{p_{\rm miss}, \vec{q}\}$ vs $\{p_{\rm miss}, p_3\}$")

        fig.suptitle(rf"3N Generator — scattering-plane angles ({cut_label})", fontsize=13)
        fig.tight_layout()
        fname = f"scattering_plane_angles_3N{suffix}.png"
        fig.savefig(os.path.join(out_dir, fname), dpi=200)
        plt.close(fig)
        print(f"  {fname}")

        # 2D heatmap only for the full-cuts version
        if suffix == "_cuts":
            from matplotlib.colors import LogNorm
            fig2, ax2d = plt.subplots(figsize=(7, 6))
            h, xe, ye = np.histogram2d(angle_q_p2, angle_q_p3, bins=50,
                                        range=[[0, 90], [0, 90]], weights=w)
            h[h == 0] = np.nan
            im = ax2d.pcolormesh(xe, ye, h.T)
            fig2.colorbar(im, ax=ax2d, label="Weight")
            ax2d.set_xlabel(r"$\angle(\{p_{\rm miss},\vec{q}\}, \{p_{\rm miss},p_2\})$ [deg]")
            ax2d.set_ylabel(r"$\angle(\{p_{\rm miss},\vec{q}\}, \{p_{\rm miss},p_3\})$ [deg]")
            ax2d.set_title("3N Generator — scattering-plane angle heatmap (with cuts)")
            ax2d.set_aspect('equal')
            fig2.tight_layout()
            fig2.savefig(os.path.join(out_dir, "scattering_plane_heatmap_3N.png"), dpi=200)
            plt.close(fig2)
            print("  scattering_plane_heatmap_3N.png")


def plot_xsec_vs_angle(d, out_dir):
    """Plot eN cross section vs angle(pmiss, q) for all 3 CS models."""
    cs_branches = [
        ("sigma_onshell", "On-shell", 'tab:green'),
        ("sigma_cc1", "cc1", 'tab:blue'),
        ("sigma_cc2", "cc2", 'tab:red'),
    ]
    available = [(name, label, color) for name, label, color in cs_branches if name in d]
    if not available:
        print("  No cross section branches found, skipping cross section plots")
        return

    cos_pq = np.cos(np.radians(d["p1_angle_q"]))
    xB = d["xB"]
    Q2_cut = d["Q2"] >= 1.0
    nbins = 50
    bin_edges = np.linspace(-1, 1, nbins + 1)
    bin_centers = 0.5 * (bin_edges[:-1] + bin_edges[1:])

    # 1) Mean sigma vs cos(angle) — all 3 models overlaid
    fig, ax = plt.subplots(figsize=(8, 5))
    for name, label, color in available:
        sigma = d[name]
        mask = (sigma > 0) & Q2_cut
        sum_s, _ = np.histogram(cos_pq[mask], bins=bin_edges, weights=sigma[mask])
        counts, _ = np.histogram(cos_pq[mask], bins=bin_edges)
        mean_s = np.divide(sum_s, counts, out=np.zeros_like(sum_s), where=counts > 0)
        valid = counts > 0
        ax.plot(bin_centers[valid], mean_s[valid], 'o-', markersize=3, linewidth=1.2,
                color=color, label=label)
    ax.set_xlabel(r"$\cos\theta(p_{\rm miss}, \vec{q})$")
    ax.set_ylabel(r"$\langle \sigma \rangle$")
    ax.set_title(r"Mean $\sigma_{eN}$ vs $\cos\theta(p_{\rm miss}, \vec{q})$ ($Q^2 \geq 1$ GeV$^2$)")
    ax.set_yscale('log')
    ax.legend()
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, "sigma_eN_vs_angle.png"), dpi=200)
    plt.close(fig)
    print("  sigma_eN_vs_angle.png")

    # 2) Pure wavefunction: cos(pmiss, z) weighted by rho alone
    if "rho" in d:
        rho = d["rho"]
        mask_rho = (rho > 0) & Q2_cut
        cos_pz = np.cos(np.radians(d["p1_angle_beam"][mask_rho]))
        fig2, ax2 = plt.subplots(figsize=(7, 5))
        plot_1d(ax2, cos_pz, rho[mask_rho], 50, (-1, 1), linewidth=1.5, color='tab:green')
        ax2.set_xlabel(r"$\cos\theta(p_{\rm miss}, \hat{z})$")
        ax2.set_ylabel("Normalized weight")
        ax2.set_title(r"$\cos\theta(p_{\rm miss}, \hat{z})$ weighted by $\rho$ (wavefunction only)")
        fig2.tight_layout()
        fig2.savefig(os.path.join(out_dir, "wavefunction_vs_angle.png"), dpi=200)
        plt.close(fig2)
        print("  wavefunction_vs_angle.png")
    else:
        # Fallback: weight / sigma_cc2 (includes phase space + Jacobian)
        sigma_cc2 = d.get("sigma_cc2")
        if sigma_cc2 is not None:
            mask = (sigma_cc2 > 0) & Q2_cut
            w_wf = d["weight"][mask] / sigma_cc2[mask]
            cos_pz = np.cos(np.radians(d["p1_angle_beam"][mask]))
            fig2, ax2 = plt.subplots(figsize=(7, 5))
            plot_1d(ax2, cos_pz, w_wf, 50, (-1, 1), linewidth=1.5, color='tab:green')
            ax2.set_xlabel(r"$\cos\theta(p_{\rm miss}, \hat{z})$")
            ax2.set_ylabel("Normalized weight")
            ax2.set_title(r"$\cos\theta(p_{\rm miss}, \hat{z})$ weighted by $w / \sigma_{cc2}$"
                          "\n(wavefunction + phase space + Jacobian)")
            fig2.tight_layout()
            fig2.savefig(os.path.join(out_dir, "wavefunction_vs_angle.png"), dpi=200)
            plt.close(fig2)
            print("  wavefunction_vs_angle.png")

    # 3) Delta-function Jacobian: cos(pmiss, z) weighted by delta_jacobian alone
    if "delta_jacobian" in d:
        djac = d["delta_jacobian"]
        mask_dj = (djac > 0) & Q2_cut
        cos_pz = np.cos(np.radians(d["p1_angle_beam"][mask_dj]))
        fig3, ax3 = plt.subplots(figsize=(7, 5))
        plot_1d(ax3, cos_pz, djac[mask_dj], 50, (-1, 1), linewidth=1.5, color='tab:red')
        ax3.set_xlabel(r"$\cos\theta(p_{\rm miss}, \hat{z})$")
        ax3.set_ylabel("Normalized weight")
        ax3.set_title(r"$\cos\theta(p_{\rm miss}, \hat{z})$ weighted by $E_{\rm lead}/J_\delta$"
                      "\n(delta-function Jacobian only)")
        fig3.tight_layout()
        fig3.savefig(os.path.join(out_dir, "delta_jacobian_vs_angle.png"), dpi=200)
        plt.close(fig3)
        print("  delta_jacobian_vs_angle.png")


def plot_xB_by_region(d, out_dir):
    """xB distributions per region, with and without theta(pmiss,q)>90 cut."""
    t12 = d["theta12"]
    t23 = d["theta23"]
    w = d["weight"]
    xB = d["xB"]
    angle_pq = d["p1_angle_q"]

    Q2_cut = d["Q2"] >= 1.0

    regions = [
        ("Region L", in_region_L(t12, t23) & Q2_cut, 'purple'),
        ("Region R", in_region_R(t12, t23) & Q2_cut, 'tab:blue'),
        ("Region BR", in_region_BR(t12, t23) & Q2_cut, 'green'),
    ]

    fig, axes = plt.subplots(1, 3, figsize=(20, 5))

    for ax, angle_cut_label, angle_mask in [
        (axes[0], r"All $\theta(p_{\rm miss}, q)$", np.ones(len(w), dtype=bool)),
        (axes[1], r"$\theta(p_{\rm miss}, q) < 90^\circ$", angle_pq < 90),
        (axes[2], r"$\theta(p_{\rm miss}, q) > 90^\circ$", angle_pq > 90),
    ]:
        for label, rmask, color in regions:
            m = rmask & angle_mask
            if np.sum(m) == 0:
                continue
            plot_1d(ax, xB[m], w[m], 25, (0, 3), label=label, linewidth=1.5, color=color)
        ax.set_xlabel(r"$x_B$")
        ax.set_ylabel("Normalized weight")
        ax.set_title(angle_cut_label)
        ax.axvline(1.0, color='k', linestyle='--', linewidth=0.8, alpha=0.5)
        ax.legend()

    fig.suptitle(r"$x_B$ distribution by region (3N Generator, $Q^2 > 1$ GeV$^2$)", fontsize=14)
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, "xB_by_region.png"), dpi=200)
    plt.close(fig)
    print("  xB_by_region.png")


def plot_q_distributions(d, out_dir):
    """Distributions of |q| and angle(q, z)."""
    Q2_cut = d["Q2"] >= 1.0
    w = d["weight"][Q2_cut]

    q_px, q_py, q_pz = d["q"][Q2_cut, 0], d["q"][Q2_cut, 1], d["q"][Q2_cut, 2]
    q_mag = np.sqrt(q_px**2 + q_py**2 + q_pz**2)
    q_angle_z = np.degrees(np.arccos(np.clip(q_pz / (q_mag + 1e-30), -1, 1)))

    fig, axes = plt.subplots(1, 2, figsize=(14, 5))

    ax = axes[0]
    plot_1d(ax, q_mag, w, 50, (0, 6), linewidth=1.5, color='tab:blue')
    ax.set_xlabel(r"$|\vec{q}|$ [GeV/c]")
    ax.set_ylabel("Normalized weight")
    ax.set_title(r"$|\vec{q}|$ distribution")

    ax = axes[1]
    plot_1d(ax, q_angle_z, w, 50, (0, 90), linewidth=1.5, color='tab:red')
    ax.set_xlabel(r"$\theta(\vec{q}, \hat{z})$ [deg]")
    ax.set_ylabel("Normalized weight")
    ax.set_title(r"Angle of $\vec{q}$ with beam axis")

    fig.suptitle(r"Virtual photon kinematics (3N Generator, $Q^2 \geq 1$ GeV$^2$)", fontsize=13)
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, "q_distributions.png"), dpi=200)
    plt.close(fig)
    print("  q_distributions.png")


def plot_E1_over_mN_by_region(d, out_dir):
    """E1/mN distribution per region."""
    t12 = d["theta12"]
    t23 = d["theta23"]
    w = d["weight"]
    Q2_cut = d["Q2"] >= 1.0

    regions = [
        ("Region L", in_region_L(t12, t23) & Q2_cut, 'purple'),
        ("Region R", in_region_R(t12, t23) & Q2_cut, 'tab:blue'),
        ("Region BR", in_region_BR(t12, t23) & Q2_cut, 'green'),
    ]

    fig, ax = plt.subplots(figsize=(7, 5))
    for label, rmask, color in regions:
        if np.sum(rmask) == 0:
            continue
        plot_1d(ax, d["E1_over_mN"][rmask], w[rmask], 30, (0.4, 1.2),
                label=label, linewidth=1.5, color=color)
    ax.axvline(1.0, color='k', linestyle='--', linewidth=0.8, alpha=0.5)
    ax.set_xlabel(r"$E_1 / m_N$")
    ax.set_ylabel("Normalized weight")
    ax.set_title(r"$E_1 / m_N$ by region (3N Generator, $Q^2 > 1$ GeV$^2$)")
    ax.legend()
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, "E1_over_mN_by_region.png"), dpi=200)
    plt.close(fig)
    print("  E1_over_mN_by_region.png")


def compute_region_fractions(d):
    """Print region weight fraction table."""
    mask_cuts = (d["p1_mag"] > kF) & (d["p2_mag"] > kF) & (d["p3_mag"] > kF) \
                & (d["scattering_angle"] < 45) \
                & (d["p1_after_angle_q"] < 10) \
                & (d["lead_over_q"] > 0.7) \
                & (d["interplane_angle"] < 20)

    w_total = np.sum(d["weight"][mask_cuts])
    t12 = d["theta12"][mask_cuts]
    t23 = d["theta23"][mask_cuts]
    w_L = np.sum(d["weight"][mask_cuts][in_region_L(t12, t23)])
    w_R = np.sum(d["weight"][mask_cuts][in_region_R(t12, t23)])

    print("\n--- Region fractions with kinematic cuts ---")
    print("  (all nucleons > kF, e angle < 45, lead angle with q < 10, pLead/q > 0.7, |p2|>0.5)")
    print(f"{'Source':<20s} | {'Region L frac':>14s} | {'Region R frac':>14s}")
    print("-" * 55)
    if w_total > 0:
        print(f"{'3N generator':<20s} | {100*w_L/w_total:>13.4f}% | {100*w_R/w_total:>13.4f}%")


# ──────────── Main ────────────
def main():
    parser = argparse.ArgumentParser(description="Analyze 3N SRC events from ROOT TTree")
    parser.add_argument("input", help="Path to events_3N.root", default="events_3N.root")
    parser.add_argument("-o", "--output-dir", default="analysis_output/png_files",
                        help="Output directory for plots")
    args = parser.parse_args()

    os.makedirs(args.output_dir, exist_ok=True)

    print(f"Loading {args.input}...")
    d = load_data(args.input)
    print(f"  {len(d['weight'])} events loaded")

    print("Computing derived quantities...")
    d = add_derived(d)

    print(f"\nPlots will be saved to: {args.output_dir}\n")

    print("=== Theta heatmap ===")
    plot_theta_heatmap(d, args.output_dir)

    print("\n=== Coplanarity ===")
    plot_coplanarity(d, args.output_dir)

    print("\n=== Inter-plane angle ===")
    plot_interplane_angle(d, args.output_dir)

    print("\n=== Scattering-plane angles ===")
    plot_scattering_plane_angles(d, args.output_dir)

    print("\n=== Cross section vs angle ===")
    plot_xsec_vs_angle(d, args.output_dir)

    print("\n=== xB by region ===")
    plot_xB_by_region(d, args.output_dir)

    print("\n=== q distributions ===")
    plot_q_distributions(d, args.output_dir)

    print("\n=== E1/mN by region ===")
    plot_E1_over_mN_by_region(d, args.output_dir)

    # print("\n=== 1D distributions ===")
    # plot_1d_distributions(d, args.output_dir)

    # print("\n=== xB-Q2 heatmap ===")
    # plot_xB_Q2_heatmap(d, args.output_dir)

    # print("\n=== Region L/R overlays ===")
    # plot_region_overlays(d, args.output_dir)

    # compute_region_fractions(d)

    print("\nDone.")


if __name__ == "__main__":
    main()
