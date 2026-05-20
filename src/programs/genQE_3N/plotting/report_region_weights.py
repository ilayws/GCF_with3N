#!/usr/bin/env python3
"""Print total weight per region for the 3N+FSI and 2N+FSI samples.

Regions used (matching the region geometry defined elsewhere in the code):
  L  : top-left  triangle  -- plot_fig5_theta_heatmap_pair.triangle_vertices_L
                              / in_region_L_array (A=135 deg, K=4)
  R  : top-right triangle  -- plot_fig5_theta_heatmap_pair.triangle_vertices_R
                              / in_region_R_array
  Star : circle around (120, 120) deg, radius 20 deg
                              -- plot_theta_heatmap_kgrid.circle_sum
"""
import argparse
import os
import sys

import numpy as np

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from plot_theta_heatmap_3N_vs_2N import load_3N, load_2N
from plot_fig5_theta_heatmap_pair import in_region_L_array, in_region_R_array


# Star circle (from plot_theta_heatmap_kgrid.py)
STAR_CENTER = (120.0, 120.0)
STAR_RADIUS = 20.0  # deg


def in_star(t12, t23, center=STAR_CENTER, radius=STAR_RADIUS):
    dx = np.asarray(t12) - center[0]
    dy = np.asarray(t23) - center[1]
    return (dx * dx + dy * dy) <= radius * radius


def report(name, t12, t23, w):
    total = float(w.sum())
    print(f'\n=== {name} ===')
    print(f'Selected events: {len(w)}    sum(weight) = {total:.6e}')
    print('-' * 64)
    print(f'{"Region":34s}{"sum(w)":>14s}    fraction')
    print('-' * 64)
    rows = [
        ('L     (top-left triangle, A=135, K=4)',  in_region_L_array(t12, t23)),
        ('R     (top-right triangle, A=135, K=4)', in_region_R_array(t12, t23)),
        ('Star  (circle at (120,120), r=20 deg)',  in_star(t12, t23)),
    ]
    for label, mask in rows:
        s = float(w[mask].sum())
        frac = s / total if total > 0 else 0.0
        print(f'{label:34s}{s:14.6e}    {frac:7.4%}')


def main():
    p = argparse.ArgumentParser()
    p.add_argument('--input-3N', default='events/3N_FSI_1p5M_12C.root')
    p.add_argument('--input-2N',
                   default='../genQE_FSI/events/misc/events_2N.root')
    p.add_argument('--ebeam', type=float, default=6.0)
    p.add_argument('--theta-e-min', type=float, default=8.0)
    p.add_argument('--theta-e-max', type=float, default=45.0)
    p.add_argument('--Q2-min',      type=float, default=1.0)
    p.add_argument('--xB-max',      type=float, default=1.2)
    p.add_argument('--kF',          type=float, default=0.25)
    p.add_argument('--mode', choices=('eq2', 'ge2'), default='ge2')
    p.add_argument('--theta-pq-max',    type=float, default=180.0)
    p.add_argument('--lead-over-q-min', type=float, default=0.0)
    p.add_argument('--pmiss-lo',        type=float, default=0.0)
    p.add_argument('--pmiss-hi',        type=float, default=1e9)
    args = p.parse_args()

    script_dir = os.path.dirname(os.path.abspath(__file__))
    root_dir   = os.path.abspath(os.path.join(script_dir, '..'))
    in3 = args.input_3N if os.path.isabs(args.input_3N) else os.path.join(root_dir, args.input_3N)
    in2 = args.input_2N if os.path.isabs(args.input_2N) else os.path.join(root_dir, args.input_2N)

    t12_3, t23_3, w_3 = load_3N(in3, args.ebeam,
                                args.theta_e_max, args.Q2_min, args.xB_max,
                                args.kF,
                                theta_pq_max=args.theta_pq_max,
                                lead_over_q_min=args.lead_over_q_min,
                                pmiss_lo=args.pmiss_lo,
                                pmiss_hi=args.pmiss_hi,
                                mode=args.mode,
                                theta_e_min=args.theta_e_min)
    t12_2, t23_2, w_2 = load_2N(in2,
                                args.theta_e_max, args.Q2_min, args.xB_max,
                                args.kF,
                                theta_pq_max=args.theta_pq_max,
                                lead_over_q_min=args.lead_over_q_min,
                                pmiss_lo=args.pmiss_lo,
                                pmiss_hi=args.pmiss_hi,
                                mode=args.mode,
                                theta_e_min=args.theta_e_min)

    report('3N+FSI on 12C', t12_3, t23_3, w_3)
    report('2N+FSI', t12_2, t23_2, w_2)


if __name__ == '__main__':
    main()
