#!/usr/bin/env python3
"""
Comprehensive analysis of 2N SRC events with FSI.
Reads events_2N.root via uproot, applies cuts, produces all plots and tables.

Usage:
    python analyze_2N.py events_2N.root [-o output_dir]
"""
import os
import argparse
import numpy as np
import uproot
import matplotlib.pyplot as plt
from matplotlib.colors import LogNorm

# ──────────── Physical constants ────────────
mN = 0.93892  # nucleon mass GeV
kF = 0.25     # Fermi momentum GeV/c

# ──────────── Region definitions ────────────
def region_params(A=135.0, K=3.0):
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


# ──────────── Data loading ────────────
def load_data(filepath):
    """Load TTree into dict of numpy arrays."""
    f = uproot.open(filepath)
    tree = f["events"]
    # Read all scalar branches as numpy, arrays as numpy
    data = tree.arrays(library="np")
    return data


def add_derived(d):
    """Add derived kinematic quantities from raw 4-vectors."""
    # Shorthand for 4-vector components: [px, py, pz, E]
    e_px, e_py, e_pz = d["electron"][:, 0], d["electron"][:, 1], d["electron"][:, 2]
    e_E = d["electron"][:, 3]

    lp_px, lp_py, lp_pz = d["lead_post"][:, 0], d["lead_post"][:, 1], d["lead_post"][:, 2]
    rp_px, rp_py, rp_pz = d["recoil_post"][:, 0], d["recoil_post"][:, 1], d["recoil_post"][:, 2]

    q_px, q_py, q_pz = d["q"][:, 0], d["q"][:, 1], d["q"][:, 2]
    q_mag = np.sqrt(q_px**2 + q_py**2 + q_pz**2)

    lpre_px, lpre_py, lpre_pz = d["lead_pre"][:, 0], d["lead_pre"][:, 1], d["lead_pre"][:, 2]
    rpre_px, rpre_py, rpre_pz = d["recoil_pre"][:, 0], d["recoil_pre"][:, 1], d["recoil_pre"][:, 2]

    # p1 = pmiss = lead_post - q (reconstructed initial lead)
    p1_x = lp_px - q_px
    p1_y = lp_py - q_py
    p1_z = lp_pz - q_pz
    d["p1_mag"] = np.sqrt(p1_x**2 + p1_y**2 + p1_z**2)

    # p1_after = lead_post (final lead)
    d["p1_after_mag"] = np.sqrt(lp_px**2 + lp_py**2 + lp_pz**2)

    # p2 = recoil_post
    d["p2_mag"] = np.sqrt(rp_px**2 + rp_py**2 + rp_pz**2)

    # p3_hyp = -(p1 + p2) (hypothetical 3rd nucleon, zero-CM assumption)
    p3h_x = -(p1_x + rp_px)
    p3h_y = -(p1_y + rp_py)
    p3h_z = -(p1_z + rp_pz)
    d["p3_hyp_mag"] = np.sqrt(p3h_x**2 + p3h_y**2 + p3h_z**2)

    # Angles between vectors (returns degrees)
    def angle_deg(ax, ay, az, bx, by, bz):
        dot = ax*bx + ay*by + az*bz
        a_mag = np.sqrt(ax**2 + ay**2 + az**2)
        b_mag = np.sqrt(bx**2 + by**2 + bz**2)
        cos_angle = np.clip(dot / (a_mag * b_mag + 1e-30), -1, 1)
        return np.degrees(np.arccos(cos_angle))

    def theta_deg(px, py, pz):
        """Polar angle with z-axis (beam direction)."""
        p_mag = np.sqrt(px**2 + py**2 + pz**2)
        return np.degrees(np.arccos(np.clip(pz / (p_mag + 1e-30), -1, 1)))

    # theta12 = angle(p1, p2)
    d["theta12"] = angle_deg(p1_x, p1_y, p1_z, rp_px, rp_py, rp_pz)
    # theta23 = angle(p2, p3_hyp)
    d["theta23"] = angle_deg(rp_px, rp_py, rp_pz, p3h_x, p3h_y, p3h_z)

    # Angles with q
    d["p1_angle_q"] = angle_deg(p1_x, p1_y, p1_z, q_px, q_py, q_pz)
    d["p1_after_angle_q"] = angle_deg(lp_px, lp_py, lp_pz, q_px, q_py, q_pz)
    d["p2_angle_q"] = angle_deg(rp_px, rp_py, rp_pz, q_px, q_py, q_pz)
    d["p3_hyp_angle_q"] = angle_deg(p3h_x, p3h_y, p3h_z, q_px, q_py, q_pz)
    d["e_angle_q"] = angle_deg(e_px, e_py, e_pz, q_px, q_py, q_pz)

    # Angles with beam (z-axis)
    d["p1_angle_beam"] = theta_deg(p1_x, p1_y, p1_z)
    d["p1_after_angle_beam"] = theta_deg(lp_px, lp_py, lp_pz)
    d["p2_angle_beam"] = theta_deg(rp_px, rp_py, rp_pz)

    # Pre-FSI derived
    d["p1_pre_mag"] = np.sqrt((lpre_px - q_px)**2 + (lpre_py - q_py)**2 + (lpre_pz - q_pz)**2)
    d["p2_pre_mag"] = np.sqrt(rpre_px**2 + rpre_py**2 + rpre_pz**2)

    # Pre-FSI angles with q
    d["p1_pre_angle_q"] = angle_deg(lpre_px - q_px, lpre_py - q_py, lpre_pz - q_pz, q_px, q_py, q_pz)
    d["p2_pre_angle_q"] = angle_deg(rpre_px, rpre_py, rpre_pz, q_px, q_py, q_pz)
    # Pre-FSI hypothetical 3rd: -(p1_pre + p2_pre)
    p3pre_x = -((lpre_px - q_px) + rpre_px)
    p3pre_y = -((lpre_py - q_py) + rpre_py)
    p3pre_z = -((lpre_pz - q_pz) + rpre_pz)
    d["p3_pre_angle_q"] = angle_deg(p3pre_x, p3pre_y, p3pre_z, q_px, q_py, q_pz)

    # Pair observables
    d["pair_cm_mom"] = np.sqrt((p1_x + rp_px)**2 + (p1_y + rp_py)**2 + (p1_z + rp_pz)**2)
    d["pair_rel_mom"] = np.sqrt((p1_x - rp_px)**2 + (p1_y - rp_py)**2 + (p1_z - rp_pz)**2) / 2.

    # p_lead / q ratio
    d["lead_over_q"] = d["p1_after_mag"] / (q_mag + 1e-30)

    # Electron momentum
    d["e_mom"] = e_E

    # Find highest-momentum FSI secondary nucleon above kF for each event
    # This requires reading the jagged arrays
    # For now, compute nAboveKF-based theta12/theta23 using the stored nAboveKF
    # The p3_fsi info needs the secondary arrays

    return d


def find_p3_fsi(d):
    """
    Find the highest-momentum FSI secondary nucleon above kF for N>=3 events.
    Returns p3_fsi as (px, py, pz) arrays, and a mask of events where p3_fsi exists.
    """
    n = len(d["weight"])
    p3_px = np.zeros(n)
    p3_py = np.zeros(n)
    p3_pz = np.zeros(n)
    has_p3 = np.zeros(n, dtype=bool)

    nSec = d["nSec"]
    sec_pdg = d["sec_pdg"]
    sec_px_arr = d["sec_px"]
    sec_py_arr = d["sec_py"]
    sec_pz_arr = d["sec_pz"]

    for i in range(n):
        if nSec[i] == 0:
            continue
        best_mag = -1.0
        for j in range(nSec[i]):
            pdg = sec_pdg[i][j]
            if pdg == 2212 or pdg == 2112:
                px, py, pz = sec_px_arr[i][j], sec_py_arr[i][j], sec_pz_arr[i][j]
                mag = np.sqrt(px**2 + py**2 + pz**2)
                if mag > kF and mag > best_mag:
                    best_mag = mag
                    p3_px[i], p3_py[i], p3_pz[i] = px, py, pz
                    has_p3[i] = True

    d["p3_fsi_px"] = p3_px
    d["p3_fsi_py"] = p3_py
    d["p3_fsi_pz"] = p3_pz
    d["p3_fsi_mag"] = np.sqrt(p3_px**2 + p3_py**2 + p3_pz**2)
    d["has_p3_fsi"] = has_p3

    # Compute N=3 theta12, theta23 using p3_fsi
    q_px, q_py, q_pz = d["q"][:, 0], d["q"][:, 1], d["q"][:, 2]
    lp_px, lp_py, lp_pz = d["lead_post"][:, 0], d["lead_post"][:, 1], d["lead_post"][:, 2]
    rp_px, rp_py, rp_pz = d["recoil_post"][:, 0], d["recoil_post"][:, 1], d["recoil_post"][:, 2]
    p1_x, p1_y, p1_z = lp_px - q_px, lp_py - q_py, lp_pz - q_pz

    def angle_deg(ax, ay, az, bx, by, bz):
        dot = ax*bx + ay*by + az*bz
        a_mag = np.sqrt(ax**2 + ay**2 + az**2)
        b_mag = np.sqrt(bx**2 + by**2 + bz**2)
        return np.degrees(np.arccos(np.clip(dot / (a_mag * b_mag + 1e-30), -1, 1)))

    d["theta12_n3"] = angle_deg(p1_x, p1_y, p1_z, rp_px, rp_py, rp_pz)
    d["theta23_n3"] = angle_deg(rp_px, rp_py, rp_pz, p3_px, p3_py, p3_pz)
    d["p3_fsi_angle_q"] = angle_deg(p3_px, p3_py, p3_pz, q_px, q_py, q_pz)

    return d


# ──────────── Plotting helpers ────────────
def plot_1d(ax, values, weights, bins, range_, **kwargs):
    """Weighted 1D histogram as step plot."""
    counts, edges = np.histogram(values, bins=bins, range=range_, weights=weights)
    centers = 0.5 * (edges[:-1] + edges[1:])
    # Normalize to unit area
    total = np.sum(counts)
    if total > 0:
        counts = counts / total
    ax.step(centers, counts, where='mid', **kwargs)
    return centers, counts


# ──────────── Main analysis functions ────────────
def plot_theta_heatmaps(d, out_dir):
    """2D theta12-theta23 heatmaps: all events, N=2 only, N=3 only."""
    bins = 200

    # In nAboveKF = 2 case: pLeadFinal angle with q < 10 deg, pLeadFinal/q > 0.7
    cuts_N2 = (d["nAboveKF"] == 2) & (d["p1_angle_q"] < 10) & (d["p1_after_mag"] / d["q_mag"] > 0.7)
    cuts_N3 = (d["nAboveKF"] >= 3) & (d["p1_angle_q"] < 10) & (d["p1_after_mag"] / d["q_mag"] > 0.7) & (d["p2_mag"] > 0.5)

    for label, mask_fn, fname in [
        ("All events", lambda: np.ones(len(d["weight"]), dtype=bool), "theta_heatmap_all.png"),
        ("N=2 events", lambda: d["nAboveKF"] == 2, "theta_heatmap_N2.png"),
        ("N=3 events", lambda: (d["nAboveKF"] >= 3) & d["has_p3_fsi"], "theta_heatmap_N3.png"),
        ("N=2 events with cuts", lambda: cuts_N2, "theta_heatmap_N2_cuts.png"),
        ("N=3 events with cuts", lambda: cuts_N3, "theta_heatmap_N3_cuts.png")
    ]:
        mask = mask_fn() & d["scattering_angle"] < 45
        if label == "N=3 events":
            t12 = d["theta12_n3"][mask]
            t23 = d["theta23_n3"][mask]
        else:
            t12 = d["theta12"][mask]
            t23 = d["theta23"][mask]
        w = d["weight"][mask]

        # Plot region fractions
        print("Current selection: " + label)
        print("L region:" + str(sum(w[in_region_L(t12, t23)]) / sum(w)))
        print("R region:" + str(sum(w[in_region_R(t12, t23)]) / sum(w)))

        # dashed lines: y = 180- x/2 and x=180 - y/2
        x_line = np.linspace(0, 180, 100)
        ax.plot(x_line, 180 - x_line / 2, 'r--')
        ax.plot(180 - x_line / 2, x_line, 'r--')
        ax.plot(x_line, x_line, 'r--')

        fig, ax = plt.subplots(figsize=(7, 6))
        h, xe, ye = np.histogram2d(t12, t23, bins=bins, range=[[0, 180], [0, 180]], weights=w)
        h_norm = h / (np.sum(h) + 1e-30)
        h_norm[h_norm == 0] = np.nan
        im = ax.pcolormesh(xe, ye, h_norm.T, cmap='hot', norm=LogNorm())
        fig.colorbar(im, ax=ax, label="Normalized weight")
        ax.set_xlabel(r"$\theta_{12}$ (deg)")
        ax.set_ylabel(r"$\theta_{23}$ (deg)")
        ax.set_title(f"2N+FSI: {label}")
        fig.tight_layout()
        fig.savefig(os.path.join(out_dir, fname), dpi=200)
        plt.close(fig)
        print(f"  {fname}")


def plot_1d_distributions(d, out_dir, Q2_min=2.0, Q2_max=10.0):
    """Standard 1D kinematic distributions."""
    mask = (d["Q2"] >= Q2_min) & (d["Q2"] < Q2_max)
    w = d["weight"][mask]

    variables = [
        ("xB", d["xB"][mask], (0, 4), r"$x_B$"),
        ("Q2", d["Q2"][mask], (2, 10), r"$Q^2$ [GeV$^2$]"),
        ("scattering_angle", d["scattering_angle"][mask], (0, 50), "Electron angle with beam [deg]"),
        ("e_angle_q", d["e_angle_q"][mask], (30, 90), r"Electron angle with $\vec{q}$ [deg]"),
        ("e_mom", d["e_mom"][mask], (0, 8), "Electron momentum [GeV/c]"),
        ("pmiss", d["pmiss"][mask], (0, 1.5), r"$p_{\mathrm{miss}}$ [GeV/c]"),
        ("p1_angle_beam", d["p1_angle_beam"][mask], (0, 180), "Incoming lead angle with beam [deg]"),
        ("p1_angle_q", d["p1_angle_q"][mask], (0, 180), r"Incoming lead angle with $\vec{q}$ [deg]"),
        ("p2_mag", d["p2_mag"][mask], (0, 1.5), "Recoil momentum [GeV/c]"),
        ("p2_angle_beam", d["p2_angle_beam"][mask], (0, 180), "Recoil angle with beam [deg]"),
        ("p2_angle_q", d["p2_angle_q"][mask], (0, 180), r"Recoil angle with $\vec{q}$ [deg]"),
        ("p1_after_angle_beam", d["p1_after_angle_beam"][mask], (0, 180), "Outgoing lead angle with beam [deg]"),
        ("p1_after_angle_q", d["p1_after_angle_q"][mask], (0, 50), r"Outgoing lead angle with $\vec{q}$ [deg]"),
        ("p1_after_mag", d["p1_after_mag"][mask], (0, 8), "Outgoing lead momentum [GeV/c]"),
        ("theta12", d["theta12"][mask], (0, 180), r"$\theta_{12}$ [deg]"),
        ("pair_cm_mom", d["pair_cm_mom"][mask], (0, 1.0), r"$|p_1+p_2|$ [GeV/c]"),
        ("pair_rel_mom", d["pair_rel_mom"][mask], (0, 1.0), r"$|p_1-p_2|/2$ [GeV/c]"),
        ("p3_hyp_mag", d["p3_hyp_mag"][mask], (0, 1.5), r"$|p_3|$ (hyp.) [GeV/c]"),
        ("p3_hyp_angle_q", d["p3_hyp_angle_q"][mask], (0, 180), r"$p_3$ (hyp.) angle with $\vec{q}$ [deg]"),
    ]

    for name, vals, range_, xlabel in variables:
        fig, ax = plt.subplots(figsize=(7, 5))
        plot_1d(ax, vals, w, 45, range_, label="2N+FSI", linewidth=1.5, color='tab:blue')
        ax.set_xlabel(xlabel, fontsize=12)
        ax.set_ylabel("Normalized weight", fontsize=12)
        ax.set_title(f"2N+FSI: {xlabel}")
        ax.legend()
        fig.tight_layout()
        fig.savefig(os.path.join(out_dir, f"hist_{name}_1D.png"), dpi=200)
        plt.close(fig)

    print(f"  {len(variables)} 1D distribution plots saved")


def plot_xB_Q2_heatmap(d, out_dir, Q2_min=2.0, Q2_max=10.0):
    """2D xB-Q2 heatmap."""
    mask = (d["Q2"] >= Q2_min) & (d["Q2"] < Q2_max) & (d["xB"] >= 0) & (d["xB"] < 4)
    fig, ax = plt.subplots(figsize=(7, 6))
    h, xe, ye = np.histogram2d(d["xB"][mask], d["Q2"][mask], bins=[100, 100],
                                range=[[0, 4], [Q2_min, Q2_max]], weights=d["weight"][mask])
    h[h == 0] = np.nan
    im = ax.pcolormesh(xe, ye, h.T, cmap='hot', norm=LogNorm())
    fig.colorbar(im, ax=ax, label="Weight")
    ax.set_xlabel(r"$x_B$")
    ax.set_ylabel(r"$Q^2$ [GeV$^2$]")
    ax.set_title("2N+FSI: xB vs Q2")
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, "xB_Q2_heatmap.png"), dpi=200)
    plt.close(fig)
    print("  xB_Q2_heatmap.png")


def plot_region_overlays(d, out_dir):
    """Region L (N=2) and Region R (N=3) kinematic variable overlays.
    These are only FSI curves; 3N overlay is done by the cross-generator script."""
    # Region variables for N=2 (Region L)
    mask_N2 = d["nAboveKF"] == 2
    mask_N2_cuts = mask_N2 & (d["scattering_angle"] < 45) & (d["p1_after_angle_q"] < 10) & (d["lead_over_q"] > 0.7)
    mask_N2_L = mask_N2_cuts & in_region_L(d["theta12"], d["theta23"])
    mask_N2_R = mask_N2_cuts & in_region_R(d["theta12"], d["theta23"])

    # Region variables for N=3 (Region R)
    mask_N3 = (d["nAboveKF"] >= 3) & d["has_p3_fsi"]
    mask_N3_cuts = mask_N3 & (d["scattering_angle"] < 45) & (d["p1_after_angle_q"] < 10) & (d["lead_over_q"] > 0.7) & (d["p2_mag"] > 0.5)
    mask_N3_L = mask_N3_cuts & in_region_L(d["theta12_n3"], d["theta23_n3"])
    mask_N3_R = mask_N3_cuts & in_region_R(d["theta12_n3"], d["theta23_n3"])

    variables = [
        ("init_lead_angle_q", r"Initial lead angle with $\vec{q}$", "deg", (0, 180)),
        ("init_rec1_angle_q", r"Initial recoil 1 angle with $\vec{q}$", "deg", (0, 180)),
        ("pmiss_LR", r"$p_{\mathrm{miss}}$", "GeV/c", (0, 1.5)),
        ("p1_after_angle_q_LR", r"Final lead angle with $\vec{q}$", "deg", (0, 50)),
        ("p2_angle_q_LR", r"Final recoil 1 angle with $\vec{q}$", "deg", (0, 180)),
        ("p2_final_mom", r"$|p_2|$ (final)", "GeV/c", (0, 1.5)),
        ("e_angle_q_LR", r"Electron angle with $\vec{q}$", "deg", (0, 90)),
        ("e_mom_LR", r"Electron momentum", "GeV/c", (0, 8)),
        ("xB_LR", r"$x_B$", "", (0, 4)),
        ("Q2_LR", r"$Q^2$", r"GeV$^2$", (2, 10)),
        ("lead_mom_over_q", r"$|p_{\mathrm{lead}}|/|\vec{q}|$", "", (0, 2)),
        ("p1_final_mom", r"$|p_1|$ (final)", "GeV/c", (0, 8)),
    ]

    # Map variable names to data access for N=2
    def get_N2_vals(name, mask):
        mapping = {
            "init_lead_angle_q": d["p1_pre_angle_q"],
            "init_rec1_angle_q": d["p2_pre_angle_q"],
            "pmiss_LR": d["pmiss"],
            "p1_after_angle_q_LR": d["p1_after_angle_q"],
            "p2_angle_q_LR": d["p2_angle_q"],
            "p2_final_mom": d["p2_mag"],
            "e_angle_q_LR": d["e_angle_q"],
            "e_mom_LR": d["e_mom"],
            "xB_LR": d["xB"],
            "Q2_LR": d["Q2"],
            "lead_mom_over_q": d["lead_over_q"],
            "p1_final_mom": d["p1_after_mag"],
        }
        return mapping[name][mask]

    def get_N3_vals(name, mask):
        mapping = {
            "init_lead_angle_q": d["p1_pre_angle_q"],
            "init_rec1_angle_q": d["p2_pre_angle_q"],
            "pmiss_LR": d["pmiss"],
            "p1_after_angle_q_LR": d["p1_after_angle_q"],
            "p2_angle_q_LR": d["p2_angle_q"],
            "p2_final_mom": d["p2_mag"],
            "p3_final_mom": d["p3_fsi_mag"],
            "p3_fsi_angle_q": d["p3_fsi_angle_q"],
            "e_angle_q_LR": d["e_angle_q"],
            "e_mom_LR": d["e_mom"],
            "xB_LR": d["xB"],
            "Q2_LR": d["Q2"],
            "lead_mom_over_q": d["lead_over_q"],
            "p1_final_mom": d["p1_after_mag"],
        }
        return mapping[name][mask]

    for name, label, unit, range_ in variables:
        for region, region_name, mask_n2, mask_n3 in [
            ("L", "Region L", mask_N2_L, mask_N3_L),
            ("R", "Region R", mask_N2_R, mask_N3_R),
        ]:
            fig, ax = plt.subplots(figsize=(7, 5))
            # N=2
            if np.sum(mask_n2) > 0:
                try:
                    vals = get_N2_vals(name, mask_n2)
                    plot_1d(ax, vals, d["weight"][mask_n2], 45, range_,
                            label="2N+FSI N=2", linewidth=1.5, color='tab:blue')
                except KeyError:
                    pass
            # N=3
            if np.sum(mask_n3) > 0:
                try:
                    vals = get_N3_vals(name, mask_n3)
                    plot_1d(ax, vals, d["weight"][mask_n3], 45, range_,
                            label="2N+FSI N=3", linewidth=1.5, color='tab:green')
                except KeyError:
                    pass

            xlabel = f"{label}" + (f" [{unit}]" if unit else "")
            ax.set_xlabel(xlabel, fontsize=12)
            ax.set_ylabel("Normalized weight", fontsize=12)
            ax.set_title(f"{label} — {region_name}")
            ax.legend()
            fig.tight_layout()
            fig.savefig(os.path.join(out_dir, f"region_{name}_{region}.png"), dpi=200)
            plt.close(fig)

    print(f"  {len(variables) * 2} region overlay plots saved")


def compute_region_fractions(d):
    """Print region weight fraction table."""
    # N=2
    mask_N2 = d["nAboveKF"] == 2
    mask_N2_cuts = mask_N2 & (d["scattering_angle"] < 45) & (d["p1_after_angle_q"] < 10) & (d["lead_over_q"] > 0.7)
    w_N2_total = np.sum(d["weight"][mask_N2_cuts])
    t12_n2 = d["theta12"][mask_N2_cuts]
    t23_n2 = d["theta23"][mask_N2_cuts]
    w_N2_L = np.sum(d["weight"][mask_N2_cuts][in_region_L(t12_n2, t23_n2)])
    w_N2_R = np.sum(d["weight"][mask_N2_cuts][in_region_R(t12_n2, t23_n2)])

    # N=3
    mask_N3 = (d["nAboveKF"] >= 3) & d["has_p3_fsi"]
    mask_N3_cuts = mask_N3 & (d["scattering_angle"] < 45) & (d["p1_after_angle_q"] < 10) & (d["lead_over_q"] > 0.7) & (d["p2_mag"] > 0.5)
    w_N3_total = np.sum(d["weight"][mask_N3_cuts])
    t12_n3 = d["theta12_n3"][mask_N3_cuts]
    t23_n3 = d["theta23_n3"][mask_N3_cuts]
    w_N3_L = np.sum(d["weight"][mask_N3_cuts][in_region_L(t12_n3, t23_n3)])
    w_N3_R = np.sum(d["weight"][mask_N3_cuts][in_region_R(t12_n3, t23_n3)])

    print("\n--- Region fractions with kinematic cuts ---")
    print("  (e angle < 45 deg, lead angle with q < 10 deg, pLead/q > 0.7, |p2|>0.5 for N=3)")
    print(f"{'Source':<20s} | {'Region L frac':>14s} | {'Region R frac':>14s}")
    print("-" * 55)
    if w_N2_total > 0:
        print(f"{'2N+FSI  N=2':<20s} | {100*w_N2_L/w_N2_total:>13.4f}% | {100*w_N2_R/w_N2_total:>13.4f}%")
    if w_N3_total > 0:
        print(f"{'2N+FSI  N=3':<20s} | {100*w_N3_L/w_N3_total:>13.4f}% | {100*w_N3_R/w_N3_total:>13.4f}%")


def plot_momenta_N3(d, out_dir):
    """Momentum distributions for N=3 events."""
    mask = (d["nAboveKF"] >= 3) & d["has_p3_fsi"]
    w = d["weight"][mask]
    if np.sum(mask) == 0:
        print("  No N=3 events found, skipping momentum plots")
        return

    fig, axes = plt.subplots(1, 3, figsize=(18, 5))
    for ax, vals, label in [
        (axes[0], d["p1_mag"][mask], r"$|p_1|$ (pmiss)"),
        (axes[1], d["p2_mag"][mask], r"$|p_2|$ (recoil)"),
        (axes[2], d["p3_fsi_mag"][mask], r"$|p_3|$ (FSI sec.)"),
    ]:
        plot_1d(ax, vals, w, 45, (0, 6), label="Post-FSI", linewidth=1.5, color='tab:blue')
        ax.set_xlabel(f"{label} [GeV/c]")
        ax.set_ylabel("Normalized weight")
        ax.legend()
    fig.suptitle("N=3 Momentum Distributions (2N+FSI)", fontsize=14)
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, "momenta_N3.png"), dpi=200)
    plt.close(fig)
    print("  momenta_N3.png")


# ──────────── Main ────────────
def main():
    parser = argparse.ArgumentParser(description="Analyze 2N SRC events from ROOT TTree")
    parser.add_argument("input", help="Path to events_2N.root")
    parser.add_argument("-o", "--output-dir", default="analysis_output_2N/png_files",
                        help="Output directory for plots")
    args = parser.parse_args()

    os.makedirs(args.output_dir, exist_ok=True)

    print(f"Loading {args.input}...")
    d = load_data(args.input)
    print(f"  {len(d['weight'])} events loaded")

    print("Computing derived quantities...")
    d = add_derived(d)
    d = find_p3_fsi(d)

    print(f"\nPlots will be saved to: {args.output_dir}\n")

    print("=== Theta heatmaps ===")
    plot_theta_heatmaps(d, args.output_dir)

    print("\n=== 1D distributions ===")
    plot_1d_distributions(d, args.output_dir)

    print("\n=== xB-Q2 heatmap ===")
    plot_xB_Q2_heatmap(d, args.output_dir)

    print("\n=== Region L/R overlays ===")
    plot_region_overlays(d, args.output_dir)

    print("\n=== N=3 momentum distributions ===")
    plot_momenta_N3(d, args.output_dir)

    compute_region_fractions(d)

    print("\nDone.")


if __name__ == "__main__":
    main()
