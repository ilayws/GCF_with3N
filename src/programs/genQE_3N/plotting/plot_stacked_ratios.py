import numpy as np
import matplotlib.pyplot as plt
import os

def read_hist(filename):
    centers, weights = [], []
    with open(filename) as f:
        for line in f:
            if line.startswith("#"): continue
            parts = line.split()
            centers.append(float(parts[0]))
            weights.append(float(parts[1]))
    return np.array(centers), np.array(weights)

# Define all variables to plot
variables = [
    'Q2',
    'xB',
    'Outgoing e angle with beam dir (z)',
    'Outgoing e angle with q dir',
    'Outgoing e mom.',
    'Incoming lead angle with beam dir (z)',
    'Incoming lead angle with q dir',
    'pmiss',
    'Recoil angle with beam dir (z)',
    'Recoil angle with q dir',
    'Recoil mom.',
    'Outgoing lead angle with beam dir (z)',
    'Outgoing lead angle with q dir',
    'Outgoing lead mom.',
    'p1 over q'
]

# Define labels and units for each variable
variable_info = {
    'Q2': {'xlabel': 'Q²', 'unit': '(GeV²)', 'xlim': None},
    'xB': {'xlabel': 'xB', 'unit': '', 'xlim': (0, 2.7)},
    'Outgoing e angle with beam dir (z)': {'xlabel': 'Outgoing e angle with beam dir (z)', 'unit': '(deg)', 'xlim': (0, 50)},
    'Outgoing e angle with q dir': {'xlabel': 'Outgoing e angle with q dir', 'unit': '(deg)', 'xlim': (0, 50)},
    'Outgoing e mom.': {'xlabel': 'Outgoing Electron Momentum', 'unit': '(GeV/c)', 'xlim': (0, 8)},
    'Incoming lead angle with beam dir (z)': {'xlabel': 'Incoming lead angle with beam dir (z)', 'unit': '(deg)', 'xlim': None},
    'Incoming lead angle with q dir': {'xlabel': 'Incoming lead angle with q dir', 'unit': '(deg)', 'xlim': None},
    'pmiss': {'xlabel': 'pmiss', 'unit': '(GeV/c)', 'xlim': (0.35, 1.5)},
    'Recoil angle with beam dir (z)': {'xlabel': 'Recoil angle with beam dir (z)', 'unit': '(deg)', 'xlim': None},
    'Recoil angle with q dir': {'xlabel': 'Recoil angle with q dir', 'unit': '(deg)', 'xlim': None},
    'Recoil mom.': {'xlabel': 'Recoil mom.', 'unit': '(GeV/c)', 'xlim': (0.35, 1.5)},
    'Outgoing lead angle with beam dir (z)': {'xlabel': 'Outgoing lead angle with beam dir (z)', 'unit': '(deg)', 'xlim': None},
    'Outgoing lead angle with q dir': {'xlabel': 'Outgoing lead angle with q dir', 'unit': '(deg)', 'xlim': None},
    'Outgoing lead mom.': {'xlabel': 'Outgoing lead mom.', 'unit': '(GeV/c)', 'xlim': (0, 8)},
    'p1 over q': {'xlabel': 'p1 over q', 'unit': '', 'xlim': (0, 2)}
}

# Parameters
n_points = 7
# Define the theta coordinates for each point based on xB_Q2_scan.cpp
theta_coords = [
    (180.0, 0.0),    # Point 0: rocket with lead as head
    (150.0, 60.0),   # Point 1
    (180.0, 180.0),  # Point 2: rocket with lead as tail
    (0.0, 180.0),    # Point 3
    (150.0, 150.0),  # Point 4
    (60.0, 150.0),   # Point 5
    (120.0, 120.0)   # Point 6: star
]

# Color map for better distinction
import matplotlib.cm as cm
colors = cm.viridis(np.linspace(0, 1, n_points))

# Directory containing histogram files
hist_dir = os.path.join("analysis_output", "txt_files")
# Output directory for stacked ratio plots
output_dir = os.path.join("analysis_output", "png_files", "stacked_conditional")
output_dir_points = os.path.join("analysis_output", "png_files", "stacked_total_weight")
os.makedirs(output_dir_points, exist_ok=True)
os.makedirs(output_dir, exist_ok=True)

# Create plots for all variables automatically

for var in variables:
    print(f"Processing variable: {var}")

    # Read total histogram
    total_hist_path = os.path.join(hist_dir, f"hist_{var}_1D.txt")
    try:
        centers, total = read_hist(total_hist_path)
    except FileNotFoundError:
        print(f"Warning: File {total_hist_path} not found, skipping...")
        continue

    # Read point histograms
    points = []
    for i in range(n_points):
        point_hist_path = os.path.join(hist_dir, f"hist_{var}_region{i}_1D.txt")
        try:
            _, point_i = read_hist(point_hist_path)
            points.append(point_i)
        except FileNotFoundError:
            print(f"Warning: File {point_hist_path} not found, skipping this point...")
            continue

    if len(points) != n_points:
        print(f"Warning: Not all region files found for {var}, skipping...")
        continue

    points = np.array(points)
    total_safe = np.where(total == 0, 1e-10, total)
    ratios = points / total_safe

    # Create a figure with two subplots
    fig, axs = plt.subplots(2, 1, figsize=(12, 14))

    # Absolute values subplot
    if variable_info[var]['xlim'] is not None:
        axs[0].set_xlim(variable_info[var]['xlim'])
    axs[0].stackplot(centers, points,
                    labels=[f"({theta_coords[i][0]:.0f}°, {theta_coords[i][1]:.0f}°)" for i in range(n_points)],
                    colors=colors, alpha=0.8)
    xlabel = variable_info[var]['xlabel']
    unit = variable_info[var]['unit']
    if unit:
        xlabel += f" {unit}"
    axs[0].set_xlabel(xlabel, fontsize=12)
    axs[0].set_ylabel("Weight", fontsize=12)
    axs[0].set_title(f"{variable_info[var]['xlabel']} Absolute Distribution for Different Geometries", fontsize=14)
    axs[0].legend(loc="upper right", fontsize="small", ncol=2)
    axs[0].grid(True, alpha=0.3)

    # Ratios subplot
    if variable_info[var]['xlim'] is not None:
        axs[1].set_xlim(variable_info[var]['xlim'])
    axs[1].stackplot(centers, ratios,
                    labels=[f"({theta_coords[i][0]:.0f}°, {theta_coords[i][1]:.0f}°)" for i in range(n_points)],
                    colors=colors, alpha=0.8)
    xlabel = variable_info[var]['xlabel']
    unit = variable_info[var]['unit']
    if unit:
        xlabel += f" {unit}"
    axs[1].set_xlabel(xlabel, fontsize=12)
    axs[1].set_ylabel("Weight", fontsize=12)
    axs[1].set_title(f"{variable_info[var]['xlabel']} Distribution for Different Geometries (Conditional)", fontsize=14)
    axs[1].legend(loc="upper right", fontsize="small", ncol=2)
    axs[1].grid(True, alpha=0.3)

    plt.tight_layout()
    safe_filename = var.replace(' ', '_').replace('.', '')
    output_file_combined = os.path.join(output_dir, f"plot_stacked_{safe_filename}_combined.png")
    plt.savefig(output_file_combined, dpi=300, bbox_inches='tight')
    print(f"Saved: {output_file_combined}")
    plt.close(fig)

print("\nAll stacked ratio plots have been generated!")
