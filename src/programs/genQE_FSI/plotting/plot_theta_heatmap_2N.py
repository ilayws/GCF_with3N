"""
theta_heatmap_plot_2N.py
------------------------
Plot the 2D 3-body theta heatmaps produced by SRC_analysis_2N (2N FSI generator).

Three heatmaps are produced:
  1. All events (combined)
  2. N=2 above kF: hypothetical 3rd nucleon from zero-COM constraint p3_hyp = -(pmiss + p_recoil)
  3. N=3 above kF: real 3rd nucleon from FSI cascade (highest-momentum secondary above kF)

Axes:
  x  theta12 = angle(pmiss, p_recoil)
  y  theta23 = angle(p_recoil, p3)

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
                 title_suffix="", png_dir=".", region_desc=None,
                 xlabel=None, ylabel=None, title_base=None):
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
        (( 60, 180), 'green',  '( 60°,180°) recoil↔p3   back-to-back'),
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

    if xlabel is None:
        xlabel = r'$\theta_{12}$ = $\angle(\vec{p}_\mathrm{miss},\,\vec{p}_\mathrm{recoil})$ (deg)'
    if ylabel is None:
        ylabel = r'$\theta_{23}$ = $\angle(\vec{p}_\mathrm{recoil},\,\vec{p}_3)$ (deg)'
    ax.set_xlabel(xlabel, fontsize=12)
    ax.set_ylabel(ylabel, fontsize=12)

    if title_base is None:
        title_base = '3-body $\\theta$ heatmap'
    title = f'{title_base}{title_suffix}'
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
    # N=2 heatmap (hypothetical 3rd nucleon, zero-COM)
    # -----------------------------------------------------------------------
    n2_file = 'hist_theta12_theta23_3body_N2.txt'
    n2_path = find_file(n2_file)
    if n2_path is not None:
        print("=" * 60)
        print("N=2 ABOVE kF — hypothetical 3rd nucleon (zero-COM)")
        print("=" * 60)
        th12_n2, th23_n2, hmap_n2 = load_theta_hist(n2_path)
        plot_heatmap(th12_n2, th23_n2, hmap_n2,
                     'theta_heatmap_3body_2N_N2hyp.png',
                     title_suffix='',
                     png_dir=png_dir,
                     xlabel=r'$\theta_{12}$ = $\angle(\vec{p}_\mathrm{miss},\,\vec{p}_\mathrm{recoil})$ (deg)',
                     ylabel=r'$\theta_{23}$ = $\angle(\vec{p}_\mathrm{recoil},\,\vec{p}_3^\mathrm{hyp})$ (deg)',
                     title_base='N=2 above $k_F$: hypothetical 3rd nucleon\n'
                                r'$\vec{p}_3^\mathrm{hyp} = -(\vec{p}_\mathrm{miss} + \vec{p}_\mathrm{recoil})$')
    else:
        print(f"[skip] {n2_file} not found")

    # -----------------------------------------------------------------------
    # N=3 heatmap (real FSI 3rd nucleon)
    # -----------------------------------------------------------------------
    n3_file = 'hist_theta12_theta23_3body_N3.txt'
    n3_path = find_file(n3_file)
    if n3_path is not None:
        print("=" * 60)
        print("N=3 ABOVE kF — real FSI 3rd nucleon")
        print("=" * 60)
        th12_n3, th23_n3, hmap_n3 = load_theta_hist(n3_path)
        plot_heatmap(th12_n3, th23_n3, hmap_n3,
                     'theta_heatmap_3body_2N_N3fsi.png',
                     title_suffix='',
                     png_dir=png_dir,
                     xlabel=r'$\theta_{12}$ = $\angle(\vec{p}_\mathrm{miss},\,\vec{p}_\mathrm{recoil})$ (deg)',
                     ylabel=r'$\theta_{23}$ = $\angle(\vec{p}_\mathrm{recoil},\,\vec{p}_3^\mathrm{FSI})$ (deg)',
                     title_base='N=3 above $k_F$: real FSI 3rd nucleon\n'
                                r'$\vec{p}_3^\mathrm{FSI}$ = cascade secondary')
    else:
        print(f"[skip] {n3_file} not found")

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
