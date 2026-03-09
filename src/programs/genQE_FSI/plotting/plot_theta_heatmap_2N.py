"""
theta_heatmap_plot_2N.py
------------------------
Plot the 2D 3-body theta heatmap produced by SRC_analysis_2N (2N FSI generator).

The three "nucleons" are:
  1  lead proton  (p_lead_final  = post-FSI outgoing lead)
  2  recoil       (p_recoil      = post-FSI recoil)
  3  hypothetical (p3_hyp        = -(p_lead_final + p_recoil), zero-COM constraint)

Axes:
  x  theta12 = angle(p_lead_final, p_recoil)
  y  theta23 = angle(p_recoil, p3_hyp)

File format (identical to SRC_analysis_3N hist_theta12_theta23.txt):
  # theta_bins N range_deg [0,180]
  # Columns: theta12_center theta23_center weight
  <th12>  <th23>  <w>
  ...

Usage:
  python theta_heatmap_plot_2N.py          # auto-finds analysis_output_2N/txt_files/
"""

import re
import os
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.colors import LogNorm


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

def parse_int(pattern: str, text: str, default: int) -> int:
    m = re.search(pattern, text)
    return int(m.group(1)) if m else default


def load_theta_hist(path: str):
    """Load hist_theta12_theta23_3body.txt into a dense (theta_bins x theta_bins) grid.

    Returns
    -------
    th12_centers : 1-D array, length theta_bins
    th23_centers : 1-D array, length theta_bins
    heatmap      : 2-D array, shape (theta_bins, theta_bins), [th23_idx, th12_idx]
    """
    header = ""
    with open(path) as f:
        for line in f:
            if line.startswith('#'):
                header += line
            else:
                break

    theta_bins = parse_int(r"theta_bins\s+(\d+)", header, 0)
    if theta_bins <= 0:
        raise ValueError(f"Could not parse theta_bins from header of {path}")

    d = 180.0 / theta_bins
    th12_centers = np.linspace(d / 2.0, 180.0 - d / 2.0, theta_bins)
    th23_centers = np.linspace(d / 2.0, 180.0 - d / 2.0, theta_bins)

    heatmap = np.zeros((theta_bins, theta_bins), dtype=float)

    data = np.loadtxt(path, comments='#')
    if data.size == 0:
        return th12_centers, th23_centers, heatmap

    data = np.atleast_2d(data)
    th12 = data[:, 0]
    th23 = data[:, 1]
    w    = data[:, 2]

    ii = np.clip(np.rint((th12 - d / 2.0) / d).astype(int), 0, theta_bins - 1)
    jj = np.clip(np.rint((th23 - d / 2.0) / d).astype(int), 0, theta_bins - 1)
    for x, y, ww in zip(ii, jj, w):
        heatmap[y, x] += ww

    return th12_centers, th23_centers, heatmap


def circle_sum(center, radius, th12_c, th23_c, heatmap_norm):
    """Sum of normalized weights within a circle in (theta12, theta23) space."""
    g12, g23 = np.meshgrid(th12_c, th23_c)
    dist = np.sqrt((g12 - center[0])**2 + (g23 - center[1])**2)
    mask = dist <= radius
    return np.sum(heatmap_norm[mask]), mask


# ---------------------------------------------------------------------------
# Plotting
# ---------------------------------------------------------------------------

def plot_heatmap(th12_c, th23_c, heatmap, output_filename,
                 title_suffix="", png_dir=".", region_desc=None):
    """Normalise and plot one heatmap; print circle-sum statistics."""

    heatmap = np.nan_to_num(heatmap, nan=0.0)
    total = np.sum(heatmap)
    if total == 0:
        print(f"  [skip] heatmap is empty{title_suffix}")
        return

    heatmap_norm = heatmap / total

    print(f"  Total raw weight{title_suffix}:         {total:.4g}")
    print(f"  Non-zero bins{title_suffix}:            {np.sum(heatmap_norm > 0)}")
    print(f"  Max normalised bin{title_suffix}:       {np.max(heatmap_norm):.4g}")

    # Circle sums at physically interesting 3-body configurations
    circle_radius = 15  # degrees
    configs = [
        ((180, 180), 'orange', '(180°,180°) fully back-to-back'),
        ((120, 120), 'blue',   '(120°,120°) equilateral triangle'),
        ((180,  60), 'red',    '(180°, 60°) lead↔recoil back-to-back'),
        (( 60, 180), 'green',  '( 60°,180°) recoil↔hyp  back-to-back'),
    ]
    for (cx, cy), color, label in configs:
        s, _ = circle_sum((cx, cy), circle_radius, th12_c, th23_c, heatmap_norm)
        print(f"  Circle r={circle_radius}° at {label}: {s * 100:.2f}%")

    # Plot
    fig, ax = plt.subplots(figsize=(8, 6))
    im = ax.imshow(
        heatmap_norm,
        origin='lower',
        extent=[0, 180, 0, 180],
        aspect='auto',
        cmap='viridis',
        norm=LogNorm(vmin=heatmap_norm[heatmap_norm > 0].min(),
                     vmax=heatmap_norm.max()),
    )
    ax.set_xlim(0, 180)
    ax.set_ylim(0, 180)
    ax.set_xlabel(r'$\theta_{12}$ = $\angle(\vec{p}_\mathrm{lead}^\mathrm{final},\,\vec{p}_\mathrm{recoil})$ (deg)', fontsize=12)
    ax.set_ylabel(r'$\theta_{23}$ = $\angle(\vec{p}_\mathrm{recoil},\,\vec{p}_3^\mathrm{hyp})$ (deg)', fontsize=12)
    title = f'3-body $\\theta$ heatmap{title_suffix}\n(2N FSI generator + hyp. spectator)'
    if region_desc:
        title += f'\n{region_desc}'
    ax.set_title(title, fontsize=13)

    cbar = fig.colorbar(im, ax=ax, label='Normalised weight')
    cbar.set_label('Normalised weight', fontsize=11)

    ax.tick_params(labelsize=11)
    fig.tight_layout()

    out = os.path.join(png_dir, output_filename)
    fig.savefig(out, dpi=300)
    print(f"  Saved → {out}\n")
    plt.show()
    plt.close(fig)


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    script_dir = os.path.dirname(os.path.abspath(__file__))

    # Input/output directories
    txt_candidates = [
        os.path.join(script_dir, '..', 'analysis_output_2N', 'txt_files'),
        script_dir,
    ]
    png_candidates = [
        os.path.join(script_dir, '..', 'analysis_output_2N', 'png_files'),
        script_dir,
    ]

    def find_file(filename):
        for d in txt_candidates:
            p = os.path.join(d, filename)
            if os.path.exists(p):
                return p
        return None

    def resolve_png_dir():
        for d in png_candidates:
            if os.path.exists(d):
                return d
        os.makedirs(png_candidates[0], exist_ok=True)
        return png_candidates[0]

    png_dir = resolve_png_dir()

    # -----------------------------------------------------------------------
    # Global heatmap (all events)
    # -----------------------------------------------------------------------
    global_file = 'hist_theta12_theta23_3body.txt'
    path = find_file(global_file)
    if path is None:
        raise FileNotFoundError(
            f"Could not find '{global_file}' in {txt_candidates}\n"
            "Run SRC_analysis_2N first to generate it."
        )

    print("=" * 60)
    print("ALL EVENTS — 3-body theta heatmap")
    print("=" * 60)
    th12_c, th23_c, hmap = load_theta_hist(path)
    plot_heatmap(th12_c, th23_c, hmap,
                 'theta_heatmap_3body_2N.png',
                 title_suffix=' (all events)',
                 png_dir=png_dir)

    # -----------------------------------------------------------------------
    # Per-xB-region heatmaps
    # -----------------------------------------------------------------------
    print("=" * 60)
    print("PER-REGION heatmaps")
    print("=" * 60)
    region_idx = 0
    while True:
        fname = f'hist_theta12_theta23_3body_region{region_idx}.txt'
        rpath = find_file(fname)
        if rpath is None:
            if region_idx == 0:
                print("No per-region theta heatmaps found — skipping.")
            else:
                print(f"Done: processed {region_idx} region(s).")
            break

        print(f"\nRegion {region_idx}:")
        print("-" * 40)
        # Extract description from header
        desc = f"Region {region_idx}"
        with open(rpath) as f:
            first = f.readline()
        # Try to find "(xB < 1 ...)" or similar in first header line
        m = re.search(r'\(([^)]+)\)', first)
        if m:
            desc = m.group(1)

        th12_r, th23_r, hmap_r = load_theta_hist(rpath)
        plot_heatmap(th12_r, th23_r, hmap_r,
                     f'theta_heatmap_3body_2N_region{region_idx}.png',
                     title_suffix=f' (region {region_idx})',
                     png_dir=png_dir,
                     region_desc=desc)
        region_idx += 1


if __name__ == '__main__':
    main()
