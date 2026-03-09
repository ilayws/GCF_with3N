import re
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.patches import Circle
from matplotlib.colors import LogNorm
import matplotlib
import os


def parse_int(pattern: str, text: str, default: int) -> int:
    m = re.search(pattern, text)
    return int(m.group(1)) if m else default


def load_theta_hist_from_scan(path: str):
    """Load sparse theta12/theta23 histogram from hist_theta12_theta23.txt.
    File contains degrees already. Returns centers and a dense heatmap grid.
    Grid shape is [theta23_index, theta12_index].
    """
    # Read header to get theta_bins
    header = ""
    with open(path, 'r') as f:
        for line in f:
            if line.startswith('#'):
                header += line
            else:
                break
    theta_bins = parse_int(r"theta_bins\s+(\d+)", header, 0)
    if theta_bins <= 0:
        raise ValueError("Could not parse theta_bins from header of " + path)

    # Bin width and centers
    d = 180.0 / theta_bins
    th12_centers = np.linspace(d / 2.0, 180.0 - d / 2.0, theta_bins)
    th23_centers = np.linspace(d / 2.0, 180.0 - d / 2.0, theta_bins)

    # Prepare full grid (y: theta23, x: theta12)
    heatmap = np.zeros((theta_bins, theta_bins), dtype=float)

    # Load numeric rows, ignoring comments
    data = np.loadtxt(path, comments='#')
    if data.ndim == 1 and data.size == 0:
        return th12_centers, th23_centers, heatmap

    data = np.atleast_2d(data)
    th12 = data[:, 0]  # already degrees
    th23 = data[:, 1]  # already degrees
    w = data[:, 2]

    # Map bin centers back to indices
    ii = np.rint((th12 - d / 2.0) / d).astype(int)
    jj = np.rint((th23 - d / 2.0) / d).astype(int)
    ii = np.clip(ii, 0, theta_bins - 1)
    jj = np.clip(jj, 0, theta_bins - 1)
    for x, y, ww in zip(ii, jj, w):
        heatmap[y, x] += ww

    return th12_centers, th23_centers, heatmap


def circle_sum(center, radius, theta12_centers, theta23_centers, heatmap_norm):
    """Calculate sum within a circle centered at (center[0], center[1]) with given radius."""
    # Create coordinate grids
    th12_grid, th23_grid = np.meshgrid(theta12_centers, theta23_centers)
    
    # Calculate distances from center
    distances = np.sqrt((th12_grid - center[0]) ** 2 + (th23_grid - center[1]) ** 2)
    
    # Create mask for points within radius
    mask = distances <= radius
    
    # Sum the weights within the circle
    total = np.sum(heatmap_norm[mask])
    
    return total, mask


def plot_heatmap(th12_c, th23_c, heatmap, output_filename, title_suffix="", script_dir=".", crop_to_nonzero=False):
    """Helper function to plot a single heatmap."""
    # Normalize
    heatmap = np.nan_to_num(heatmap, nan=0.0)
    s = np.sum(heatmap)
    heatmap_norm = heatmap / s
    
    # Debug information
    print(f"Total sum of original heatmap{title_suffix}: {s}")
    print(f"Total sum of normalized heatmap{title_suffix}: {np.sum(heatmap_norm):.6f}")
    print(f"Max value in normalized heatmap{title_suffix}: {np.max(heatmap_norm):.6f}")
    print(f"Number of non-zero bins{title_suffix}: {np.sum(heatmap_norm > 0)}")

    if crop_to_nonzero:
        # Calculate automatic extent based on non-zero values
        nonzero_indices = np.where(heatmap_norm > 0)
        if len(nonzero_indices[0]) > 0:
            # Get min/max indices with non-zero values
            th23_indices = nonzero_indices[0]  # row indices (theta23)
            th12_indices = nonzero_indices[1]  # col indices (theta12)
            
            # Find the bounding box of non-zero values with some padding
            th12_idx_min = max(0, th12_indices.min() - 2)
            th12_idx_max = min(len(th12_c) - 1, th12_indices.max() + 2)
            th23_idx_min = max(0, th23_indices.min() - 2)
            th23_idx_max = min(len(th23_c) - 1, th23_indices.max() + 2)
            
            # Crop the heatmap to the region of interest
            heatmap_cropped = heatmap_norm[th23_idx_min:th23_idx_max+1, th12_idx_min:th12_idx_max+1]
            
            # Calculate extent for the cropped region
            bin_width = th12_c[1] - th12_c[0]
            th12_min = th12_c[th12_idx_min] - bin_width/2
            th12_max = th12_c[th12_idx_max] + bin_width/2
            th23_min = th23_c[th23_idx_min] - bin_width/2
            th23_max = th23_c[th23_idx_max] + bin_width/2
        else:
            # Fallback to full range if no non-zero values
            heatmap_cropped = heatmap_norm
            th12_min, th12_max = 0, 180
            th23_min, th23_max = 0, 180
        
        heatmap_to_plot = heatmap_cropped
    else:
        # Use full 0-180 degree range
        heatmap_to_plot = heatmap_norm
        th12_min, th12_max = 0, 180
        th23_min, th23_max = 0, 180
    
    # Plot
    plt.figure(figsize=(8, 6))
    im = plt.imshow(
        heatmap_to_plot,
        origin='lower',
        extent=[th12_min, th12_max, th23_min, th23_max],
        aspect='auto',
        cmap='viridis',
        norm=LogNorm()
    )
    plt.xlim(th12_min, th12_max)
    plt.ylim(th23_min, th23_max)
    plt.xlabel(r'$\theta_{12}$ (deg)', fontsize=14)
    plt.ylabel(r'$\theta_{23}$ (deg)', fontsize=14)
    plt.title(f'Theta Heatmap{title_suffix} (from event generator)', fontsize=16)
    cbar = plt.colorbar(im, label='Normalized weight')
    cbar.set_label('Normalized weight', fontsize=12)
    cbar.ax.tick_params(labelsize=10)

    # Increase tick label font sizes
    plt.xticks(fontsize=12)
    plt.yticks(fontsize=12)

    # Circle sums
    circle_radius = 15  # degrees
    centers = [(180, 0), (120, 120), (0, 180),  (180, 180)]
    colors = ['red', 'blue', 'green', 'orange']
    labels = ['(180, 0)', '(120, 120)', '(0, 180)', '(180, 180)']
    for (cx, cy), color, label in zip(centers, colors, labels):
        total, mask = circle_sum((cx, cy), circle_radius, th12_c, th23_c, heatmap_norm)
        print(f"Sum within circle at {label} (radius {circle_radius} deg){title_suffix}: {total * 100:.2f}%")
        print(f"Number of bins in circle{title_suffix}: {np.sum(mask)}")

    plt.tight_layout()
    # Save PNG to output directory
    png_dir_candidates = [
        os.path.join(script_dir, '..', 'analysis_output', 'png_files'),
        script_dir
    ]
    png_dir = None
    for d in png_dir_candidates:
        if os.path.exists(d):
            png_dir = d
            break
    if png_dir is None:
        # Try to create the preferred output directory
        try:
            png_dir = png_dir_candidates[0]
            os.makedirs(png_dir, exist_ok=True)
        except Exception:
            png_dir = script_dir
    output_png = os.path.join(png_dir, output_filename)
    plt.savefig(output_png, dpi=300)
    print(f"Heatmap saved as {output_png}\n")
    plt.show()


def main():
    # Robustly find input file relative to script location
    script_dir = os.path.dirname(os.path.abspath(__file__))
    txt_dir_candidates = [
        os.path.join(script_dir, '..', 'analysis_output', 'txt_files'),
        script_dir
    ]
    
    # Load all events heatmap
    input_filename = 'hist_theta12_theta23.txt'
    path = None
    for d in txt_dir_candidates:
        candidate = os.path.join(d, input_filename)
        if os.path.exists(candidate):
            path = candidate
            break
    if path is None:
        raise FileNotFoundError(f"Could not find {input_filename} in {txt_dir_candidates}")
    th12_c, th23_c, heatmap = load_theta_hist_from_scan(path)
    
    # Plot all events
    print("=" * 60)
    print("PLOTTING ALL EVENTS")
    print("=" * 60)
    plot_heatmap(th12_c, th23_c, heatmap, 'theta_heatmap_scan.png', 
                 title_suffix=' (All Events)', script_dir=script_dir)

    # Try to load and plot deuteron-only heatmap
    deut_filename = 'hist_theta12_theta23_deuteron.txt'
    deut_path = None
    for d in txt_dir_candidates:
        candidate = os.path.join(d, deut_filename)
        if os.path.exists(candidate):
            deut_path = candidate
            break
    if deut_path is not None:
        print("=" * 60)
        print("PLOTTING DEUTERON RECOIL EVENTS ONLY")
        print("=" * 60)
        th12_d, th23_d, heatmap_deut = load_theta_hist_from_scan(deut_path)
        plot_heatmap(th12_d, th23_d, heatmap_deut, 'theta_heatmap_scan_deuteron.png', 
                     title_suffix=' (Deuteron Recoil Only)', script_dir=script_dir)
    else:
        print(f"\nWarning: Could not find {deut_filename}, skipping deuteron plot")

    # Try to load and plot per-region heatmaps
    print("\n" + "=" * 60)
    print("PLOTTING PER-REGION HEATMAPS")
    print("=" * 60)
    region_idx = 0
    while True:
        region_filename = f'hist_theta12_theta23_region{region_idx}.txt'
        region_path = None
        for d in txt_dir_candidates:
            candidate = os.path.join(d, region_filename)
            if os.path.exists(candidate):
                region_path = candidate
                break
        
        if region_path is None:
            # No more region files found
            if region_idx == 0:
                print(f"\nWarning: No per-region theta12-theta23 histograms found")
            else:
                print(f"\nProcessed {region_idx} region heatmaps")
            break
        
        print(f"\nRegion {region_idx}:")
        print("-" * 40)
        th12_r, th23_r, heatmap_region = load_theta_hist_from_scan(region_path)
        
        # Read header to get region description
        with open(region_path, 'r') as f:
            first_line = f.readline()
            # Try theta-based format first (e.g., "theta12=120.0, theta23=120.0")
            theta12_match = re.search(r'theta12=([\d.]+)', first_line)
            theta23_match = re.search(r'theta23=([\d.]+)', first_line)
            
            if theta12_match and theta23_match:
                # Theta-based region
                region_desc = f"θ₁₂={theta12_match.group(1)}°, θ₂₃={theta23_match.group(1)}°"
            else:
                # Try xB-based format (e.g., "(xB < 1)" or "(1 < xB < 1.5)")
                desc_match = re.search(r'\(([^)]+)\)', first_line)
                if desc_match and 'xB' in desc_match.group(1):
                    region_desc = desc_match.group(1)
                else:
                    region_desc = f"Region {region_idx}"
        
        plot_heatmap(th12_r, th23_r, heatmap_region, 
                     f'theta_heatmap_region{region_idx}.png',
                     title_suffix=f' ({region_desc})', 
                     script_dir=script_dir,
                     crop_to_nonzero=False)
        
        region_idx += 1


if __name__ == '__main__':
    main()
