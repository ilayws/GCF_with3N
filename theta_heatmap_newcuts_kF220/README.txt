theta12-theta23 heatmaps with the NEW recommended SRC cuts
============================================================
12C, 6 GeV, kF = 220 MeV/c, GENIE hN FSI, 20M generated events per sample.
Selection: exactly 2 measured nucleons with k > kF (eq2); p3 reconstructed
as -(pmiss + p_recoil). 72 x 72 bins (2.5 deg). Independent color scale per
panel. All numbers in the *_summary.txt next to each plot.

Cuts common to ALL four folders (chosen to maximize 3N/2N in region L while
keeping the detector cuts in place and not too restrictive):
  8 < theta_e < 45 deg, Q2 > 1 GeV^2
  theta(p_lead, q) < 12 deg          (was 8; detector cut, loosened slightly)
  0.60 < |p_lead|/|q| < 0.95         (was > 0.75; UPPER bound added -- this is
                                      the key change: it removes the 2N
                                      quasi-elastic-like peak at p/q ~ 1)
  0.6 < xB < 1.2                     (lower bound added)

The two pmiss variants:
  *_pmiss_0.25-0.90 : 0.25 < pmiss < 0.90 GeV/c   (current cut)
  *_pmiss_gt0.55    : pmiss > 0.55 GeV/c          (no upper bound)

FSI modes:
  sharedFSI_* : default mode -- both/all outgoing nucleons transported through
                one shared, depleting remnant in a single GENIE record.
  indepFSI_*  : independent mode (-I / fsi_indep=1) -- each nucleon transported
                through its own GENIE record with an undepleted A-2 / A-3
                remnant (the pre-Jul-2 behaviour).

Samples:
  shared: 3N_FSI_hN_20M_12C_kF220_6GeV.root, events_2N_hN_6GeV_kF220_20M.root
  indep : 3N_FSIindep_hN_20M_12C_kF220_6GeV.root,
          events_2N_hNindep_6GeV_kF220_20M.root

FINAL CONFIGURATION (2026-07-11, all six samples regenerated with it):
(a) NO post-cascade Pauli/kF veto anywhere — Pauli blocking handled only
    inside GENIE's cascade (blocked collisions rerolled).
(b) Absorption via GENIE fate codes (abs/cmp kills the ORIGINAL nucleon;
    validated against both GENIE fate headers), with EJECTA PROMOTION:
    the absorbed leg's saved momentum is its leading nucleon ejecta
    (experiment-faithful: the detector measures the final state); the
    absorbed flag is bookkeeping only, and nothing is zeroed unless no
    nucleon ejecta exists. Events are never killed by absorption.

Headline numbers (see *_summary.txt for full detail):
                          (L/R)_3N  (L/R)_2N   f_L(3N)  f_L(2N)
  shared, 0.25<pmiss<0.90    1.68      0.22      0.125    0.029   [high-stats]
  shared, pmiss>0.55         3.28      0.24      0.056    0.018   [20M/20M]
  indep,  0.25<pmiss<0.90    1.56      0.28      0.122    0.033   [20M/20M]
  indep,  pmiss>0.55         7.51      0.32      0.086    0.021   [20M/20M]

HIGH-STATS UPDATE (2026-07-11 evening): the sharedFSI_pmiss_0.25-0.90
folder and the standard_plots side-by-sides now use 3N = 40M (20M
unrestricted + 20M generated with -q 1:1e9, i.e. Q2>1-restricted; merging
is valid because every plot cuts Q2>1, where the two subsamples are
identically distributed) and 2N = 60M. MF heatmaps use 40M per FG mode.
Note the 3N summaries' base/SRC "pass fractions" are diluted by the
restricted subsample and are not comparable to the 20M-sample values.
(Honest accounting: the -q generation window only buys ~1.2x per run --
unweighted, ~85% of an unrestricted run already passes Q2>1; the real
gain here is the plain 2x/3x/2x statistics increase.)

standard_plots/ (high-stats samples):
  nocuts (theta_e 8-45, Q2>1, eq2, theta_pq<12; NO xB cut):
                             (L/R)_3N=0.753, (L/R)_2N=0.215
  OLD-SRC-cuts side-by-side: (L/R)_3N=1.234, (L/R)_2N=0.323
  MF fake-3N heatmaps (pp):  global L/R base 0.052 / srccuts 0.038,
                             local  L/R base 0.051 / srccuts 0.034
  3N no-FSI region plots (PWIA, 20M; unaffected by FSI changes).

AB_oldcode/: 5M-event reference with the OLD committed code (per-nucleon
FSI, kill-on-absorption, 220-MeV veto, kF=0.25, sigCM=0.15):
  nocuts:       (L/R)_3N=9.71, (L/R)_2N=0.018   <- reproduces the
  old SRC cuts: (L/R)_3N=5.25, (L/R)_2N=0.032      remembered ~10 / ~1:100

CAVEATS: (i) 3N region integrals under pmiss>0.55 are dominated by few
large-weight events -> sizable statistical uncertainty on those L/R.
(ii) The cut values (theta_pq<12, 0.6<p/q<0.95, 0.6<xB<1.2, pmiss>0.55)
were optimized on earlier-configuration samples; a re-scan on these final
samples is advisable before locking cuts.

In the summaries: "SRC-cut pass fraction" uses the cut values listed above
(--src-stats-from-args), not the old built-in SRC constants.
