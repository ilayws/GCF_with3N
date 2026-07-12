#!/usr/bin/env python3
"""Grid-scan SRC-cut values to maximize the 3N/2N contrast in region L.

Base cuts (fixed): exactly-2-measured tag (|p| > kF), theta_e in (8, 45),
Q2 > 1.  The scan varies:

    theta_pq max, |p_lead|/|q| window, pmiss window, xB window.

Figure of merit (normalization-independent):

    FOM = f_L(3N) / f_L(2N),  f_L = weighted fraction of the post-cut sample
                              landing in region L

Also reported: L/R per sample, the double ratio (L/R)_3N / (L/R)_2N, the 3N
efficiency eps3 = post-cut 3N weight / base 3N weight, and raw (unweighted)
event counts in L so statistically hollow optima are visible.  Candidates
with too few raw events in L are dropped.
"""
import argparse
import itertools
import os
import sys

import numpy as np

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from plot_src_cut_variables import load_3N_vars, load_2N_vars
from plot_fig5_theta_heatmap_pair import in_region_L_array, in_region_R_array

THETA_PQ_MAX = [5.0, 8.0, 12.0, 20.0, 180.0]
LQ_LO = [0.0, 0.5, 0.6, 0.75]
LQ_HI = [0.95, 1.1, np.inf]
PMISS_LO = [0.25, 0.35, 0.45, 0.55]
PMISS_HI = [0.8, 1.0, 1.5]
XB_LO = [0.0, 0.6]
XB_HI = [1.0, 1.2, 2.0]


def main():
    p = argparse.ArgumentParser()
    p.add_argument('--input-3N', default='events/3N_FSI_hN_20M_12C_kF220_6GeV.root')
    p.add_argument('--input-2N',
                   default='../genQE_FSI/events/misc/events_2N_hN_6GeV_kF220_20M.root')
    p.add_argument('--output', default='analysis/Plots/src_cut_scan_regionL.txt')
    p.add_argument('--ebeam', type=float, default=6.0)
    p.add_argument('--kF', type=float, default=0.22)
    p.add_argument('--min-events-L', type=int, default=2000,
                   help='drop candidates with fewer raw 3N events in L')
    p.add_argument('--min-events-2N', type=int, default=5000,
                   help='drop candidates with fewer raw 2N events post-cut')
    p.add_argument('--top', type=int, default=25)
    args = p.parse_args()

    script_dir = os.path.dirname(os.path.abspath(__file__))
    root_dir = os.path.abspath(os.path.join(script_dir, '..'))
    in3 = args.input_3N if os.path.isabs(args.input_3N) else os.path.join(root_dir, args.input_3N)
    in2 = args.input_2N if os.path.isabs(args.input_2N) else os.path.join(root_dir, args.input_2N)
    out_path = args.output if os.path.isabs(args.output) else os.path.join(root_dir, args.output)

    d3 = load_3N_vars(in3, args.ebeam, args.kF, 8.0, 45.0, 1.0)
    d2 = load_2N_vars(in2, args.kF, 8.0, 45.0, 1.0)

    samples = []
    for d in (d3, d2):
        samples.append(dict(
            w=d['w'],
            inL=in_region_L_array(d['t12'], d['t23']),
            inR=in_region_R_array(d['t12'], d['t23']),
            theta_pq=d['theta_pq'], lq=d['lead_over_q'],
            pmiss=d['pmiss'], xB=d['xB'],
            w_base=d['w'].sum(),
        ))

    rows = []
    grid = list(itertools.product(THETA_PQ_MAX, LQ_LO, LQ_HI,
                                  PMISS_LO, PMISS_HI, XB_LO, XB_HI))
    print(f'{len(grid)} cut combinations...')
    med_w2 = float(np.median(samples[1]['w']))
    for tpq, lqlo, lqhi, pmlo, pmhi, xblo, xbhi in grid:
        vals = []
        for s in samples:
            m = ((s['theta_pq'] < tpq)
                 & (s['lq'] > lqlo) & (s['lq'] < lqhi)
                 & (s['pmiss'] > pmlo) & (s['pmiss'] < pmhi)
                 & (s['xB'] > xblo) & (s['xB'] < xbhi))
            wtot = s['w'][m].sum()
            nL = int((m & s['inL']).sum())
            fL = s['w'][m & s['inL']].sum() / wtot if wtot > 0 else 0.0
            fR = s['w'][m & s['inR']].sum() / wtot if wtot > 0 else 0.0
            vals.append((fL, fR, nL, wtot, int(m.sum())))
        (fL3, fR3, nL3, w3, n3), (fL2, fR2, nL2, w2, n2) = vals
        if nL3 < args.min_events_L or n2 < args.min_events_2N or w2 <= 0:
            continue
        # Statistical floor on f_L(2N): an empty 2N region L only proves
        # f_L < (a few median-weight events)/w_tot, so cap the FOM there.
        fL2_floor = 10.0 * med_w2 / w2
        fom = fL3 / max(fL2, fL2_floor)
        lr3 = fL3 / fR3 if fR3 > 0 else np.inf
        lr2 = fL2 / fR2 if fR2 > 0 else np.inf
        dbl = lr3 / lr2 if np.isfinite(lr2) and lr2 > 0 else np.inf
        eps3 = w3 / samples[0]['w_base']
        rows.append((fom, dbl, fL3, fL2, lr3, lr2, eps3, nL3, nL2,
                     tpq, lqlo, lqhi, pmlo, pmhi, xblo, xbhi))

    rows.sort(key=lambda r: -r[0])
    hdr = (f'{"FOM":>7s} {"dblLR":>8s} {"fL3":>7s} {"fL2":>8s} {"LR3":>6s} '
           f'{"LR2":>7s} {"eps3":>6s} {"nL3":>7s} {"nL2":>7s}   cuts')
    lines = ['# FOM = f_L(3N)/f_L(2N); dblLR = (L/R)_3N/(L/R)_2N; '
             'eps3 = 3N post-cut weight / base weight',
             f'# min raw events in L per sample: {args.min_events_L}',
             hdr]
    for r in rows[:args.top]:
        (fom, dbl, fL3, fL2, lr3, lr2, eps3, nL3, nL2,
         tpq, lqlo, lqhi, pmlo, pmhi, xblo, xbhi) = r
        cut_s = (f'thpq<{tpq:g} {lqlo:g}<p/q<{lqhi:g} '
                 f'{pmlo:g}<pmiss<{pmhi:g} {xblo:g}<xB<{xbhi:g}')
        lines.append(f'{fom:7.1f} {dbl:8.1f} {fL3:7.4f} {fL2:8.5f} '
                     f'{lr3:6.2f} {lr2:7.4f} {eps3:6.3f} {nL3:7d} {nL2:7d}   {cut_s}')
    # current cuts for reference
    lines.append('# --- current cuts for reference ---')
    for r in rows:
        (fom, dbl, fL3, fL2, lr3, lr2, eps3, nL3, nL2,
         tpq, lqlo, lqhi, pmlo, pmhi, xblo, xbhi) = r
        if (tpq, lqlo, lqhi, pmlo, pmhi, xblo, xbhi) == (8.0, 0.75, np.inf, 0.25, 0.9, 0.0, 1.2):
            lines.append(f'{fom:7.1f} {dbl:8.1f} {fL3:7.4f} {fL2:8.5f} '
                         f'{lr3:6.2f} {lr2:7.4f} {eps3:6.3f} {nL3:7d} {nL2:7d}   '
                         f'thpq<8 0.75<p/q<inf 0.25<pmiss<0.9 0<xB<1.2  (CURRENT)')
    text = '\n'.join(lines)
    print(text)
    with open(out_path, 'w') as fh:
        fh.write(text + '\n')
    print(f'\nSaved {out_path}')


if __name__ == '__main__':
    main()
