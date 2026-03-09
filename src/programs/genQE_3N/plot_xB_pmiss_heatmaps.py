import numpy as np
import matplotlib.pyplot as plt
from matplotlib.colors import LogNorm
import os
import re

def parse_int(pattern: str, text: str, default: int) -> int:
    m = re.search(pattern, text)
    return int(m.group(1)) if m else default

def parse_float(pattern: str, text: str, default: float) -> float:
    m = re.search(pattern, text)
    return float(m.group(1)) if m else default

def load_2d_histogram(filename):
    """Load 2D histogram data from file"""
    if not os.path.exists(filename):
        print(f"File not found: {filename}")
        return None, None, None, None, None, None
    
    with open(filename, 'r') as f:
        lines = f.readlines()
    
    # Parse header information
    header = ''.join(lines[:3])
    xB_bins = parse_int(r'xB_bins\s+(\d+)', header, 500)
    xB_min = parse_float(r'xB_min\s+([\d.]+)', header, 0.0)
    xB_max = parse_float(r'xB_max\s+([\d.]+)', header, 4.0)
    pmiss_bins = parse_int(r'pmiss_bins\s+(\d+)', header, 100)
    pmiss_min = parse_float(r'pmiss_min\s+([\d.]+)', header, 0.0)
    pmiss_max = parse_float(r'pmiss_max\s+([\d.]+)', header, 1.5)
    
    # Load data
    data = []
    for line in lines:
        if line.startswith('#'):
            continue
        parts = line.strip().split()
        if len(parts) == 3:
            xB_val, pmiss_val, weight = float(parts[0]), float(parts[1]), float(parts[2])
            data.append([xB_val, pmiss_val, weight])
    
    data = np.array(data)
    
    # Reshape into 2D histogram
    hist = np.zeros((pmiss_bins, xB_bins))
    for row in data:
        xB_val, pmiss_val, weight = row
        ix = int((xB_val - xB_min) / (xB_max - xB_min) * xB_bins)
        ip = int((pmiss_val - pmiss_min) / (pmiss_max - pmiss_min) * pmiss_bins)
        if 0 <= ix < xB_bins and 0 <= ip < pmiss_bins:
            hist[ip, ix] = weight
    
    return hist, xB_bins, xB_min, xB_max, pmiss_bins, pmiss_min, pmiss_max

def compute_weight_sums(hist, xB_min, xB_max, xB_bins, pmiss_min, pmiss_max, pmiss_bins, xB_cut=2.0, pmiss_cut=2.0):
    """Compute weight sums inside and outside a rectangular (xB, pmiss) cut."""
    total_weight = np.nansum(hist)

    # Bin edges follow the same convention used when filling the histogram.
    xB_edges = np.linspace(xB_min, xB_max, xB_bins + 1)
    pmiss_edges = np.linspace(pmiss_min, pmiss_max, pmiss_bins + 1)

    # Use lower bin edges to define membership in the cut region.
    xB_low = xB_edges[:-1]
    pmiss_low = pmiss_edges[:-1]
    region_mask = (xB_low < xB_cut) & (pmiss_low[:, np.newaxis] < pmiss_cut)

    region_sum = np.nansum(hist * region_mask)
    outside_sum = total_weight - region_sum
    return region_sum, outside_sum, total_weight

def plot_xB_pmiss_heatmap(hist, xB_min, xB_max, pmiss_min, pmiss_max, title, output_file, vmin=None, vmax=None):
    """Plot a single xB-pmiss heatmap"""
    fig, ax = plt.subplots(figsize=(10, 8))
    
    # Create extent for imshow
    extent = [xB_min, xB_max, pmiss_min, pmiss_max]
    
    # Plot with log scale if there are positive values
    if np.max(hist) > 0:
        # Replace zeros with a small value for log scale
        hist_plot = np.copy(hist)
        hist_plot[hist_plot <= 0] = np.nan
        
        if vmin is None or vmax is None:
            non_zero = hist_plot[~np.isnan(hist_plot)]
            if len(non_zero) > 0:
                vmin = vmin or np.min(non_zero)
                vmax = vmax or np.max(non_zero)
        
        im = ax.imshow(hist_plot, origin='lower', aspect='auto', extent=extent,
                      cmap='viridis', norm=LogNorm(vmin=vmin, vmax=vmax))
    else:
        im = ax.imshow(hist, origin='lower', aspect='auto', extent=extent, cmap='viridis')
    
    ax.set_xlabel('$x_B$', fontsize=14)
    ax.set_ylabel('$p_{miss}$ [GeV/c]', fontsize=14)
    ax.set_title(title, fontsize=16)
    
    # Add colorbar
    cbar = plt.colorbar(im, ax=ax)
    cbar.set_label('Weight', fontsize=12)
    
    # Add grid
    ax.grid(True, alpha=0.3, linestyle='--', linewidth=0.5)
    
    plt.tight_layout()
    plt.savefig(output_file, dpi=300, bbox_inches='tight')
    print(f"Saved: {output_file}")
    plt.show()
    plt.close()

def plot_combined_heatmaps(hist_2N, hist_3N, xB_min, xB_max, pmiss_min, pmiss_max, output_file):
    """Plot 2N, 3N, and 3N/2N ratio heatmaps"""
    fig, (ax1, ax2, ax3) = plt.subplots(1, 3, figsize=(22, 6))
    
    extent = [xB_min, xB_max, pmiss_min, pmiss_max]
    
    # Find common vmin and vmax for 2N and 3N consistent color scale
    hist_2N_plot = np.copy(hist_2N)
    hist_3N_plot = np.copy(hist_3N)
    hist_2N_plot[hist_2N_plot <= 0] = np.nan
    hist_3N_plot[hist_3N_plot <= 0] = np.nan
    
    non_zero_2N = hist_2N_plot[~np.isnan(hist_2N_plot)]
    non_zero_3N = hist_3N_plot[~np.isnan(hist_3N_plot)]
    
    if len(non_zero_2N) > 0 and len(non_zero_3N) > 0:
        vmin = min(np.min(non_zero_2N), np.min(non_zero_3N))
        vmax = max(np.max(non_zero_2N), np.max(non_zero_3N))
    elif len(non_zero_2N) > 0:
        vmin = np.min(non_zero_2N)
        vmax = np.max(non_zero_2N)
    elif len(non_zero_3N) > 0:
        vmin = np.min(non_zero_3N)
        vmax = np.max(non_zero_3N)
    else:
        vmin, vmax = 1e-10, 1
    
    # Plot 2N
    im1 = ax1.imshow(hist_2N_plot, origin='lower', aspect='auto', extent=extent,
                     cmap='viridis', norm=LogNorm(vmin=vmin, vmax=vmax))
    ax1.set_xlabel('$x_B$', fontsize=14)
    ax1.set_ylabel('$p_{miss}$ [GeV/c]', fontsize=14)
    ax1.set_title('2N Events: $x_B$ vs $p_{miss}$', fontsize=16)
    ax1.grid(True, alpha=0.3, linestyle='--', linewidth=0.5)
    cbar1 = plt.colorbar(im1, ax=ax1)
    cbar1.set_label('Weight', fontsize=12)
    
    # Plot 3N
    im2 = ax2.imshow(hist_3N_plot, origin='lower', aspect='auto', extent=extent,
                     cmap='viridis', norm=LogNorm(vmin=vmin, vmax=vmax))
    ax2.set_xlabel('$x_B$', fontsize=14)
    ax2.set_ylabel('$p_{miss}$ [GeV/c]', fontsize=14)
    ax2.set_title('3N Events: $x_B$ vs $p_{miss}$', fontsize=16)
    ax2.grid(True, alpha=0.3, linestyle='--', linewidth=0.5)
    cbar2 = plt.colorbar(im2, ax=ax2)
    cbar2.set_label('Weight', fontsize=12)
    
    # Calculate and plot 3N/2N ratio
    ratio = np.zeros_like(hist_2N)
    mask = hist_2N > 0
    ratio[mask] = hist_3N[mask] / hist_2N[mask]
    ratio[~mask] = np.nan
    
    ratio_plot = np.copy(ratio)
    ratio_plot[ratio_plot <= 0] = np.nan
    non_zero_ratio = ratio_plot[~np.isnan(ratio_plot)]
    
    if len(non_zero_ratio) > 0:
        ratio_vmin = np.min(non_zero_ratio)
        ratio_vmax = np.max(non_zero_ratio)
    else:
        ratio_vmin, ratio_vmax = 1e-10, 1
    
    im3 = ax3.imshow(ratio_plot, origin='lower', aspect='auto', extent=extent,
                    cmap='viridis', norm=LogNorm(vmin=ratio_vmin, vmax=ratio_vmax))
    ax3.set_xlabel('$x_B$', fontsize=14)
    ax3.set_ylabel('$p_{miss}$ [GeV/c]', fontsize=14)
    ax3.set_title('3N/2N Ratio: $x_B$ vs $p_{miss}$', fontsize=16)
    ax3.grid(True, alpha=0.3, linestyle='--', linewidth=0.5)
    cbar3 = plt.colorbar(im3, ax=ax3)
    cbar3.set_label('3N/2N Ratio', fontsize=12)
    
    plt.tight_layout()
    plt.savefig(output_file, dpi=300, bbox_inches='tight')
    print(f"Saved: {output_file}")
    plt.show()
    plt.close()

def plot_ratio_heatmap(hist_2N, hist_3N, xB_min, xB_max, pmiss_min, pmiss_max, output_file):
    """Plot 3N/2N ratio heatmap"""
    fig, ax = plt.subplots(figsize=(10, 8))
    
    extent = [xB_min, xB_max, pmiss_min, pmiss_max]
    
    # Calculate ratio, avoiding division by zero
    ratio = np.zeros_like(hist_2N)
    mask = hist_2N > 0
    ratio[mask] = hist_3N[mask] / hist_2N[mask]
    ratio[~mask] = np.nan
    
    # Plot
    im = ax.imshow(ratio, origin='lower', aspect='auto', extent=extent,
                  cmap='RdYlBu_r', vmin=0, vmax=np.nanmax(ratio) if np.nanmax(ratio) > 0 else 1)
    
    ax.set_xlabel('$x_B$', fontsize=14)
    ax.set_ylabel('$p_{miss}$ [GeV/c]', fontsize=14)
    ax.set_title('3N/2N Ratio: $x_B$ vs $p_{miss}$', fontsize=16)
    ax.grid(True, alpha=0.3, linestyle='--', linewidth=0.5)
    
    cbar = plt.colorbar(im, ax=ax)
    cbar.set_label('3N/2N Ratio', fontsize=12)
    
    plt.tight_layout()
    plt.savefig(output_file, dpi=300, bbox_inches='tight')
    print(f"Saved: {output_file}")
    plt.show()
    plt.close()

def main():
    # Set up directories
    script_dir = os.path.dirname(os.path.abspath(__file__))
    txt_dir = os.path.join(script_dir, 'analysis_output', 'txt_files')
    png_dir = os.path.join(script_dir, 'analysis_output', 'png_files')
    
    # Create output directory if it doesn't exist
    os.makedirs(png_dir, exist_ok=True)
    
    # File paths
    file_2N = os.path.join(txt_dir, 'hist_2N_xB_pmiss.txt')
    file_3N = os.path.join(txt_dir, 'hist_3N_xB_pmiss.txt')
    
    print("Loading histograms...")
    hist_2N, xB_bins_2N, xB_min_2N, xB_max_2N, pmiss_bins_2N, pmiss_min_2N, pmiss_max_2N = load_2d_histogram(file_2N)
    hist_3N, xB_bins_3N, xB_min_3N, xB_max_3N, pmiss_bins_3N, pmiss_min_3N, pmiss_max_3N = load_2d_histogram(file_3N)
    
    if hist_2N is None or hist_3N is None:
        print("Error: Could not load histogram files.")
        print(f"Looking for files in: {txt_dir}")
        return
    
    # Verify bins match
    if (xB_bins_2N != xB_bins_3N or pmiss_bins_2N != pmiss_bins_3N or
        xB_min_2N != xB_min_3N or xB_max_2N != xB_max_3N or
        pmiss_min_2N != pmiss_min_3N or pmiss_max_2N != pmiss_max_3N):
        print("Warning: 2N and 3N histograms have different binning!")
    
    # Use 2N binning for all plots
    xB_min, xB_max = xB_min_2N, xB_max_2N
    pmiss_min, pmiss_max = pmiss_min_2N, pmiss_max_2N
    
    print(f"2N histogram: max weight = {np.max(hist_2N):.2e}")
    print(f"3N histogram: max weight = {np.max(hist_3N):.2e}")
    
    # Plot individual heatmaps
    print("\nPlotting individual heatmaps...")
    plot_xB_pmiss_heatmap(hist_2N, xB_min, xB_max, pmiss_min, pmiss_max,
                         '2N Events: $x_B$ vs $p_{miss}$',
                         os.path.join(png_dir, 'heatmap_2N_xB_pmiss.png'))
    
    plot_xB_pmiss_heatmap(hist_3N, xB_min, xB_max, pmiss_min, pmiss_max,
                         '3N Events: $x_B$ vs $p_{miss}$',
                         os.path.join(png_dir, 'heatmap_3N_xB_pmiss.png'))
    
    # Plot combined heatmaps
    print("\nPlotting combined heatmaps...")
    plot_combined_heatmaps(hist_2N, hist_3N, xB_min, xB_max, pmiss_min, pmiss_max,
                          os.path.join(png_dir, 'heatmap_2N_3N_combined.png'))
    
    # Plot ratio heatmap
    print("\nPlotting ratio heatmap...")
    plot_ratio_heatmap(hist_2N, hist_3N, xB_min, xB_max, pmiss_min, pmiss_max,
                      os.path.join(png_dir, 'heatmap_3N_2N_ratio_xB_pmiss.png'))
    
    print("\nDone! All plots saved to:", png_dir)

if __name__ == "__main__":
    main()
