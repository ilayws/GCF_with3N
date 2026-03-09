import argparse
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.colors import LogNorm

from matplotlib.patches import Circle


def circle_sum(center, radius, theta12_grid, theta23_grid, heatmap):
    mask = ((theta12_grid - center[0]) ** 2 + (theta23_grid - center[1]) ** 2) <= radius ** 2
    return np.sum(heatmap[mask]), mask


def main():
    parser = argparse.ArgumentParser(description='Plot theta heatmap')
    parser.add_argument('--input', '-i', default='theta_heatmap_binned.txt', help='Input binned data file')
    parser.add_argument('--output', '-o', default='theta_heatmap_binned.png', help='Output image file')
    parser.add_argument('--crop-nonzero', action='store_true', help='Crop imshow to only show non-zero values')
    args = parser.parse_args()

    # Load binned data: theta12_bin_center theta23_bin_center weight
    # Input from theta_scan.cpp writes centers in degrees; skip any comment/header lines
    data = np.loadtxt(args.input, comments='#')
    if data.ndim != 2 or data.shape[1] < 3:
        raise SystemExit('Input file must have at least 3 columns: theta12_center theta23_center weight')

    # Centers are already in degrees (don't convert)
    theta12_centers = data[:, 0]
    theta23_centers = data[:, 1]
    weights = data[:, 2]

    # Derive unique sorted bin centers along each axis
    theta12_vals = np.unique(theta12_centers)
    theta23_vals = np.unique(theta23_centers)
    n12 = len(theta12_vals)
    n23 = len(theta23_vals)
    if n12 * n23 != weights.size:
        raise SystemExit(f'Unexpected grid shape: found {weights.size} points, but unique centers give {n12}x{n23} grid')

    # Reshape weights into (n_theta23, n_theta12) because the generator wrote theta23 outer, theta12 inner
    heatmap = weights.reshape((n23, n12))
    # Create grid arrays matching heatmap shape
    theta12_grid, theta23_grid = np.meshgrid(theta12_vals, theta23_vals)

    # Normalize heatmap so sum is 1
    heatmap_sum = np.sum(heatmap)
    if heatmap_sum == 0:
        raise SystemExit('Heatmap is empty (all zeros)')
    heatmap_norm = heatmap / heatmap_sum

    # Optionally crop to bounding box of non-zero values
    if args.crop_nonzero:
        nz = heatmap_norm > 0
        if not np.any(nz):
            raise SystemExit('No non-zero values to crop to')
        rows = np.any(nz, axis=1)
        cols = np.any(nz, axis=0)
        row_idx = np.where(rows)[0]
        col_idx = np.where(cols)[0]
        r0, r1 = row_idx[0], row_idx[-1]
        c0, c1 = col_idx[0], col_idx[-1]

        heatmap_c = heatmap_norm[r0:r1 + 1, c0:c1 + 1]
        theta12_c = theta12_grid[r0:r1 + 1, c0:c1 + 1]
        theta23_c = theta23_grid[r0:r1 + 1, c0:c1 + 1]
        extent = [theta12_c.min(), theta12_c.max(), theta23_c.min(), theta23_c.max()]
    else:
        heatmap_c = heatmap_norm
        theta12_c = theta12_grid
        theta23_c = theta23_grid
        extent = [theta12_grid.min(), theta12_grid.max(), theta23_grid.min(), theta23_grid.max()]

    # Choose norm only when strictly positive values exist (LogNorm can't handle zeros)
    positive_mask = heatmap_c > 0
    norm = None
    if np.any(positive_mask):
        if heatmap_c[positive_mask].min() > 0:
            norm = LogNorm()

    # Plot heatmap
    plt.figure(figsize=(8, 6))
    # imshow expects array shape (Ny, Nx) where Ny corresponds to y axis (theta23)
    plt.imshow(
        heatmap_c,
        origin='lower',
        extent=extent,
        aspect='auto',
        cmap='viridis',
        norm=norm,
    )
    plt.xlabel(r'$\theta_{12}$ (deg)')
    plt.ylabel(r'$\theta_{23}$ (deg)')
    plt.title('Theta Heatmap (Normalized)')
    plt.colorbar(label='Normalized weight')

    # Draw circles and calculate sums
    circle_radius = 20  # degrees
    centers = [(180, 0), (120, 120)]
    colors = ['red', 'blue']
    labels = ['(180, 0)', '(120, 120)']

    for i, center in enumerate(centers):
        total, mask = circle_sum(center, circle_radius, theta12_c, theta23_c, heatmap_c)
        percent = total * 100
        print(f"Sum within circle at {labels[i]} (radius {circle_radius} deg): {percent:.2f}%")
        circ = Circle(center, circle_radius, edgecolor=colors[i], facecolor='none', lw=2, label=f'Circle {labels[i]}')
        # plt.gca().add_patch(circ)

    # plt.legend()
    plt.tight_layout()
    plt.savefig(args.output, dpi=300)
    plt.show()


if __name__ == '__main__':
    main()
