#!/usr/bin/env python3
"""
Generate all theta12-theta23 heatmaps for 3N and 2N+FSI generators,
organized into folders by COM/noCOM and generator type.
Outputs L/R region fractions to a text file.
"""
import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
from matplotlib.colors import LogNorm
from matplotlib.patches import Polygon
import uproot
import os
import sys

# Constants
kF = 0.25
mN = 0.938272
pCode, nCode = 2212, 2112


# ──────── Region definitions ────────
def region_params(A=135.0, K=4.0):
    A_rad = np.radians(A)
    B = np.degrees(np.arctan(np.sin(A_rad) / (K + np.cos(A_rad)))) / (180.0 - A)
    return A, B

def in_region_R(t12, t23, A=135.0, K=4.0):
    _, B = region_params(A, K)
    line1 = B * (t12 - 180) + 180
    line2 = (1/B) * (t12 - 180) + 180
    line3 = -(t12 - A) + 180 - (180-A)*B
    return (t23 <= line1) & (t23 >= line2) & (t23 >= line3)

def in_region_L(t12, t23, A=135.0, K=4.0):
    return in_region_R(360 - t12 - t23, t23, A, K)


# ──────── Triangle geometry ────────
def get_triangle_vertices():
    A, B = region_params()
    def _li(m1, b1, m2, b2):
        d = m1 - m2
        if abs(d) < 1e-15: return None
        x = (b2 - b1) / d
        return (float(x), float(m1 * x + b1))

    m1_R, b1_R = B, 180.0 * (1.0 - B)
    m2_R, b2_R = (1.0 / B), 180.0 * (1.0 - (1.0 / B))
    m3_R, b3_R = -1.0, (A + 180.0 - (180.0 - A) * B)
    p12_R = _li(m1_R, b1_R, m2_R, b2_R)
    p13_R = _li(m1_R, b1_R, m3_R, b3_R)
    p23_R = _li(m2_R, b2_R, m3_R, b3_R)

    s1_L = -(m1_R / (1.0 + m1_R))
    s2_L = -(m2_R / (1.0 + m2_R))
    x_vert_L = 360.0 - b3_R
    p12_L = (0.0, 180.0)
    p13_L = (x_vert_L, s1_L * x_vert_L + 180.0)
    p23_L = (x_vert_L, s2_L * x_vert_L + 180.0)

    return (p12_R, p13_R, p23_R), (p12_L, p13_L, p23_L)


def add_triangle(ax, points, *, edgecolor, label):
    pts = [p for p in points if p is not None and np.isfinite(p[0]) and np.isfinite(p[1])]
    if len(pts) != 3: return
    cx = sum(p[0] for p in pts) / 3.0
    cy = sum(p[1] for p in pts) / 3.0
    pts = sorted(pts, key=lambda p: np.arctan2(p[1] - cy, p[0] - cx))
    poly = Polygon(pts, closed=True, fill=False, edgecolor=edgecolor, linewidth=2.0, label=label)
    ax.add_patch(poly)


# ──────── Angle helper ────────
def angle_deg(a, b):
    """Angle in degrees between arrays of 3-vectors a and b."""
    dot = np.sum(a * b, axis=1)
    a_mag = np.linalg.norm(a, axis=1)
    b_mag = np.linalg.norm(b, axis=1)
    return np.degrees(np.arccos(np.clip(dot / (a_mag * b_mag + 1e-30), -1, 1)))

def interplane_angle(shared, a, b):
    n1 = np.cross(shared, a)
    n2 = np.cross(shared, b)
    n1m = np.linalg.norm(n1, axis=1, keepdims=True)
    n2m = np.linalg.norm(n2, axis=1, keepdims=True)
    cos_a = np.clip(np.abs(np.sum(n1/(n1m+1e-30) * n2/(n2m+1e-30), axis=1)), 0, 1)
    return np.degrees(np.arccos(cos_a))


# ──────── Plot one heatmap ────────
def plot_heatmap(t12, t23, w, title, cut_desc, out_path, show_triangles=False):
    bins = 200
    h, xe, ye = np.histogram2d(t12, t23, bins=bins, range=[[0, 180], [0, 180]], weights=w)
    h_norm = h / (np.sum(h) + 1e-30)
    pos = h_norm[h_norm > 0]
    h_norm[h_norm == 0] = np.nan

    fig, ax = plt.subplots(figsize=(7, 6))
    x_line = np.linspace(0, 180, 100)
    ax.plot(x_line, 180 - x_line / 2, 'r--')
    ax.plot(180 - x_line / 2, x_line, 'r--')
    ax.plot(x_line, x_line, 'r--')

    if len(pos) > 0:
        im = ax.pcolormesh(xe, ye, h_norm.T, norm=LogNorm(vmin=pos.min(), vmax=pos.max()))
    else:
        im = ax.pcolormesh(xe, ye, h_norm.T)
    fig.colorbar(im, ax=ax, label="Normalized weight")
    ax.set_xlabel(r"$\theta_{12}$ (deg)")
    ax.set_ylabel(r"$\theta_{23}$ (deg)")
    ax.set_title(title)

    if show_triangles:
        tri_R, tri_L = get_triangle_vertices()
        add_triangle(ax, tri_R, edgecolor='b', label='Region R')
        add_triangle(ax, tri_L, edgecolor='purple', label='Region L')
        ax.legend()

    fig.text(0.5, -0.02, f"Cuts: {cut_desc}", ha='center', va='top', fontsize=7,
             wrap=True, transform=fig.transFigure)
    fig.tight_layout(rect=[0, 0.04, 1, 1])
    fig.savefig(out_path, dpi=200, bbox_inches='tight')
    plt.close(fig)


# ──────── Load and compute derived for 3N ────────
def load_3N(filepath):
    f = uproot.open(filepath)
    d = f["events"].arrays(library="np")

    # Filter out events with inf/nan weights
    good = np.isfinite(d["weight"]) & (d["weight"] > 0)
    if np.sum(~good) > 0:
        print(f"  WARNING: removing {np.sum(~good)} events with inf/nan weights")
        for key in d:
            d[key] = d[key][good]

    l = d["lead"][:, :3]
    q = d["q"][:, :3]
    r2 = d["recoil2"][:, :3]
    r3 = d["recoil3"][:, :3]
    pmiss = l - q

    d["pmiss_mag"] = np.linalg.norm(pmiss, axis=1)
    d["p1_after_mag"] = np.linalg.norm(l, axis=1)
    d["p2_mag"] = np.linalg.norm(r2, axis=1)
    d["p3_mag"] = np.linalg.norm(r3, axis=1)
    q_mag = np.linalg.norm(q, axis=1)
    d["lead_over_q"] = d["p1_after_mag"] / (q_mag + 1e-30)
    d["p1_after_angle_q"] = angle_deg(l, q)

    d["theta12"] = angle_deg(pmiss, r2)
    d["theta23"] = angle_deg(r2, r3)

    d["interplane_angle"] = interplane_angle(pmiss, r2, r3)

    return d


# ──────── Load and compute derived for 2N+FSI ────────
def load_2N(filepath):
    f = uproot.open(filepath)
    d = f["events"].arrays(library="np")

    # Filter out events with inf/nan weights
    good = np.isfinite(d["weight"]) & (d["weight"] > 0)
    if np.sum(~good) > 0:
        print(f"  WARNING: removing {np.sum(~good)} events with inf/nan weights")
        for key in d:
            d[key] = d[key][good]

    lp = d["lead_post"][:, :3]
    rp = d["recoil_post"][:, :3]
    q = d["q"][:, :3]
    pmiss = lp - q

    d["pmiss_mag"] = np.linalg.norm(pmiss, axis=1)
    d["p1_after_mag"] = np.linalg.norm(lp, axis=1)
    d["p2_mag"] = np.linalg.norm(rp, axis=1)
    q_mag = np.linalg.norm(q, axis=1)
    d["lead_over_q"] = d["p1_after_mag"] / (q_mag + 1e-30)
    d["p1_after_angle_q"] = angle_deg(lp, q)

    # Hypothetical p3 for N=2
    p3h = -(pmiss + rp)
    d["theta12"] = angle_deg(pmiss, rp)
    d["theta23"] = angle_deg(rp, p3h)

    # Find p3_fsi for N=3
    n = len(d["weight"])
    p3_px = np.zeros(n); p3_py = np.zeros(n); p3_pz = np.zeros(n)
    has_p3 = np.zeros(n, dtype=bool)
    nSec = d["nSec"]; sec_pdg = d["sec_pdg"]
    sec_px = d["sec_px"]; sec_py = d["sec_py"]; sec_pz = d["sec_pz"]
    for i in range(n):
        if nSec[i] == 0: continue
        best = -1.0
        for j in range(nSec[i]):
            pdg = sec_pdg[i][j]
            if pdg == 2212 or pdg == 2112:
                px, py, pz = sec_px[i][j], sec_py[i][j], sec_pz[i][j]
                mag = np.sqrt(px**2 + py**2 + pz**2)
                if mag > kF and mag > best:
                    best = mag
                    p3_px[i], p3_py[i], p3_pz[i] = px, py, pz
                    has_p3[i] = True
    d["p3_fsi_px"] = p3_px; d["p3_fsi_py"] = p3_py; d["p3_fsi_pz"] = p3_pz
    d["p3_fsi_mag"] = np.sqrt(p3_px**2 + p3_py**2 + p3_pz**2)
    d["has_p3_fsi"] = has_p3

    # N=3 angles
    d["theta12_n3"] = angle_deg(pmiss, rp)
    p3_vec = np.column_stack([p3_px, p3_py, p3_pz])
    d["theta23_n3"] = angle_deg(rp, p3_vec)
    d["pmiss_angle_p3_fsi"] = angle_deg(pmiss, p3_vec)
    d["interplane_angle_n3"] = interplane_angle(pmiss, rp, p3_vec)

    return d


# ──────── Main ────────
def main():
    base_dir = "/Users/ilay/Desktop/Boston/GCF_with3N-master/src/programs"

    files = {
        "COM": {
            "3N": f"{base_dir}/genQE_3N/events_3N_COM.root",
            "2N": f"{base_dir}/genQE_FSI/events_2N.root",
        },
        "noCOM": {
            "3N": f"{base_dir}/genQE_3N/events_3N.root",
            "2N": f"{base_dir}/genQE_FSI/events_2N_noCOM.root",
        },
    }

    out_base = f"{base_dir}/genQE_3N/analysis/Plots"
    results = []  # (description, L_frac, R_frac)

    for cm_label in ["COM", "noCOM"]:
        # ── 3N ──
        f3N = files[cm_label]["3N"]
        if f3N and os.path.exists(f3N):
            print(f"\nLoading 3N {cm_label}: {f3N}")
            d = load_3N(f3N)
            print(f"  {len(d['weight'])} events")

            out_dir = os.path.join(out_base, cm_label, "3N")
            os.makedirs(out_dir, exist_ok=True)

            # Base mask: e angle < 45, Q2 >= 1, all nucleons > kF
            base = ((d["scattering_angle"] < 45) & (d["Q2"] >= 1.0)
                    & (d["p1_after_mag"] > kF) & (d["p2_mag"] > kF) & (d["p3_mag"] > kF)
                    & (d["pmiss_mag"] > kF))

            # Cut levels
            src_cuts = (base
                        & (d["p1_after_angle_q"] < 8)
                        & (d["lead_over_q"] > 0.75)
                        & (0.25 < d["pmiss_mag"]) & (d["pmiss_mag"] < 0.9)
                        & (d["xB"] < 1.2))

            ip_cuts = src_cuts & (d["interplane_angle"] < 20)

            levels = [
                ("no_extra_cuts", "Base: $|p_i|>k_F$, $\\theta_e<45^\\circ$, $Q^2\\geq1$", base),
                ("src_cuts", "Base + $\\theta_{pq}<8^\\circ$, $p_N/q>0.75$, $0.25<p_{miss}<0.9$, $x_B<1.2$", src_cuts),
                ("src_ip_cuts", "SRC cuts + $\\phi_{ip}<20^\\circ$", ip_cuts),
            ]

            for tag, desc, mask in levels:
                t12 = d["theta12"][mask]
                t23 = d["theta23"][mask]
                w = d["weight"][mask]
                if len(w) == 0: continue

                w_L = np.sum(w[in_region_L(t12, t23)])
                w_R = np.sum(w[in_region_R(t12, t23)])
                w_tot = np.sum(w)
                fL = w_L / w_tot if w_tot > 0 else 0
                fR = w_R / w_tot if w_tot > 0 else 0

                label = f"3N_{cm_label}_{tag}"
                results.append((label, desc, fL, fR, np.sum(mask)))
                print(f"  [{tag}] L={fL:.6f} R={fR:.6f} ({np.sum(mask)} events)")

                title = f"3N SRC ({cm_label})"
                for tri in [False, True]:
                    suffix = "_triangles" if tri else ""
                    fname = f"{tag}{suffix}.png"
                    plot_heatmap(t12, t23, w, title, desc, os.path.join(out_dir, fname), show_triangles=tri)
                    print(f"    {fname}")

        # ── 2N+FSI ──
        f2N = files[cm_label]["2N"]
        if f2N and os.path.exists(f2N):
            print(f"\nLoading 2N+FSI {cm_label}: {f2N}")
            d2 = load_2N(f2N)
            print(f"  {len(d2['weight'])} events")

            # ── N=2 detected ──
            out_dir_n2 = os.path.join(out_base, cm_label, "2N+FSI_2detected")
            os.makedirs(out_dir_n2, exist_ok=True)

            base_n2 = ((d2["scattering_angle"] < 45) & (d2["Q2"] >= 1.0)
                       & (d2["nAboveKF"] == 2))

            src_n2 = (base_n2
                      & (d2["p1_after_angle_q"] < 8) & (d2["lead_over_q"] > 0.75)
                      & (0.25 < d2["pmiss_mag"]) & (d2["pmiss_mag"] < 0.9)
                      & (d2["xB"] < 1.2))

            levels_n2 = [
                ("no_extra_cuts", "Base: $N_{kF}=2$, $\\theta_e<45^\\circ$, $Q^2\\geq1$", base_n2),
                ("src_cuts", "Base + $\\theta_{pq}<8^\\circ$, $p_N/q>0.75$, $0.25<p_{miss}<0.9$, $x_B<1.2$", src_n2),
            ]

            for tag, desc, mask in levels_n2:
                t12 = d2["theta12"][mask]
                t23 = d2["theta23"][mask]
                w = d2["weight"][mask]
                if len(w) == 0: continue

                w_L = np.sum(w[in_region_L(t12, t23)])
                w_R = np.sum(w[in_region_R(t12, t23)])
                w_tot = np.sum(w)
                fL = w_L / w_tot if w_tot > 0 else 0
                fR = w_R / w_tot if w_tot > 0 else 0

                label = f"2N+FSI_N2_{cm_label}_{tag}"
                results.append((label, desc, fL, fR, np.sum(mask)))
                print(f"  [N=2 {tag}] L={fL:.6f} R={fR:.6f} ({np.sum(mask)} events)")

                title = f"2N+FSI N=2 ({cm_label})"
                for tri in [False, True]:
                    suffix = "_triangles" if tri else ""
                    fname = f"{tag}{suffix}.png"
                    plot_heatmap(t12, t23, w, title, desc, os.path.join(out_dir_n2, fname), show_triangles=tri)
                    print(f"    {fname}")

            # ── N=3 detected ──
            out_dir_n3 = os.path.join(out_base, cm_label, "2N+FSI_3detected")
            os.makedirs(out_dir_n3, exist_ok=True)

            base_n3 = ((d2["scattering_angle"] < 45) & (d2["Q2"] >= 1.0)
                       & (d2["nAboveKF"] >= 3) & d2["has_p3_fsi"])

            src_n3 = (base_n3
                      & (d2["p1_after_angle_q"] < 8) & (d2["lead_over_q"] > 0.75)
                      & (0.25 < d2["pmiss_mag"]) & (d2["pmiss_mag"] < 0.9)
                      & (d2["xB"] < 1.2))

            ip_n3 = src_n3 & (d2["interplane_angle_n3"] < 20)

            levels_n3 = [
                ("no_extra_cuts", "Base: $N_{kF}\\geq3$, $\\theta_e<45^\\circ$, $Q^2\\geq1$", base_n3),
                ("src_cuts", "Base + $\\theta_{pq}<8^\\circ$, $p_N/q>0.75$, $0.25<p_{miss}<0.9$, $x_B<1.2$", src_n3),
                ("src_ip_cuts", "SRC cuts + $\\phi_{ip}<20^\\circ$", ip_n3),
            ]

            for tag, desc, mask in levels_n3:
                # Symmetrize N=3: concatenate original + swapped (2<->3)
                t12_orig = d2["theta12_n3"][mask]
                t12_swap = d2["pmiss_angle_p3_fsi"][mask]
                t23_orig = d2["theta23_n3"][mask]
                t12 = np.concatenate([t12_orig, t12_swap])
                t23 = np.concatenate([t23_orig, t23_orig])
                w = np.concatenate([d2["weight"][mask], d2["weight"][mask]])
                if len(w) == 0: continue

                w_L = np.sum(w[in_region_L(t12, t23)])
                w_R = np.sum(w[in_region_R(t12, t23)])
                w_tot = np.sum(w)
                fL = w_L / w_tot if w_tot > 0 else 0
                fR = w_R / w_tot if w_tot > 0 else 0

                label = f"2N+FSI_N3_{cm_label}_{tag}"
                results.append((label, desc, fL, fR, np.sum(mask)))
                print(f"  [N=3 {tag}] L={fL:.6f} R={fR:.6f} ({np.sum(mask)} events)")

                title = f"2N+FSI N=3 ({cm_label})"
                for tri in [False, True]:
                    suffix = "_triangles" if tri else ""
                    fname = f"{tag}{suffix}.png"
                    plot_heatmap(t12, t23, w, title, desc, os.path.join(out_dir_n3, fname), show_triangles=tri)
                    print(f"    {fname}")

    # ── Write results ──
    results_path = os.path.join(out_base, "region_fractions.txt")
    with open(results_path, 'w') as f:
        f.write(f"{'Label':<50s} {'L frac':>10s} {'R frac':>10s} {'Events':>10s}\n")
        f.write("-" * 85 + "\n")
        for label, desc, fL, fR, nevt in results:
            f.write(f"{label:<50s} {fL:>10.6f} {fR:>10.6f} {nevt:>10d}\n")
    print(f"\nRegion fractions saved to: {results_path}")
    print("Done.")


if __name__ == "__main__":
    main()
