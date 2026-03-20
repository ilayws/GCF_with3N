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
import matplotlib.pyplot as plt
from matplotlib.colors import LogNorm

# ──────────── Physical constants ────────────
mN = 0.93892  # nucleon mass GeV
kF = 0.25     # Fermi momentum GeV/c
pCode = 2212
nCode = 2112

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


# ──────────── Main analysis functions ────────────
def plot_theta_heatmap(d, out_dir):
    """2D theta12-theta23 heatmap."""
    bins = 200
    mask = d["weight"] > 0
    mask_cuts_1 = (d["p1_mag"] > kF) & (d["p2_mag"] > kF) & (d["p3_mag"] > kF) \
                & (d["p1_after_mag"] > kF) & (d["scattering_angle"] < 45)
    mask_cuts_2 = mask_cuts_1 \
                & (d["p1_after_angle_q"] < 10) \
                & (d["lead_over_q"] > 0.7)    
    mask_cuts_3 = mask_cuts_2 & (d["p2_mag"] > 0.5)

    mask = mask & mask_cuts_2

    t12 = d["theta12"][mask]
    t23 = d["theta23"][mask]
    w = d["weight"][mask]

    # Plot region fractions
    print("L region:" + str(sum(w[in_region_L(t12, t23)]) / sum(w)))
    print("R region:" + str(sum(w[in_region_R(t12, t23)]) / sum(w)))

    fig, ax = plt.subplots(figsize=(7, 6))
    h, xe, ye = np.histogram2d(t12, t23, bins=bins, range=[[0, 180], [0, 180]], weights=w)
    h_norm = h / (np.sum(h) + 1e-30)
    h_norm[h_norm == 0] = np.nan

    # dashed lines: y = 180- x/2 and x=180 - y/2
    x_line = np.linspace(0, 180, 100)
    ax.plot(x_line, 180 - x_line / 2, 'r--')
    ax.plot(180 - x_line / 2, x_line, 'r--')
    ax.plot(x_line, x_line, 'r--')

    im = ax.pcolormesh(xe, ye, h_norm.T, norm=LogNorm())
    fig.colorbar(im, ax=ax, label="Normalized weight")
    ax.set_xlabel(r"$\theta_{12}$ (deg)")
    ax.set_ylabel(r"$\theta_{23}$ (deg)")
    ax.set_title("3N SRC - Angular Distribution")
    fig.tight_layout()
    fig.savefig(os.path.join(out_dir, "theta_heatmap.png"), dpi=200)
    plt.close(fig)
    print("  theta_heatmap.png")

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
                & (d["p1_after_angle_q"] < 10) \
                & (d["lead_over_q"] > 0.7) \
                & (d["p2_mag"] > 0.5)

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


def compute_region_fractions(d):
    """Print region weight fraction table."""
    mask_cuts = (d["p1_mag"] > kF) & (d["p2_mag"] > kF) & (d["p3_mag"] > kF) \
                & (d["scattering_angle"] < 45) \
                & (d["p1_after_angle_q"] < 10) \
                & (d["lead_over_q"] > 0.7) \
                & (d["p2_mag"] > 0.5)

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
