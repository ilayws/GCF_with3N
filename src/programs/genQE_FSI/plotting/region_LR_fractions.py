#!/usr/bin/env python3
"""Compute weight fractions in Region L and Region R of theta12-theta23 heatmaps.

Triangular regions defined by parameters A=135 deg, K=3.
Region R: triangle near (180,180) bounded by lines with slopes B and 1/B
          through (180,180), plus a diagonal with slope -1.
Region L: (x,y) in L iff (360-x-y, y) in R  (theta12 <-> theta13 swap).

Reads three heatmap files:
  1. 2N+FSI  N=2  (hypothetical 3rd nucleon)
  2. 2N+FSI  N=3  (real FSI secondary nucleon above kF)
  3. 3N generator  (pure 3N SRC events)
"""

import math
import os
import sys

# Region parameters
A_REGION = 135.0  # degrees
K_REGION = 3.0
A_RAD = math.radians(A_REGION)
B_REGION = math.degrees(math.atan(math.sin(A_RAD) / (K_REGION + math.cos(A_RAD)))) / (180.0 - A_REGION)


def is_in_region_R(x, y):
    """Check if (theta12, theta23) is inside triangular Region R."""
    line1 = B_REGION * (x - 180.0) + 180.0
    line2 = (1.0 / B_REGION) * (x - 180.0) + 180.0
    line3 = -(x - A_REGION) + 180.0 - (180.0 - A_REGION) * B_REGION
    return (y <= line1) and (y >= line2) and (y >= line3)


def is_in_region_L(x, y):
    """Check if (theta12, theta23) is inside Region L (mirror of R via theta13)."""
    return is_in_region_R(360.0 - x - y, y)


def load_and_integrate(filepath):
    """Parse a theta heatmap text file and return (total_weight, weight_L, weight_R)."""
    total = 0.0
    wL = 0.0
    wR = 0.0
    with open(filepath) as f:
        for line in f:
            if line.startswith('#'):
                continue
            parts = line.split()
            if len(parts) != 3:
                continue
            th12, th23, w = float(parts[0]), float(parts[1]), float(parts[2])
            total += w
            if is_in_region_L(th12, th23):
                wL += w
            if is_in_region_R(th12, th23):
                wR += w
    return total, wL, wR


def load_summary(filepath):
    """Load region_weights_summary.txt → dict of {key: weight}.

    Parses both comment-style metadata (# key value) and data lines (key value).
    """
    data = {}
    if not os.path.isfile(filepath):
        return None
    with open(filepath) as f:
        for line in f:
            line = line.strip()
            if line.startswith('#'):
                # Parse "# key value" lines (total_weight, total_weight_N2, etc.)
                parts = line.lstrip('#').strip().split()
                if len(parts) >= 2:
                    try:
                        data[parts[0]] = float(parts[1])
                    except ValueError:
                        pass
            elif line:
                parts = line.split()
                if len(parts) == 2:
                    data[parts[0]] = float(parts[1])
    return data if data else None


def main():
    script_dir = os.path.dirname(os.path.abspath(__file__))
    base_fsi = os.path.join(script_dir, '..', 'analysis_output_2N', 'txt_files')
    base_3n = os.path.join(script_dir, '..', '..', 'genQE_3N', 'analysis_output', 'txt_files')

    heatmaps = [
        ('2N+FSI  N=2', os.path.join(base_fsi, 'hist_theta12_theta23_3body_N2.txt')),
        ('2N+FSI  N=3', os.path.join(base_fsi, 'hist_theta12_theta23_3body_N3.txt')),
        ('3N generator', os.path.join(base_3n, 'hist_theta12_theta23.txt')),
    ]

    # Check files exist
    for label, path in heatmaps:
        if not os.path.isfile(path):
            print(f'ERROR: {label} file not found: {path}', file=sys.stderr)
            sys.exit(1)

    print(f'Region R: triangular near (180,180), A={A_REGION:.0f} deg, K={K_REGION:.0f}, B={B_REGION:.4f}')
    print(f'Region L: (x,y) in L iff (360-x-y, y) in R')

    # --- Table 1: heatmap-based fractions (geometry only, no kinematic cuts) ---
    print(f'\n--- Region fractions from heatmaps (geometry only) ---')
    print(f'{"Heatmap":<20s} | {"Total Weight":>14s} | {"Region L frac":>14s} | {"Region R frac":>14s}')
    print(f'{"":-<20s}-+-{"":-<14s}-+-{"":-<14s}-+-{"":-<14s}')

    for label, path in heatmaps:
        total, wL, wR = load_and_integrate(path)
        if total > 0:
            fL = wL / total * 100.0
            fR = wR / total * 100.0
            print(f'{label:<20s} | {total:14.4f} | {fL:13.4f}% | {fR:13.4f}%')
        else:
            print(f'{label:<20s} | {"(empty)":>14s} | {"N/A":>14s} | {"N/A":>14s}')

    # --- Table 2: region fractions with kinematic cuts (from summary files) ---
    fsi_summary = load_summary(os.path.join(base_fsi, 'region_weights_summary.txt'))
    src3n_summary = load_summary(os.path.join(base_3n, 'region_weights_summary.txt'))

    print(f'\n--- Region fractions with kinematic cuts ---')
    print(f'  (e angle < 45 deg, lead angle with q < 10 deg, pLead/q > 0.7, all nucleons > kF; N=3 & 3N: |p2|>0.5 GeV/c)')
    print(f'{"Source":<20s} | {"Region L frac":>14s} | {"Region R frac":>14s}')
    print(f'{"":-<20s}-+-{"":-<14s}-+-{"":-<14s}')

    # FSI entries: N=2, N=3 (each with both regions)
    # Denominator is per-multiplicity total weight (total_weight_N2, total_weight_N3)
    if fsi_summary:
        for nclass, key_prefix, total_key in [('N=2', 'N2', 'total_weight_N2'),
                                               ('N=3', 'N3', 'total_weight_N3')]:
            wL = fsi_summary.get(f'{key_prefix}_regionL', 0)
            wR = fsi_summary.get(f'{key_prefix}_regionR', 0)
            total_n = fsi_summary.get(total_key, 0)
            label = f'2N+FSI  {nclass}'
            if total_n > 0:
                fL = wL / total_n * 100.0
                fR = wR / total_n * 100.0
                print(f'{label:<20s} | {fL:13.4f}% | {fR:13.4f}%')
            else:
                print(f'{label:<20s} | {"N/A":>14s} | {"N/A":>14s}')
    else:
        print(f'{"2N+FSI":<20s} | {"(no summary)":>14s} | {"(no summary)":>14s}')

    # 3N entry (both regions)
    if src3n_summary:
        total_3n = src3n_summary.get('total_weight', 0)
        wL = src3n_summary.get('3N_regionL', 0)
        wR = src3n_summary.get('3N_regionR', 0)
        if total_3n > 0:
            fL = wL / total_3n * 100.0
            fR = wR / total_3n * 100.0
            print(f'{"3N generator":<20s} | {fL:13.4f}% | {fR:13.4f}%')
        else:
            print(f'{"3N generator":<20s} | {"N/A":>14s} | {"N/A":>14s}')
    else:
        print(f'{"3N generator":<20s} | {"(no summary)":>14s} | {"(no summary)":>14s}')


if __name__ == '__main__':
    main()
