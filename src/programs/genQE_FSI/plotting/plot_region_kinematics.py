"""
Plot Region L/R kinematic distributions: overlay 2N+FSI vs 3N SRC for each variable.

Regions are triangular, defined by parameters A=135 deg, K=3.
Region R: triangle near (180,180) bounded by lines with slopes B and 1/B through
          (180,180), plus a diagonal with slope -1.
Region L: (x,y) in L iff (360-x-y, y) in R  (theta12 <-> theta13 swap).

For Region L: compares N=2 FSI events (genQE_FSI) with pure 3N SRC (genQE_3N)
For Region R: compares N=3 FSI events (genQE_FSI) with pure 3N SRC (genQE_3N)
"""
import os
import numpy as np
import matplotlib.pyplot as plt


# Variable definitions (must match C++ region_var_info)
VARIABLES = [
    ("init_lead_angle_q",  r"Initial lead angle with $\vec{q}$", "deg"),
    ("init_rec1_angle_q",  r"Initial recoil 1 angle with $\vec{q}$", "deg"),
    ("init_rec2_angle_q",  r"Initial recoil 2 angle with $\vec{q}$", "deg"),
    ("final_lead_angle_q", r"Final lead angle with $\vec{q}$", "deg"),
    ("final_rec1_angle_q", r"Final recoil 1 angle with $\vec{q}$", "deg"),
    ("final_rec2_angle_q", r"Final recoil 2 angle with $\vec{q}$", "deg"),
    ("pmiss_LR",           r"$p_{\mathrm{miss}}$", "GeV/c"),
    ("pmiss_angle_q",      r"$p_{\mathrm{miss}}$ angle with $\vec{q}$", "deg"),
    ("p2_final_mom",       r"$|p_2|$ (final)", "GeV/c"),
    ("p3_final_mom",       r"$|p_3|$ (final)", "GeV/c"),
    ("e_angle_q_LR",       r"Electron angle with $\vec{q}$", "deg"),
    ("e_mom_LR",           r"Electron momentum", "GeV/c"),
    ("xB_LR",              r"$x_B$", ""),
    ("Q2_LR",              r"$Q^2$", r"GeV$^2$"),
    ("lead_mom_over_q",    r"$|p_{\mathrm{lead}}|/|\vec{q}|$", ""),
    ("p1_final_mom",       r"$|p_1|$ (final)", "GeV/c"),
]


def load_hist(path):
    """Load a 1D histogram text file. Returns (centers, weights) arrays."""
    centers, weights = [], []
    with open(path, 'r') as f:
        for line in f:
            if line.startswith('#'):
                continue
            parts = line.strip().split()
            if len(parts) >= 2:
                centers.append(float(parts[0]))
                weights.append(float(parts[1]))
    return np.array(centers), np.array(weights)


def plot_overlay(var_name, var_label, unit, region, fsi_path, src3n_path, out_dir):
    """Plot overlay of FSI vs 3N SRC for one variable in one region."""
    have_fsi = os.path.exists(fsi_path)
    have_3n = os.path.exists(src3n_path)
    if not have_fsi:
        # Skip: overlay only makes sense when FSI data exists for comparison
        return

    fig, ax = plt.subplots(figsize=(7, 5))

    if have_fsi:
        c_fsi, w_fsi = load_hist(fsi_path)
        s = np.sum(w_fsi)
        if s > 0:
            w_fsi_norm = w_fsi / s
            label_fsi = "2N+FSI N=2" if region == "L" else "2N+FSI N=3"
            ax.step(c_fsi, w_fsi_norm, where='mid', label=label_fsi, linewidth=1.5, color='tab:blue')

    if have_3n:
        c_3n, w_3n = load_hist(src3n_path)
        s = np.sum(w_3n)
        if s > 0:
            w_3n_norm = w_3n / s
            ax.step(c_3n, w_3n_norm, where='mid', label="3N SRC", linewidth=1.5, color='tab:red')

    region_desc = r"Region L (triangular, $A=135°$, $K=3$)" if region == "L" \
                  else r"Region R (triangular, $A=135°$, $K=3$)"
    ax.set_title(f"{var_label} — {region_desc}", fontsize=13)
    xlabel = f"{var_label}"
    if unit:
        xlabel += f" [{unit}]"
    ax.set_xlabel(xlabel, fontsize=12)
    ax.set_ylabel("Normalized weight", fontsize=12)
    ax.legend(fontsize=11)
    ax.tick_params(labelsize=10)
    fig.tight_layout()

    fname = f"region_{var_name}_{region}.png"
    out_path = os.path.join(out_dir, fname)
    fig.savefig(out_path, dpi=200)
    plt.close(fig)
    print(f"  {fname}")


def main():
    script_dir = os.path.dirname(os.path.abspath(__file__))

    # Paths to histogram text files
    fsi_txt = os.path.join(script_dir, '..', 'analysis_output_2N', 'txt_files')
    src3n_txt = os.path.join(script_dir, '..', '..', 'genQE_3N', 'analysis_output', 'txt_files')

    # Output directory
    out_dir_candidates = [
        os.path.join(script_dir, '..', 'analysis_output_2N', 'png_files'),
        script_dir
    ]
    out_dir = None
    for d in out_dir_candidates:
        if os.path.isdir(d):
            out_dir = d
            break
    if out_dir is None:
        out_dir = out_dir_candidates[0]
        os.makedirs(out_dir, exist_ok=True)

    print(f"FSI histograms: {os.path.abspath(fsi_txt)}")
    print(f"3N  histograms: {os.path.abspath(src3n_txt)}")
    print(f"Output PNGs:    {os.path.abspath(out_dir)}\n")

    # Region L: FSI N=2 vs 3N SRC
    print("=== Region L ===")
    for var_name, var_label, unit in VARIABLES:
        fsi_path = os.path.join(fsi_txt, f"hist_{var_name}_regionL_N2.txt")
        src_path = os.path.join(src3n_txt, f"hist_{var_name}_regionL.txt")
        plot_overlay(var_name, var_label, unit, "L", fsi_path, src_path, out_dir)

    # Region R: FSI N=3 vs 3N SRC
    print("\n=== Region R ===")
    for var_name, var_label, unit in VARIABLES:
        fsi_path = os.path.join(fsi_txt, f"hist_{var_name}_regionR_N3.txt")
        src_path = os.path.join(src3n_txt, f"hist_{var_name}_regionR.txt")
        plot_overlay(var_name, var_label, unit, "R", fsi_path, src_path, out_dir)

    print("\nDone.")


if __name__ == '__main__':
    main()
