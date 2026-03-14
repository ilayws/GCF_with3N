"""
plot_momenta_N3.py
------------------
Plot the 1D momentum distributions for the three nucleons in N=3 events
(exactly 3 nucleons above kF) produced by SRC_analysis_2N.

Two panels side-by-side:
  Left:  p1 (pmiss) post-FSI vs pre-FSI
  Right: p2 (recoil) post-FSI vs pre-FSI
Both panels also show p3 (FSI secondary) for reference.

Reads:
  analysis_output_2N/txt_files/hist_p1_pmiss_N3.txt
  analysis_output_2N/txt_files/hist_p2_recoil_N3.txt
  analysis_output_2N/txt_files/hist_p3_fsi_N3.txt
  analysis_output_2N/txt_files/hist_p1_pmiss_preFSI_N3.txt
  analysis_output_2N/txt_files/hist_p2_recoil_preFSI_N3.txt

Saves:
  analysis_output_2N/png_files/momenta_N3.png          (overlaid post-FSI only)
  analysis_output_2N/png_files/momenta_N3_comparison.png (side-by-side pre vs post)

Usage:
  python plot_momenta_N3.py
"""

import os
import numpy as np
import matplotlib.pyplot as plt


def load_hist(path):
    """Load a 2-column (p_center, weight) histogram file, skipping '#' lines."""
    data = np.loadtxt(path, comments='#')
    return data[:, 0], data[:, 1]


def norm(weights):
    """Normalise a weight array to unit area."""
    total = np.sum(weights)
    return weights / total if total > 0 else weights


def edges_from_centers(centers):
    bw = centers[1] - centers[0] if len(centers) > 1 else 1.0
    return np.append(centers - bw / 2, centers[-1] + bw / 2)


def main():
    script_dir = os.path.dirname(os.path.abspath(__file__))
    txt_dir = os.path.join(script_dir, '..', 'analysis_output_2N', 'txt_files')
    png_dir = os.path.join(script_dir, '..', 'analysis_output_2N', 'png_files')
    os.makedirs(png_dir, exist_ok=True)

    # --- Plot 1: overlaid post-FSI (unchanged from before) ---
    post_files = [
        ('hist_p1_pmiss_N3.txt',  r'$p_1$ (pmiss)',        'tab:blue'),
        ('hist_p2_recoil_N3.txt', r'$p_2$ (recoil)',       'tab:orange'),
        ('hist_p3_fsi_N3.txt',    r'$p_3$ (FSI secondary)', 'tab:green'),
    ]

    fig1, ax1 = plt.subplots(figsize=(8, 5))
    for fname, label, color in post_files:
        path = os.path.join(txt_dir, fname)
        if not os.path.exists(path):
            print(f"[skip] {fname} not found")
            continue
        centers, weights = load_hist(path)
        ax1.stairs(norm(weights), edges_from_centers(centers),
                   label=label, color=color, linewidth=1.5)

    ax1.set_xlabel('Momentum [GeV/c]', fontsize=12)
    ax1.set_ylabel('Normalised weight', fontsize=12)
    ax1.set_title('N=3 nucleon momentum distributions (post-FSI)', fontsize=13)
    ax1.legend(fontsize=11)
    ax1.tick_params(labelsize=11)
    fig1.tight_layout()
    out1 = os.path.join(png_dir, 'momenta_N3.png')
    fig1.savefig(out1, dpi=300)
    print(f"Saved -> {out1}")

    # --- Plot 2: side-by-side pre-FSI vs post-FSI ---
    pre_p1_path = os.path.join(txt_dir, 'hist_p1_pmiss_preFSI_N3.txt')
    pre_p2_path = os.path.join(txt_dir, 'hist_p2_recoil_preFSI_N3.txt')
    post_p1_path = os.path.join(txt_dir, 'hist_p1_pmiss_N3.txt')
    post_p2_path = os.path.join(txt_dir, 'hist_p2_recoil_N3.txt')
    post_p3_path = os.path.join(txt_dir, 'hist_p3_fsi_N3.txt')

    have_pre = os.path.exists(pre_p1_path) and os.path.exists(pre_p2_path)
    if not have_pre:
        print("[skip] Pre-FSI histogram files not found, skipping comparison plot")
        plt.show()
        plt.close(fig1)
        return

    fig2, (ax_l, ax_r) = plt.subplots(1, 2, figsize=(14, 5), sharey=True)

    # Left panel: p1 (pmiss)
    c_post, w_post = load_hist(post_p1_path)
    c_pre, w_pre = load_hist(pre_p1_path)
    edges = edges_from_centers(c_post)
    ax_l.stairs(norm(w_pre),  edges, label=r'$p_1$ pre-FSI',
                color='tab:blue', linewidth=1.5, linestyle='--')
    ax_l.stairs(norm(w_post), edges, label=r'$p_1$ post-FSI',
                color='tab:blue', linewidth=1.5)
    ax_l.set_xlabel('Momentum [GeV/c]', fontsize=12)
    ax_l.set_ylabel('Normalised weight', fontsize=12)
    ax_l.set_title(r'$p_1$ (pmiss): pre- vs post-FSI', fontsize=13)
    ax_l.legend(fontsize=10)
    ax_l.tick_params(labelsize=11)

    # Right panel: p2 (recoil)
    c_post2, w_post2 = load_hist(post_p2_path)
    c_pre2, w_pre2 = load_hist(pre_p2_path)
    edges2 = edges_from_centers(c_post2)
    ax_r.stairs(norm(w_pre2),  edges2, label=r'$p_2$ pre-FSI',
                color='tab:orange', linewidth=1.5, linestyle='--')
    ax_r.stairs(norm(w_post2), edges2, label=r'$p_2$ post-FSI',
                color='tab:orange', linewidth=1.5)
    ax_r.set_xlabel('Momentum [GeV/c]', fontsize=12)
    ax_r.set_title(r'$p_2$ (recoil): pre- vs post-FSI', fontsize=13)
    ax_r.legend(fontsize=10)
    ax_r.tick_params(labelsize=11)

    fig2.suptitle('N=3 events: initial vs FSI-modified momenta', fontsize=14, y=1.02)
    fig2.tight_layout()
    out2 = os.path.join(png_dir, 'momenta_N3_comparison.png')
    fig2.savefig(out2, dpi=300, bbox_inches='tight')
    print(f"Saved -> {out2}")

    plt.show()
    plt.close('all')


if __name__ == '__main__':
    main()
