# Opening-angle (theta12–theta23) study — 12C, 6 GeV, kF = 220 MeV/c — 2026-07-05

All samples 20M generated events each. FSI = GENIE hN (kHN2018).
sigmaCM: 3N = sqrt(3/5)·kF = 170.4 MeV/c, 2N = sqrt(2/5)·kF = 139.1 MeV/c, MF = 0.
Selection: exactly 2 final "measured" nucleons with k > kF (eq2); third nucleon
reconstructed via p3 = -(p_miss + p_recoil) (2N-convention angles everywhere).
Base cuts: 8 < theta_e < 45 deg, Q2 > 1 GeV^2, xB < 1.2 (+ eq2 tag).
SRC cuts (on top of base): theta(p_lead,q) < 8 deg, |p_lead| > 0.75|q|,
0.25 < pmiss < 0.9 GeV/c, xB < 1.2.
Note: MF fractions use the pp channel (both measured nucleons protons — the
script's detected-channel convention); 3N/2N do not distinguish species.
2N base/SRC denominators count weight>0 entries only (Pauli-blocked FSI events
are stored with w=0).

## Event samples
- genQE_3N/events/3N_PWIA_20M_12C_kF220_6GeV.root        (3N, no FSI)
- genQE_3N/events/3N_FSI_hN_20M_12C_kF220_6GeV.root      (3N + hN FSI)
- genQE_FSI/events/misc/events_2N_hN_6GeV_kF220_20M.root (2N SRC + hN FSI, wf_mode 2)
- genQE_FSI/events/hN/events_MF_hN_global_6GeV_kF220_20M.root (MF + hN FSI, global FG)
- genQE_FSI/events/hN/events_MF_hN_local_6GeV_kF220_20M.root  (MF + hN FSI, local FG)

## 1) 3N no-FSI, TRUE 3-nucleon opening angles, 4-region integrals
plot: theta_heatmap_3N_noFSI_regions.pdf
TRUE angles (theta12 = angle(p1, p2) with p1 = pLead - q; theta23 =
angle(p2, p3)); no detector tag, no reconstruction (all three initial
nucleons have k > kF by generation). Base electron cuts only
(8 < theta_e < 45, Q2 > 1, xB < 1.2). % of plotted weight:
- L  (top-left triangle):   2.89 %
- R  (top-right triangle):  6.31 %
- BR (bottom-right):        4.11 %
- Star circle (120,120), r=17.3 deg (equal-area): 14.13 %
- L/R = 0.458
- base-cut pass fraction (weighted): 16.51 %  (14,248,105 / 20M events)
- SRC-cut  pass fraction (weighted): 1.98 %   (3,867,550 / 20M events)

## 1b) 3N no-FSI, NO CM smearing (-C 0), TRUE angles, same conventions
plot: theta_heatmap_3N_noFSI_noCM_regions.pdf
sample: events/3N_PWIA_noCM_20M_12C_kF220_6GeV.root (20M)
- L 10.83 %  R 10.99 %  BR 9.79 %  Star 34.13 %   (L/R = 0.986 — symmetric,
  as expected with zero pair CM momentum)
- base-cut pass fraction (weighted): 18.49 %; SRC-cut: 2.18 %

All heatmaps use 72 x 72 bins (2.5 deg).

## 2) 3N+FSI vs 2N+FSI, no SRC cuts (L/R triangles drawn)
plot: theta_heatmap_3NFSI_vs_2NFSI_kF220_eq2_nocuts.{pdf,png}
- 3N+FSI: f_L = 0.0724, f_R = 0.0477, L/R = 1.52
- 2N+FSI: f_L = 0.0023, f_R = 0.1353, L/R = 0.017
- 3N+FSI pass fractions (weighted): base 7.67 %, SRC 0.470 %
- 2N+FSI pass fractions (weighted): base 40.4 %, SRC 6.67 %

## 3) 3N+FSI vs 2N+FSI, WITH SRC cuts (L/R triangles drawn)
plot: theta_heatmap_3NFSI_vs_2NFSI_kF220_eq2_srccuts.{pdf,png}
- 3N+FSI: f_L = 0.0853, f_R = 0.0976, L/R = 0.87
- 2N+FSI: f_L = 0.0026, f_R = 0.0986, L/R = 0.026
- (pass fractions as above; they are per-sample, not per-plot)

## 4) MF+FSI (fake-3N, pp channel) — genQE_FSI/analysis/plots/mf_fake3n/
Global FG (mf_fake3n_hN_global_6GeV_kF220_base):
- base cuts: L=0.0045 R=0.0797 BR=0.1003 center=0.0350, L/R = 0.056
- with SRC cuts: L=0.0018 R=0.1981 BR=0.0110 center=0.1734, L/R = 0.009
- pass fractions (weighted, incl. eq2 pp tag): base 4.77 %, SRC 0.038 %
Local FG (mf_fake3n_hN_local_6GeV_kF220_base):
- base cuts: L=0.0038 R=0.0790 BR=0.0986 center=0.0351, L/R = 0.048
- with SRC cuts: L=0.0040 R=0.2051 BR=0.0067 center=0.1514, L/R = 0.019
- pass fractions (weighted, incl. eq2 pp tag): base 4.83 %, SRC 0.040 %

## Notes
- Regions L and R have EXACTLY equal area (939.06 deg^2 each; L is R mapped
  through (x,y)->(360-x-y,y), which has |det|=1).
- Plotting-cut sensitivity check on these same samples: switching the measured-
  nucleon tag from kF=0.22 to kF=0.25 moves 3N+FSI L/R only 0.87->0.77 (SRC
  cuts) and 1.52->1.37 (no cuts); 2N is unchanged. The SRC/base cut values are
  identical to the old scripts. The large change vs older results comes from
  the SAMPLES: the working tree contains uncommitted (Jul 2) FSI rewrites in
  QEGeneratorFSI_3N.cc / QEGeneratorFSI.cc / GenieFSIHelpers.cc (shared
  depleting-remnant transport in a single GENIE record instead of per-nucleon
  undepleted cascades, which biased FSI high; absorbed legs no longer kill the
  event), plus the newly requested sigmaCM (2N 0.15->0.139, 3N ->0.170) and
  p_rel/kF conventions (0.25->0.22).
- Weight variance warning: with SRC cuts the 3N L and R integrals are
  dominated by few large-weight events (top-1 event = 14% of region-L weight,
  top-100 = 65%), so L/R for 3N+SRC carries a large statistical uncertainty.

## 5) New-cuts study (2026-07-11) — theta_heatmap_newcuts_kF220/
Recommended cuts: theta_pq < 12 deg, 0.60 < |p_lead|/|q| < 0.95,
0.6 < xB < 1.2; two pmiss variants (0.25-0.90 vs > 0.55). Four folders:
{shared, independent} FSI x {2 pmiss windows}. Independent FSI = each nucleon
transported in its own GENIE record through an undepleted A-2/A-3 remnant
(new -I flag on genQE_3N_FSI; argv[10] fsi_indep on SRC_analysis_2N).
IMPORTANT sample change: the 2N post-cascade Pauli veto (weight=0 when a
surviving nucleon < 250 MeV/c, hardcoded via SetFSITuning(250)) was REMOVED —
GENIE's internal Pauli blocking is now the only mechanism, matching 3N. Both
2N samples were regenerated; older 2N numbers above (sections 2-4) predate
this and are not directly comparable.
Results table + notes: theta_heatmap_newcuts_kF220/README.txt.
FINAL (2026-07-11 evening): all six FSI samples regenerated with the final
configuration — no Pauli/kF veto anywhere; fate-code absorption (validated)
WITH ejecta promotion (absorbed leg's saved momentum = its leading nucleon
ejecta, experiment-faithful; absorbed flag = bookkeeping only). Earlier
intermediate rounds (veto-only-removed; absorption-with-zeroing) were
deleted from disk. Sections 1-4 above are OUTDATED for FSI samples.
Final key numbers: nocuts (L/R)_3N=1.71 / (L/R)_2N=0.227; new cuts +
pmiss>0.55: shared 3.28/0.24, indep 7.51/0.32.
A/B reference (5M, OLD committed code, kF=0.25, sigCM=0.15, kF-veto,
per-nucleon FSI): nocuts 9.71/0.018, old SRC cuts 5.25/0.032 — reproduces
the historical ~10 / ~1:100. Cut re-scan on the final samples advisable.

## Reproduce
Generation:
  genQE_3N:  JOBS=70 ./run_3N_parallel.sh 20000000 <out.root> 6.0 1 -- [-n | -f hN] -K 0.220 -t 8:45
  genQE_FSI: JOBS=70 ./run_2N_parallel.sh 20000000 <out.root> 1 hN 0.13914 2 6.0 global 0.220   (2N)
             JOBS=70 ./run_2N_parallel.sh 20000000 <out.root> 1 hN 0 4 6.0 [global|local] 0.220 (MF)
Plots (from genQE_3N):
  .venv/bin/python plotting/plot_theta_heatmap_3N_regions.py --input events/3N_PWIA_20M_12C_kF220_6GeV.root --kF 0.22 --mode eq2
  .venv/bin/python plotting/plot_theta_heatmap_3N_vs_2N.py --input-3N events/3N_FSI_hN_20M_12C_kF220_6GeV.root \
      --input-2N ../genQE_FSI/events/misc/events_2N_hN_6GeV_kF220_20M.root --kF 0.22 --mode eq2 --triangles --bins 72 \
      [--theta-pq-max 8 --lead-over-q-min 0.75 --pmiss-lo 0.25 --pmiss-hi 0.90]
Plots (from genQE_FSI):
  ../genQE_3N/.venv/bin/python plotting/plot_mf_fake3n_heatmap.py --input events/hN/events_MF_hN_<fg>_6GeV_kF220_20M.root \
      --ebeam 6.0 --kf 0.22 --theta-e-min 8 --xB-max 1.2 [--src-cuts]
