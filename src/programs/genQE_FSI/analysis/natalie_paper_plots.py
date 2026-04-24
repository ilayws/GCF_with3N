#!/usr/bin/env python3
"""
natalie_paper_plots.py — Reproduce plots from Wright et al., arXiv:2104.05090
"Transport Estimations of Final State Interaction Effects on Short-range
 Correlation Studies Using the (e,e'p) and (e,e'pp) Reactions"

Reads PWIA and Full-FSI ROOT TTrees produced by SRC_analysis_2N,
applies kinematic cuts, computes T+SCX reweighting, and generates
all figures from the paper. CLAS experimental data is overlaid on
right (SRC-cut) panels.

Data normalization (paper Fig 2 caption, page 4):
    "The right panel y-axis scale correspond to the measured data counts
     and the calculations are individually area normalized to the data.
     The left panel y-axis scale is arbitrary."

In practice: the CLAS (e,e'pp) data file `SRC_e2p_C_GoodRuns_coulomb.root`
already has the SRC selection cuts applied. For SRC-cut panels (right
column), each PWIA / T+SCX / Full curve is scaled so its integral matches
the data integral over the same bin range. Data points are shown as black
filled circles with sqrt(N) Poisson errors. Left panels (no SRC cuts)
have no data and the curves are area-normalized to the first non-zero
calculation curve.

Usage:
    python natalie_paper_plots.py [--pwia FILE] [--fsi FILE] [--outdir DIR]
"""

import argparse
import os
import sys
import numpy as np
import uproot
import matplotlib.pyplot as plt

# clas_acceptance lives beside this script
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from clas_acceptance import ClasAcceptance, apply_acceptance_pipeline

# ---------------------------------------------------------------------------
# Constants
# ---------------------------------------------------------------------------
M_P = 0.93827  # proton mass [GeV]
M_N = 0.93957  # neutron mass [GeV]
M_AVG = 0.5 * (M_P + M_N)  # average nucleon mass
PROTON = 2212
NEUTRON = 2112

# ---------------------------------------------------------------------------
# T+SCX parameters — Eq. 3 of the paper
#
# ALL VALUES ARE EXACT, FOR 12C, FROM THE PRIMARY REFERENCES:
#
# Transparencies: Colle, Cosyn & Ryckebusch, PRC 93, 034608 (2016),
#   Table I (page 13 of the preprint), KinB kinematics
#   (CLAS-like: x_B>=1.2, theta_{p1,q}<=25deg, 0.62<|p1|/|q|<0.96)
#
# SCX probabilities: Duer et al., PRL 122, 172502 (2019),
#   Supplemental Material Table III (page 9 of the preprint)
#   computed via RMSGA framework of Colle et al.
# ---------------------------------------------------------------------------
T_SCX = {
    # Single-nucleon transparency T_A^p: from Colle Table I, (T^p_{12C})^2 = 0.26
    #                                    -> T^p_{12C} = sqrt(0.26) = 0.510
    "T_p":   0.510,
    # Two-proton transparency T_A^{pp}: Colle Table I, 12C KinB
    "T_pp":  0.280,
    # P^p_A: prob. proton does NOT undergo SCX.
    # Derived from Duer Table III: for a lead proton in the dominant pn pair
    # context, P(not SCX) = 1 - P^{[p]n} - P^{[np]} = 1 - 0.035 - 0.002 = 0.963
    "P_p":   0.963,
    # P^{[n]}_A: prob. neutron SCX -> proton (lead).
    # Duer Table III for 12C: P^{[n]p} = 0.035 +/- 0.002
    "P_n":   0.035,
    # P^{pp}_A: prob. neither proton in pp pair undergoes SCX.
    # Duer Table III for 12C: P^{pp} = 0.908 +/- 0.006
    "P_pp":  0.908,
    # P^{[n]p}_A: prob. lead neutron SCX (np pair -> detected as pp).
    # Duer Table III for 12C: P^{[n]p} = 0.035 +/- 0.002
    "P_np":  0.035,
    # P^{p[n]}_A: prob. recoil neutron SCX (pn pair -> detected as pp).
    # Duer Table III for 12C: P^{p[n]} = 0.041 +/- 0.003
    "P_pn":  0.041,
}

# ---------------------------------------------------------------------------
# SRC selection cuts — page 4 of the paper
# ---------------------------------------------------------------------------
SRC_CUTS = dict(
    xB_min=1.2,
    theta_pq_max_deg=25.0,
    pN_over_q_min=0.62,
    pN_over_q_max=0.92,
    pmiss_min=0.4,   # GeV/c
    pmiss_max=1.0,   # GeV/c
    mmiss_max=1.1,   # GeV
    precoil_min=0.35, # GeV/c — only for (e,e'pp) channel
)


# ===================================================================
#  Data loading
# ===================================================================

def load_tree(filepath, treename="events"):
    """Load TTree into dict of numpy arrays."""
    f = uproot.open(filepath)
    tree = f[treename]
    keys = tree.keys()
    return tree.arrays(keys, library="np")


def load_meta(root_path):
    """Load companion <root_path>.meta.txt written by SRC_analysis_2N.
    Returns a dict (strings); returns None if the file is absent."""
    meta_path = root_path + ".meta.txt"
    if not os.path.exists(meta_path):
        return None
    meta = {}
    with open(meta_path) as fh:
        for line in fh:
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            if "=" in line:
                k, v = line.split("=", 1)
                meta[k.strip()] = v.strip()
    return meta


def combine_samples(src_d, mf_d, fsrc):
    """Combine a SRC sample (p_rel > kF) with an MF sample (p_rel < kF)
    into a single hybrid sample with analysis-side reweighting.

    Generator-side: both samples are produced with the same AV18 S(p),
    differing only by the p_rel sampling window (wf_mode=2 vs 3 in
    SRC_analysis_2N). They are NOT pre-normalised, so their raw Σw
    values are arbitrary.

    Analysis-side (what this function does):

        w_SRC_new  =  w_SRC_raw * (  fSRC  / Σw_SRC_raw )
        w_MF_new   =  w_MF_raw  * ( (1-fSRC) / Σw_MF_raw )

    which yields a combined sample with total weight exactly 1, holding
    the requested fSRC / (1-fSRC) fractions.  Downstream histograms are
    then area-normalised to CLAS data exactly as in the non-hybrid
    pipeline.

    The two dicts are expected to have identical keys. All numpy arrays
    whose first axis matches the event count are concatenated. An extra
    `wf_component` label column (0 = SRC, 1 = MF) is added so downstream
    code can slice by component when needed.
    """
    if fsrc < 0.0 or fsrc > 1.0:
        raise ValueError(f"fsrc must be in [0, 1], got {fsrc}")

    n_src = len(src_d["weight"])
    n_mf  = len(mf_d["weight"])

    w_src_sum = float(src_d["weight"].sum())
    w_mf_sum  = float(mf_d["weight"].sum())
    if w_src_sum <= 0 or w_mf_sum <= 0:
        raise ValueError(
            f"Zero total weight: SRC Σw={w_src_sum:.3e}, MF Σw={w_mf_sum:.3e}")

    # Rescale each sample to Σw=1, then multiply by the physical fraction.
    src_d = dict(src_d)  # shallow copy; we only overwrite `weight`
    mf_d  = dict(mf_d)
    src_d["weight"] = src_d["weight"] * (fsrc       / w_src_sum)
    mf_d["weight"]  = mf_d["weight"]  * ((1 - fsrc) / w_mf_sum)

    print(f"  combine_samples: fSRC={fsrc:.3f}")
    print(f"    SRC sample: {n_src} evts, Σw_pre={w_src_sum:.4g} "
          f"-> scaled by {fsrc/w_src_sum:.4g}")
    print(f"    MF  sample: {n_mf } evts, Σw_pre={w_mf_sum:.4g} "
          f"-> scaled by {(1-fsrc)/w_mf_sum:.4g}")

    # Concatenate per-event arrays. We compare against the `weight` array's
    # first-axis length and only merge keys that match.
    combined = {}
    missing_src, missing_mf = [], []
    for key in src_d.keys():
        a = src_d[key]
        if not isinstance(a, np.ndarray):
            combined[key] = a  # scalar / string carry-over (shouldn't normally exist)
            continue
        if key not in mf_d:
            missing_mf.append(key)
            combined[key] = a
            continue
        b = mf_d[key]
        if not isinstance(b, np.ndarray):
            missing_mf.append(key)
            combined[key] = a
            continue
        if a.shape[0] != n_src or b.shape[0] != n_mf:
            # Non-event array — keep the SRC version.
            combined[key] = a
            continue
        combined[key] = np.concatenate([a, b], axis=0)

    for key in mf_d.keys():
        if key not in src_d:
            missing_src.append(key)

    if missing_src or missing_mf:
        print(f"    WARN  keys only in SRC: {missing_mf}")
        print(f"    WARN  keys only in MF : {missing_src}")

    # Component tag: 0 = SRC (p>=kF), 1 = MF (p<kF)
    combined["wf_component"] = np.concatenate([
        np.zeros(n_src, dtype=np.int8),
        np.ones (n_mf,  dtype=np.int8),
    ])
    return combined


def apply_weight_cap(d, percentile, label=""):
    """Cap per-event weights at the given percentile (variance reduction).

    Any event whose weight exceeds the threshold has its weight set to the
    threshold. This is a biased variance-reduction technique: the few
    highest-weight events are down-weighted to reduce histogram noise, at
    the cost of a small bias in shape and in Σw.

    Only positive weights are used to compute the percentile (weight=0
    events — typically FSI-killed ones — are left untouched).
    """
    w = d["weight"]
    pos = w > 0
    if not pos.any():
        print(f"  weight cap on {label}: no positive weights, skipped")
        return
    threshold = float(np.percentile(w[pos], percentile))
    n_capped = int((w > threshold).sum())
    max_before = float(w.max())
    sum_before = float(w.sum())
    d["weight"] = np.where(w > threshold, threshold, w)
    max_after = float(d["weight"].max())
    sum_after = float(d["weight"].sum())
    delta_pct = 100.0 * (sum_after - sum_before) / sum_before if sum_before > 0 else 0.0
    print(f"  cap @ P{percentile:.2f} on {label}: "
          f"w_cut={threshold:.3g}, capped {n_capped}/{len(w)} "
          f"({100.0*n_capped/len(w):.3f}%), "
          f"w_max {max_before:.3g}\u2192{max_after:.3g}, "
          f"\u03a3w {sum_before:.4g}\u2192{sum_after:.4g} ({delta_pct:+.2f}%)")


# ===================================================================
#  Kinematic variable computation
# ===================================================================

def compute_kinematics(d, Ebeam=6.0):
    """Add derived kinematic columns to the dict *d* (in-place).

    Expects branches: electron[4], lead_post[4], recoil_post[4], q[4],
    lead_type, rec_type, weight.
    """
    # Beam 4-vector (along z)
    beam = np.zeros((len(d["weight"]), 4))
    beam[:, 2] = Ebeam
    beam[:, 3] = Ebeam

    # Shortcuts — 3-momentum magnitudes
    def mag3(arr4):
        return np.sqrt(arr4[:, 0]**2 + arr4[:, 1]**2 + arr4[:, 2]**2)

    def dot3(a4, b4):
        return a4[:, 0]*b4[:, 0] + a4[:, 1]*b4[:, 1] + a4[:, 2]*b4[:, 2]

    # Build 4-vectors  (px, py, pz, E) stored column-major
    elec = np.column_stack([d["electron"][:, i] for i in range(4)])
    lead = np.column_stack([d["lead_post"][:, i] for i in range(4)])
    rec  = np.column_stack([d["recoil_post"][:, i] for i in range(4)])
    qvec = np.column_stack([d["q"][:, i] for i in range(4)])

    # Virtual photon
    nu = qvec[:, 3]                            # energy transfer
    q3 = mag3(qvec)                            # |q|
    Q2 = q3**2 - nu**2                         # Q^2 (should match branch)

    # x_B
    xB = Q2 / (2.0 * M_AVG * nu)

    # Leading proton 3-mom
    pN = mag3(lead)

    # Missing momentum: p_miss = p_lead - q
    pmiss_vec = lead[:, :3] - qvec[:, :3]
    pmiss = np.sqrt(pmiss_vec[:, 0]**2 + pmiss_vec[:, 1]**2 + pmiss_vec[:, 2]**2)

    # theta_pq — angle between leading nucleon and q
    cos_theta_pq = dot3(lead, qvec) / (pN * q3 + 1e-30)
    cos_theta_pq = np.clip(cos_theta_pq, -1, 1)
    theta_pq_deg = np.degrees(np.arccos(cos_theta_pq))

    # Missing mass: m_miss = sqrt( (2m + nu - E_lead)^2 - |p_lead - q|^2 )
    # "missing mass of the recoil nucleon assuming breakup of a stationary
    #  two-nucleon pair"
    Emiss = 2.0 * M_AVG + nu - lead[:, 3]
    mmiss_sq = Emiss**2 - pmiss**2
    mmiss = np.where(mmiss_sq > 0, np.sqrt(mmiss_sq), -np.sqrt(-mmiss_sq))

    # Recoil momentum
    prec = mag3(rec)

    # |p_N| / |q|
    pN_over_q = pN / (q3 + 1e-30)

    # CM momentum: p_cm = p_lead + p_recoil - q  (for e,e'pp)
    pcm_vec = lead[:, :3] + rec[:, :3] - qvec[:, :3]
    pcm_mag = np.sqrt(pcm_vec[:, 0]**2 + pcm_vec[:, 1]**2 + pcm_vec[:, 2]**2)

    # Relative momentum: p_rel = (p_miss - p_recoil) / 2
    prel_vec = (pmiss_vec - rec[:, :3]) / 2.0
    prel_mag = np.sqrt(prel_vec[:, 0]**2 + prel_vec[:, 1]**2 + prel_vec[:, 2]**2)

    # Angle between p_miss and q
    cos_pmiss_q = dot3(
        np.column_stack([pmiss_vec, np.zeros(len(pmiss_vec))]),
        qvec
    ) / (pmiss * q3 + 1e-30)
    cos_pmiss_q = np.clip(cos_pmiss_q, -1, 1)
    theta_pmiss_q_deg = np.degrees(np.arccos(cos_pmiss_q))

    # ---- Coordinate system for p_cm components (Fig 6) ----
    # z-axis = p_miss direction, q lies in x-z plane
    # Following Ref [21]: z along p_miss_hat, q in x-z plane
    pmiss_hat = pmiss_vec / (pmiss[:, None] + 1e-30)
    # z = pmiss_hat
    z_hat = pmiss_hat
    # q_perp = q - (q.z_hat) z_hat
    q_dot_z = np.sum(qvec[:, :3] * z_hat, axis=1)
    q_perp = qvec[:, :3] - q_dot_z[:, None] * z_hat
    q_perp_mag = np.sqrt(np.sum(q_perp**2, axis=1))
    x_hat = q_perp / (q_perp_mag[:, None] + 1e-30)
    # y = z x x
    y_hat = np.cross(z_hat, x_hat)

    pcm_x = np.sum(pcm_vec * x_hat, axis=1)
    pcm_y = np.sum(pcm_vec * y_hat, axis=1)
    pcm_z = np.sum(pcm_vec * z_hat, axis=1)

    # Store everything back
    d["xB"] = xB
    d["Q2_calc"] = Q2
    d["nu"] = nu
    d["q3"] = q3
    d["pN"] = pN
    d["pmiss"] = pmiss
    d["pmiss_vec"] = pmiss_vec
    d["theta_pq_deg"] = theta_pq_deg
    d["mmiss"] = mmiss
    d["prec"] = prec
    d["pN_over_q"] = pN_over_q
    d["pcm_vec"] = pcm_vec
    d["pcm_mag"] = pcm_mag
    d["pcm_x"] = pcm_x
    d["pcm_y"] = pcm_y
    d["pcm_z"] = pcm_z
    d["prel_mag"] = prel_mag
    d["theta_pmiss_q_deg"] = theta_pmiss_q_deg

    return d


# ===================================================================
#  Event selection
# ===================================================================

def select_eep(d):
    """(e,e'p) channel: lead nucleon is a proton (post-FSI)."""
    return d["lead_type"] == PROTON


def select_eepp(d):
    """(e,e'pp) channel: both lead and recoil are protons (post-FSI)."""
    return (d["lead_type"] == PROTON) & (d["rec_type"] == PROTON)


def apply_src_cuts(d):
    """Return boolean mask for SRC selection cuts (paper page 4)."""
    c = SRC_CUTS
    mask = (
        (d["xB"] > c["xB_min"]) &
        (d["theta_pq_deg"] < c["theta_pq_max_deg"]) &
        (d["pN_over_q"] > c["pN_over_q_min"]) &
        (d["pN_over_q"] < c["pN_over_q_max"]) &
        (d["pmiss"] > c["pmiss_min"]) &
        (d["pmiss"] < c["pmiss_max"]) &
        (d["mmiss"] < c["mmiss_max"])
    )
    return mask


def apply_clas_acceptance(d):
    """CLAS detector acceptance filter.

    TODO: implement when CLAS simulation is provided by the author.
    For now returns all-True mask.
    """
    return np.ones(len(d["weight"]), dtype=bool)


# ===================================================================
#  T+SCX reweighting  (Eq. 3 of paper)
# ===================================================================

def tscx_weight_eep(d):
    """Compute per-event T+SCX weight for (e,e'p) channel.

    Eq. 3, line 1:
      sigma^{T+SCX}_{(e,e'p)} =
          sigma^{PWIA}_{(e,e'p)} * P^p_A * T_{A,p}
        + sigma^{PWIA}_{(e,e'n)} * P^{[n]}_A * T_{A,p}

    Applied to PWIA events:
      - lead = proton  -> w *= P_p * T_p     (proton escapes as proton)
      - lead = neutron -> w *= P_n * T_p     (neutron SCX to proton)
    """
    w = np.zeros(len(d["weight"]))
    is_p = d["lead_type"] == PROTON
    is_n = d["lead_type"] == NEUTRON
    w[is_p] = T_SCX["P_p"] * T_SCX["T_p"]
    w[is_n] = T_SCX["P_n"] * T_SCX["T_p"]
    return w


def tscx_weight_eepp(d):
    """Compute per-event T+SCX weight for (e,e'pp) channel.

    Eq. 3, line 2:
      sigma^{T+SCX}_{(e,e'pp)} =
          sigma^{PWIA}_{(e,e'pp)} * P^{pp}_A * T_{A,pp}
        + sigma^{PWIA}_{(e,e'np)} * P^{[n]p}_A * T_{A,pp}
        + sigma^{PWIA}_{(e,e'pn)} * P^{p[n]}_A * T_{A,pp}

    Applied to PWIA events:
      - lead=p, rec=p  -> w *= P_pp * T_pp
      - lead=n, rec=p  -> w *= P_np * T_pp   (lead neutron SCX)
      - lead=p, rec=n  -> w *= P_pn * T_pp   (recoil neutron SCX)
      - lead=n, rec=n  -> w = 0              (double SCX neglected)
    """
    w = np.zeros(len(d["weight"]))
    lt, rt = d["lead_type"], d["rec_type"]
    pp = (lt == PROTON) & (rt == PROTON)
    np_ = (lt == NEUTRON) & (rt == PROTON)
    pn = (lt == PROTON) & (rt == NEUTRON)
    w[pp]  = T_SCX["P_pp"] * T_SCX["T_pp"]
    w[np_] = T_SCX["P_np"] * T_SCX["T_pp"]
    w[pn]  = T_SCX["P_pn"] * T_SCX["T_pp"]
    return w


# ===================================================================
#  CLAS data loading (pre-made paper histograms)
# ===================================================================
#
# Per Natalie Mail 2: Acceptance/SRC_eg2_Hists_C.root "contains premade
# histograms that are exactly those used in the original paper".
# Each entry below maps a paper figure panel to its data histogram or
# TGraphAsymmErrors in that file.

_CLAS_PANEL_MAP = {
    # (fig, panel): (hist_name, object_type)
    # panel = 'src' only since the paper's left ("all events") panels
    # show no data points (paper Fig 2 caption: "left panel y-axis scale
    # is arbitrary").
    ("fig2",       "src"): ("ep_mom1",       "TH1"),
    ("fig3_lead",  "src"): ("epp_mom1",      "TH1"),
    ("fig3_rec",   "src"): ("epp_mom2",      "TH1"),
    ("fig4_ep",    "src"): ("ep_Pm_graph",   "TGraph"),
    ("fig4_epp",   "src"): ("epp_Pm_graph",  "TGraph"),
    # Paper Fig 5 uses coarse binning (9 pts, y<=0.14); the fine
    # 30-point `pp_to_p` has a noisy tail up to 0.27.
    ("fig5_ratio", "src"): ("pp_to_p_coarse", "TGraph"),
    # Fig 6 Pcm components in the pmiss frame (z || pmiss, q in x-z plane).
    # Each is stored only as 36 sub-binned sub-histograms `*_i_j_k`. Summing
    # over i=0..3 with j=k=0 reproduces the full (e,e'pp) SRC-cut sample
    # (sub-bins were verified: j=0 is the "all" slice, k=0 is the "all"
    # slice, so summing i for fixed j=0,k=0 gives the total 364-event
    # (e,e'pp) sample).  The 4th column of Fig 6 (|p_cm|) has no
    # matching 1D histogram in the file, so we leave it sim-only.
    ("fig6_x",     "src"): ("epp_Pcmn1m",    "TH1_sumi"),
    ("fig6_y",     "src"): ("epp_Pcmn2m",    "TH1_sumi"),
    ("fig6_z",     "src"): ("epp_Pcmzm",     "TH1_sumi"),
    # Fig 7 p_rel (e,e'pp) SRC-cut: the `epp_k` 1D TH1D is the aggregate.
    ("fig7_prel",  "src"): ("epp_k",         "TH1"),
    # Fig 9 theta(p_miss, q) for (e,e'p) and (e,e'pp) after SRC cuts.
    # `ep_Pmq` covers 100-180 deg (5604 events), `epp_Pmq` 100-180 deg (364).
    ("fig9_ep",    "src"): ("ep_Pmq",        "TH1"),
    ("fig9_epp",   "src"): ("epp_Pmq",       "TH1"),
}


def _edges_from_centers(x):
    """Reconstruct bin edges from an array of bin centers (TGraph).

    Inner edges are midpoints between consecutive centers; the outer
    edges are extrapolated so that the first/last bin has the same
    half-width as its immediate neighbour. Works for both uniform and
    mildly non-uniform spacing.
    """
    x = np.asarray(x, dtype=float)
    mid = 0.5 * (x[:-1] + x[1:])
    first = x[0]  - (mid[0]  - x[0])
    last  = x[-1] + (x[-1]  - mid[-1])
    return np.concatenate([[first], mid, [last]])


def _read_data_hist(rootfile, key, kind):
    """Return (x, y, yerr_lo, yerr_hi, edges) for a single data entry.

    For TH1 we use the native bin edges. For TGraphs we reconstruct
    plausible bin edges from the point centers so the sim can be
    histogrammed on identical bins (crucial for area normalization —
    without this, sim and data would sit at different bin heights
    whenever the number of sim bins differs from the number of data
    points).
    """
    # TH1_sumi: histogram is only stored as 36 sub-histograms `<key>_i_j_k`.
    # Summing over i=0..3 with j=k=0 recovers the aggregate (e,e'pp) SRC sample
    # (sub-bin structure: i is an exclusive 4-bin partition, j=0/k=0 are the
    # "all events" slices along the two inclusive axes).
    if kind == "TH1_sumi":
        axis_edges = None
        total = None
        for i in range(4):
            h = rootfile[f"{key}_{i}_0_0"]
            v = h.values().astype(float)
            if axis_edges is None:
                axis_edges = h.axis(0).edges()
            total = v if total is None else total + v
        edges = axis_edges
        centers = 0.5 * (edges[:-1] + edges[1:])
        err = np.sqrt(np.clip(total, 0, None))
        return centers, total, err, err, edges

    obj = rootfile[key]
    if kind == "TH1":
        edges = obj.axis(0).edges()
        centers = 0.5 * (edges[:-1] + edges[1:])
        counts = obj.values()
        # Use sqrt(N) for data counts (Poisson), matching paper figures
        err = np.sqrt(np.clip(counts, 0, None))
        return centers, counts.astype(float), err, err, edges
    elif kind == "TGraph":
        x = obj.values("x")
        y = obj.values("y")
        # TGraphAsymmErrors: .errors('low'/'high') returns (x_err, y_err)
        try:
            _, yerr_lo = obj.errors("low")
            _, yerr_hi = obj.errors("high")
        except Exception:
            # TGraphErrors (symmetric): one-shot call
            try:
                _, yerr = obj.errors()
                yerr_lo = yerr_hi = yerr
            except Exception:
                yerr_lo = yerr_hi = np.zeros_like(y)
        edges = _edges_from_centers(x) if len(x) >= 2 else None
        return x, y, np.asarray(yerr_lo), np.asarray(yerr_hi), edges
    else:
        raise ValueError(f"Unknown data kind: {kind}")


def load_clas_hists(filepath="Acceptance/SRC_eg2_Hists_C.root"):
    """Load all paper data histograms/graphs needed for the figures.

    Returns a dict: { (fig, panel): { "x","y","yerr_lo","yerr_hi","edges" } }.
    Returns None if the file is missing.
    """
    if not os.path.isfile(filepath):
        return None
    f = uproot.open(filepath)
    out = {}
    for key, (hname, kind) in _CLAS_PANEL_MAP.items():
        try:
            x, y, yerr_lo, yerr_hi, edges = _read_data_hist(f, hname, kind)
            out[key] = dict(x=x, y=y, yerr_lo=yerr_lo, yerr_hi=yerr_hi,
                            edges=edges, hist_name=hname, kind=kind)
        except Exception as e:
            print(f"  [WARN] could not load {hname}: {e}")
    return out


# ===================================================================
#  CLAS raw-event data  (SRC_e2p_C_GoodRuns_coulomb.root)
# ===================================================================
#
# The eg2 "Hists" file stores pre-made 1D hists/graphs at fixed, sometimes
# coarse binning (e.g. `epp_Pcm*_i_0_0` are 30-bin 0.067-wide hists over
# [-1,1] although the paper shows the same events at finer binning).  To
# reproduce the paper's appearance we re-bin the (e,e'pp) data from the
# raw event file at any resolution we like.  (The (e,e'p) sample has
# ~5600 events in a separate ntuple not included here, so we keep the
# pre-made Hists file for the (e,e'p) figures.)

def load_clas_events(filepath="data/clas/SRC_e2p_C_GoodRuns_coulomb.root"):
    """Load raw CLAS (e,e'pp) events, compute all observables, mark SRC cuts.

    The file contains 605 measured (e,e'pp) events, one TTree `T`.  For
    each event we compute (pLead, pRec, pmiss, pcm_{x,y,z,mag}, prel, mmiss,
    xB, theta_pq, pN/|q|, Q2) and two boolean masks — `src_mask_ep` (all
    SRC cuts on the leading proton) and `src_mask_epp` (the same plus the
    |precoil|>0.35 GeV/c cut).  p_cm components are in the Ref. [21]
    pmiss-frame (z along pmiss_hat, q in the x-z plane) — same convention
    the simulation uses for pcm_x/y/z.
    """
    if not os.path.isfile(filepath):
        return None

    T = uproot.open(filepath)["T"]
    arrs = T.arrays()

    Pe   = np.asarray(arrs["Pe"])          # (N, 3)
    Pp   = np.asarray(arrs["Pp"])          # (N, 2, 3) two protons per event
    qvec = np.asarray(arrs["q"])           # (N, 3)
    Pmiss_all = np.asarray(arrs["Pmiss"])  # (N, 2, 3)  — [:,0] is lead pmiss
    Nu   = np.asarray(arrs["Nu"])
    Xb   = np.asarray(arrs["Xb"])
    Q2   = np.asarray(arrs["Q2"])
    pq_angle_lead = np.asarray(arrs["pq_angle"])[:, 0]   # degrees

    p_lead = Pp[:, 0]
    p_rec  = Pp[:, 1]
    pN_mag   = np.linalg.norm(p_lead, axis=1)
    prec_mag = np.linalg.norm(p_rec,  axis=1)
    q_mag    = np.linalg.norm(qvec,   axis=1)

    pmiss_vec = Pmiss_all[:, 0]
    pmiss_mag = np.linalg.norm(pmiss_vec, axis=1)

    # 2-body missing mass (struck SRC pair approximation):
    # m_miss^2 = (2 m_avg + nu - E_lead)^2 - |p_miss|^2
    Ep1 = np.sqrt(pN_mag**2 + M_P**2)
    mmiss2 = (2.0 * M_AVG + Nu - Ep1)**2 - pmiss_mag**2
    mmiss  = np.where(mmiss2 > 0, np.sqrt(mmiss2), -np.sqrt(-mmiss2))

    pN_over_q = pN_mag / np.where(q_mag > 0, q_mag, 1e-30)

    # c.m. momentum of the SRC pair: p_cm = p_lead + p_rec - q = p_miss + p_rec
    pcm_vec = p_lead + p_rec - qvec
    pcm_mag = np.linalg.norm(pcm_vec, axis=1)

    # relative momentum: p_rel = (p_miss - p_rec)/2
    prel_vec = 0.5 * (pmiss_vec - p_rec)
    prel_mag = np.linalg.norm(prel_vec, axis=1)

    # Pcm rotation into the pmiss frame  (same derivation as the sim):
    #   z_hat = pmiss_hat;  x_hat = projection of q onto plane perp to z;
    #   y_hat = z x x.
    pmiss_hat  = pmiss_vec / (pmiss_mag[:, None] + 1e-30)
    z_hat      = pmiss_hat
    q_dot_z    = np.sum(qvec * z_hat, axis=1)
    q_perp     = qvec - q_dot_z[:, None] * z_hat
    q_perp_mag = np.linalg.norm(q_perp, axis=1)
    x_hat      = q_perp / (q_perp_mag[:, None] + 1e-30)
    y_hat      = np.cross(z_hat, x_hat)

    pcm_x = np.sum(pcm_vec * x_hat, axis=1)
    pcm_y = np.sum(pcm_vec * y_hat, axis=1)
    pcm_z = np.sum(pcm_vec * z_hat, axis=1)

    # Angle between p_miss and q (used in Fig 9)
    cos_pmiss_q = np.sum(pmiss_vec * qvec, axis=1) / (
        pmiss_mag * q_mag + 1e-30
    )
    cos_pmiss_q = np.clip(cos_pmiss_q, -1, 1)
    theta_pmiss_q_deg = np.degrees(np.arccos(cos_pmiss_q))

    d = dict(
        pN=pN_mag, prec=prec_mag, q3=q_mag, pmiss=pmiss_mag, pmiss_vec=pmiss_vec,
        theta_pq_deg=pq_angle_lead, mmiss=mmiss, pN_over_q=pN_over_q,
        pcm_vec=pcm_vec, pcm_mag=pcm_mag,
        pcm_x=pcm_x, pcm_y=pcm_y, pcm_z=pcm_z,
        prel_mag=prel_mag, xB=Xb, Q2=Q2, Nu=Nu, qvec=qvec,
        p_lead=p_lead, p_rec=p_rec, Pe=Pe,
        theta_pmiss_q_deg=theta_pmiss_q_deg,
    )

    c = SRC_CUTS
    src_mask_lead = (
        (Xb > c["xB_min"]) &
        (pq_angle_lead < c["theta_pq_max_deg"]) &
        (pN_over_q > c["pN_over_q_min"]) &
        (pN_over_q < c["pN_over_q_max"]) &
        (pmiss_mag > c["pmiss_min"]) &
        (pmiss_mag < c["pmiss_max"]) &
        (mmiss      < c["mmiss_max"])
    )
    d["src_mask_ep"]  = src_mask_lead
    d["src_mask_epp"] = src_mask_lead & (prec_mag > c["precoil_min"])
    return d


def events_to_entry(events, obs_key, mask_key, bins):
    """Return a `data_entry` dict (compatible with `_plot_normalized`) by
    histogramming `events[obs_key][events[mask_key]]` with the given bins.

    Errors are Poisson (sqrt(N)).  Returns None if events is None.
    """
    if events is None:
        return None
    mask = events[mask_key]
    vals = events[obs_key][mask]
    counts, edges = np.histogram(vals, bins=bins)
    centers = 0.5 * (edges[:-1] + edges[1:])
    err = np.sqrt(np.clip(counts, 0, None))
    return dict(x=centers, y=counts.astype(float),
                yerr_lo=err, yerr_hi=err, edges=edges,
                hist_name=f"(raw events: {obs_key}|{mask_key})")


# ===================================================================
#  Mean-field background
# ===================================================================

def load_mf_data(filepath):
    """Load mean-field (Fermi gas) events for background estimation.

    TODO: implement when a Fermi gas generator is available.
    Returns None for now.
    """
    return None


# ===================================================================
#  Plotting helpers
# ===================================================================

# Style matching Natalie's paper (ROOT-like appearance):
#   PWIA  = gray dotted       (thin)
#   T+SCX = light blue dashed (medium)
#   FULL  = medium blue solid  (thicker)
#   Data  = black filled circles with error bars
_BLUE = "#5588cc"          # desaturated steel-blue, close to ROOT's kBlue+1
_LBLUE = "#77aadd"         # lighter variant for dashed
_GRAY = "#888888"
_RED  = "#cc3355"          # paper uses a warm color for the MF curve in Fig 8-10

COLORS = dict(pwia=_GRAY, tscx=_LBLUE, full=_BLUE, data="black",
              gcf=_BLUE, mf_full=_RED)
STYLES = dict(pwia=":", tscx="--", full="-",
              gcf="-", mf_full="--")
LABELS = dict(pwia="PWIA", tscx="T+SCX", full="FULL", data="Data",
              gcf="FULL GCF", mf_full="FULL MF")
LINEWIDTHS = dict(pwia=1.2, tscx=1.4, full=1.8,
                  gcf=1.8, mf_full=1.6)

# ROOT-like plot style
plt.rcParams.update({
    "font.family": "serif",
    "mathtext.fontset": "cm",          # Computer Modern math — matches ROOT's TMathText
    "font.size": 12,
    "axes.labelsize": 14,
    "axes.titlesize": 13,
    "axes.linewidth": 0.8,
    "legend.fontsize": 10,
    "legend.handlelength": 2.5,        # longer legend lines like ROOT
    "xtick.direction": "in",
    "ytick.direction": "in",
    "xtick.top": True,
    "ytick.right": True,
    "xtick.major.size": 5,
    "ytick.major.size": 5,
    "xtick.minor.size": 2.5,
    "ytick.minor.size": 2.5,
    "xtick.minor.visible": True,
    "ytick.minor.visible": True,
    "figure.facecolor": "white",
    "axes.facecolor": "white",
    "savefig.facecolor": "white",
})


def make_hist(values, weights, bins):
    """Compute weighted histogram, return (centers, heights)."""
    h, edges = np.histogram(values, bins=bins, weights=weights)
    centers = 0.5 * (edges[:-1] + edges[1:])
    return centers, h


def draw_hist(ax, centers, h, **kwargs):
    """Draw a pre-computed histogram as smooth curve."""
    ax.plot(centers, h, **kwargs)


def hist1d(ax, values, weights, bins, **kwargs):
    """Weighted histogram with step style (convenience wrapper)."""
    centers, h = make_hist(values, weights, bins)
    draw_hist(ax, centers, h, **kwargs)
    return centers, h


def area_normalize(histograms, ref_area=None):
    """Normalize a list of (centers, h, style_key) to same area.

    Per Wright et al. (paper Fig 2 caption): "the calculations are
    individually area normalized to the data". If `ref_area` is provided
    (e.g. the integral of the data histogram), all calculations are
    scaled to match it. Otherwise the first non-zero histogram is used
    as reference (for left panels with no data).
    """
    if ref_area is None:
        # Find the first histogram with nonzero area as reference
        for _, h, _ in histograms:
            a = np.sum(h)
            if a > 0:
                ref_area = a
                break
    if ref_area is None or ref_area == 0:
        return histograms

    normed = []
    for centers, h, key in histograms:
        a = np.sum(h)
        if a > 0:
            normed.append((centers, h * (ref_area / a), key))
        else:
            normed.append((centers, h, key))
    return normed


# (The original `plot_panel` helper has been replaced by `_plot_normalized`
#  which accepts pre-loaded paper histograms via `data_entry`.)


# ===================================================================
#  Figure functions — one per paper figure
# ===================================================================

def _acc_w_ep(d):
    """Per-event CLAS acceptance weight for (e,e'p). 1 if no acceptance applied."""
    return d.get("acc_w_ep", np.ones(len(d["weight"])))


def _acc_w_epp(d):
    """Per-event CLAS acceptance weight for (e,e'pp)."""
    return d.get("acc_w_epp", np.ones(len(d["weight"])))


def _acc_mask_ep(d):
    return d.get("acc_mask_ep", np.ones(len(d["weight"]), dtype=bool))


def _acc_mask_epp(d):
    return d.get("acc_mask_epp", np.ones(len(d["weight"]), dtype=bool))


def _collect_eep(pwia, fsi, var_key, cuts_mask_pwia, cuts_mask_fsi):
    """Collect (values, weights, style_key) for (e,e'p) PWIA/T+SCX/Full.

    Applies CLAS fiducial masks and multiplies by per-event map weights.
    """
    acc_p = _acc_mask_ep(pwia)
    acc_f = _acc_mask_ep(fsi)
    w_p   = _acc_w_ep(pwia)
    w_f   = _acc_w_ep(fsi)

    m_p = (pwia["lead_type"] == PROTON) & cuts_mask_pwia & acc_p
    tscx_w = tscx_weight_eep(pwia)
    m_t = cuts_mask_pwia & acc_p
    m_f = (fsi["lead_type"] == PROTON) & cuts_mask_fsi & acc_f
    return [
        (pwia[var_key][m_p], pwia["weight"][m_p] * w_p[m_p],           "pwia"),
        (pwia[var_key][m_t], pwia["weight"][m_t] * tscx_w[m_t] * w_p[m_t], "tscx"),
        (fsi [var_key][m_f], fsi ["weight"][m_f] * w_f[m_f],           "full"),
    ]


def _collect_eepp(pwia, fsi, var_key, cuts_mask_pwia, cuts_mask_fsi):
    """Collect (values, weights, style_key) for (e,e'pp) PWIA/T+SCX/Full."""
    acc_p = _acc_mask_epp(pwia)
    acc_f = _acc_mask_epp(fsi)
    w_p   = _acc_w_epp(pwia)
    w_f   = _acc_w_epp(fsi)

    rec_pw = cuts_mask_pwia & (pwia["prec"] > SRC_CUTS["precoil_min"]) & acc_p
    rec_fs = cuts_mask_fsi  & (fsi["prec"]  > SRC_CUTS["precoil_min"]) & acc_f

    m_p = (pwia["lead_type"] == PROTON) & (pwia["rec_type"] == PROTON) & rec_pw
    tscx_w = tscx_weight_eepp(pwia)
    m_t = rec_pw
    m_f = (fsi["lead_type"] == PROTON) & (fsi["rec_type"] == PROTON) & rec_fs
    return [
        (pwia[var_key][m_p], pwia["weight"][m_p] * w_p[m_p],           "pwia"),
        (pwia[var_key][m_t], pwia["weight"][m_t] * tscx_w[m_t] * w_p[m_t], "tscx"),
        (fsi [var_key][m_f], fsi ["weight"][m_f] * w_f[m_f],           "full"),
    ]


def _plot_normalized(ax, datasets, bins, xlabel="", title="", logy=False,
                     ylabel="Counts", data_entry=None):
    """Build histograms, area-normalize, draw.

    `data_entry` (optional): dict from load_clas_hists() with keys
        x, y, yerr_lo, yerr_hi, edges.  When supplied:
          * `bins` is overridden by the data's bin edges if they are available,
            so sim and data share identical binning (required for a clean
            area-normalization comparison).
          * All simulation curves are area-normalized to match the data integral.
          * The data is overlaid as black filled circles with (asymmetric) errors.
    """
    # Pin sim binning to the data binning when edges are known
    if data_entry is not None and data_entry.get("edges") is not None:
        bins = data_entry["edges"]

    # Calculation histograms
    hists = []
    for vals, wts, key in datasets:
        c, h = make_hist(vals, wts, bins)
        hists.append((c, h, key))

    ref_area = None
    if data_entry is not None:
        ref_area = float(np.sum(data_entry["y"]))

    hists = area_normalize(hists, ref_area=ref_area)

    for c, h, key in hists:
        draw_hist(ax, c, h, color=COLORS[key], linestyle=STYLES[key],
                  label=LABELS[key], linewidth=LINEWIDTHS.get(key, 1.5))

    # Overlay paper data points (with asymmetric errors if provided)
    if data_entry is not None:
        yerr = np.vstack([data_entry["yerr_lo"], data_entry["yerr_hi"]])
        ax.errorbar(data_entry["x"], data_entry["y"], yerr=yerr,
                    fmt="o", ms=4, color=COLORS["data"], label=LABELS["data"],
                    elinewidth=0.8, capsize=0, zorder=10)

    ax.set_xlabel(xlabel)
    ax.set_ylabel(ylabel)
    if title:
        ax.text(0.95, 0.95, title, transform=ax.transAxes,
                ha="right", va="top", fontsize=11)
    if logy:
        ax.set_yscale("log")
    ax.legend(frameon=False, loc="best")


def _clas(clas, key):
    """Safe lookup in the loaded CLAS-hists dict."""
    return None if clas is None else clas.get(key)


def figure2(pwia, fsi, outdir, clas=None):
    """Fig 2: Leading-proton momentum for 12C(e,e'p).
    Data shown only on right (SRC cuts) panel; sim is area-normalized to
    data (paper Fig 2 caption)."""
    fig, axes = plt.subplots(1, 2, figsize=(10, 4.5))
    bins = np.linspace(0.5, 2.5, 60)

    no_cuts = np.ones(len(pwia["weight"]), dtype=bool)
    no_cuts_f = np.ones(len(fsi["weight"]), dtype=bool)
    src_p = apply_src_cuts(pwia)
    src_f = apply_src_cuts(fsi)

    for i, (label, cp, cf, data_key) in enumerate([
        ("All events", no_cuts, no_cuts_f, None),
        ("SRC cuts",   src_p,   src_f,     ("fig2", "src")),
    ]):
        ds = _collect_eep(pwia, fsi, "pN", cp, cf)
        _plot_normalized(axes[i], ds, bins,
                         xlabel=r"$p_{\rm Lead}$ [GeV/c]",
                         title=rf"$^{{12}}$C(e,e'p) — {label}",
                         data_entry=_clas(clas, data_key))
        axes[i].set_xlim(0.5, 2.5)

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig2_pLead_eep.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig2_pLead_eep.png")


def figure3(pwia, fsi, outdir, clas=None, clas_ev=None):
    """Fig 3: Lead (top) and recoil (bottom) proton momentum for 12C(e,e'pp).

    Data (SRC-cut column): re-binned from the raw (e,e'pp) event file when
    `clas_ev` is provided; otherwise falls back to the stored Hists-file
    histograms `epp_mom1`/`epp_mom2` (40 / 17 bins)."""
    fig, axes = plt.subplots(2, 2, figsize=(10, 8))
    bins_lead = np.linspace(0.5, 2.5, 41)   # 0.05 GeV/c bin (matches epp_mom1)
    bins_rec  = np.linspace(0.35, 1.2, 18)  # 0.05 GeV/c bin (matches epp_mom2)

    no_cuts = np.ones(len(pwia["weight"]), dtype=bool)
    no_cuts_f = np.ones(len(fsi["weight"]), dtype=bool)
    src_p = apply_src_cuts(pwia)
    src_f = apply_src_cuts(fsi)

    for col, (label, cp, cf, use_data) in enumerate([
        ("All events", no_cuts, no_cuts_f, False),
        ("SRC cuts",   src_p,   src_f,     True),
    ]):
        ds_lead = _collect_eepp(pwia, fsi, "pN",   cp, cf)
        ds_rec  = _collect_eepp(pwia, fsi, "prec", cp, cf)

        if use_data:
            de_lead = (events_to_entry(clas_ev, "pN",  "src_mask_epp", bins_lead)
                       if clas_ev is not None else _clas(clas, ("fig3_lead", "src")))
            de_rec  = (events_to_entry(clas_ev, "prec","src_mask_epp", bins_rec)
                       if clas_ev is not None else _clas(clas, ("fig3_rec", "src")))
        else:
            de_lead = de_rec = None

        _plot_normalized(axes[0, col], ds_lead, bins_lead,
                         xlabel=r"$p_{\rm Lead}$ [GeV/c]",
                         title=rf"$^{{12}}$C(e,e'pp) — {label}",
                         data_entry=de_lead)
        _plot_normalized(axes[1, col], ds_rec, bins_rec,
                         xlabel=r"$p_{\rm Recoil}$ [GeV/c]",
                         data_entry=de_rec)
        axes[0, col].set_xlim(0.5, 2.5)
        axes[1, col].set_xlim(0.38, 1.0)

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig3_pLead_pRec_eepp.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig3_pLead_pRec_eepp.png")


def figure4(pwia, fsi, outdir, clas=None, clas_ev=None):
    """Fig 4: Missing momentum for (e,e'p) and (e,e'pp).

    (e,e'p) data comes from the Hists file (~5600 events, not in the raw
    event ntuple).  (e,e'pp) data is re-binned from the raw event file
    when `clas_ev` is provided."""
    fig, axes = plt.subplots(2, 2, figsize=(10, 8))
    bins = np.linspace(0.4, 1.0, 13)   # 0.05 GeV/c bins

    no_cuts = np.ones(len(pwia["weight"]), dtype=bool)
    no_cuts_f = np.ones(len(fsi["weight"]), dtype=bool)
    src_p = apply_src_cuts(pwia)
    src_f = apply_src_cuts(fsi)

    for col, (label, cp, cf, use_data) in enumerate([
        ("All events", no_cuts, no_cuts_f, False),
        ("SRC cuts",   src_p,   src_f,     True),
    ]):
        ds_eep  = _collect_eep (pwia, fsi, "pmiss", cp, cf)
        ds_eepp = _collect_eepp(pwia, fsi, "pmiss", cp, cf)

        de_eep = _clas(clas, ("fig4_ep", "src")) if use_data else None
        if use_data:
            de_eepp = (events_to_entry(clas_ev, "pmiss", "src_mask_epp", bins)
                       if clas_ev is not None else _clas(clas, ("fig4_epp", "src")))
        else:
            de_eepp = None

        _plot_normalized(axes[0, col], ds_eep, bins, logy=True,
                         xlabel=r"$p_{\rm Miss}$ [GeV/c]",
                         title=rf"$^{{12}}$C(e,e'p) — {label}",
                         data_entry=de_eep)
        _plot_normalized(axes[1, col], ds_eepp, bins, logy=True,
                         xlabel=r"$p_{\rm Miss}$ [GeV/c]",
                         title=rf"$^{{12}}$C(e,e'pp) — {label}",
                         data_entry=de_eepp)
        for row in range(2):
            axes[row, col].set_xlim(0.4, 1.0)

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig4_pmiss.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig4_pmiss.png")


def figure5(pwia, fsi, outdir, clas=None):
    """Fig 5: (e,e'pp)/(e,e'p) ratio vs p_miss after SRC cuts.
    Paper: x=[0.4,1.0], y=[0,0.2], linear. Uses Natalie's pp_to_p TGraph
    for the measured ratio."""
    fig, ax = plt.subplots(figsize=(6, 5))

    data_entry = _clas(clas, ("fig5_ratio", "src"))
    if data_entry is not None and data_entry.get("edges") is not None:
        # TGraph-derived edges (handle non-uniform binning correctly;
        # `pp_to_p_coarse` has variable bin widths).
        bins = data_entry["edges"]
    elif data_entry is not None and data_entry.get("x") is not None:
        # Fallback: uniform-spacing assumption from x-centers.
        xd = data_entry["x"]
        step = xd[1] - xd[0]
        bins = np.concatenate([[xd[0] - step/2], xd + step/2])
    else:
        bins = np.linspace(0.4, 1.0, 14)
    centers = 0.5 * (bins[:-1] + bins[1:])
    src = apply_src_cuts

    def _ratio(d, sel_eep, sel_eepp, w_scale_eep, w_scale_eepp):
        """Build weighted pmiss hists for (e,e'p) and (e,e'pp), return ratio."""
        w_ep  = d["weight"] * w_scale_eep
        w_epp = d["weight"] * w_scale_eepp
        h_ep,  _ = np.histogram(d["pmiss"][sel_eep],  bins=bins, weights=w_ep [sel_eep])
        h_epp, _ = np.histogram(d["pmiss"][sel_eepp], bins=bins, weights=w_epp[sel_eepp])
        return np.divide(h_epp, h_ep,
                         out=np.zeros_like(h_epp, dtype=float),
                         where=h_ep > 0)

    # ------- PWIA -------
    m_eep_pw  = select_eep(pwia)  & src(pwia) & _acc_mask_ep(pwia)
    m_eepp_pw = (select_eepp(pwia) & src(pwia) & _acc_mask_epp(pwia)
                 & (pwia["prec"] > SRC_CUTS["precoil_min"]))
    r_pwia = _ratio(pwia, m_eep_pw, m_eepp_pw, _acc_w_ep(pwia), _acc_w_epp(pwia))
    ax.plot(centers, r_pwia, color=COLORS["pwia"], linestyle=STYLES["pwia"],
            label=LABELS["pwia"], linewidth=LINEWIDTHS["pwia"])

    # ------- Full FSI -------
    m_eep_fs  = select_eep(fsi)  & src(fsi) & _acc_mask_ep(fsi)
    m_eepp_fs = (select_eepp(fsi) & src(fsi) & _acc_mask_epp(fsi)
                 & (fsi["prec"] > SRC_CUTS["precoil_min"]))
    r_full = _ratio(fsi, m_eep_fs, m_eepp_fs, _acc_w_ep(fsi), _acc_w_epp(fsi))
    ax.plot(centers, r_full, color=COLORS["full"], linestyle=STYLES["full"],
            label=LABELS["full"], linewidth=LINEWIDTHS["full"])

    # ------- T+SCX -------
    tscx_eep  = tscx_weight_eep(pwia)
    tscx_eepp = tscx_weight_eepp(pwia)
    m_all_pw  = src(pwia) & _acc_mask_ep(pwia)
    m_rec_pw  = src(pwia) & _acc_mask_epp(pwia) & (pwia["prec"] > SRC_CUTS["precoil_min"])
    r_tscx = _ratio(pwia, m_all_pw, m_rec_pw,
                     tscx_eep  * _acc_w_ep(pwia),
                     tscx_eepp * _acc_w_epp(pwia))
    ax.plot(centers, r_tscx, color=COLORS["tscx"], linestyle=STYLES["tscx"],
            label=LABELS["tscx"], linewidth=LINEWIDTHS["tscx"])

    # ------- data -------
    if data_entry is not None:
        yerr = np.vstack([data_entry["yerr_lo"], data_entry["yerr_hi"]])
        ax.errorbar(data_entry["x"], data_entry["y"], yerr=yerr,
                    fmt="o", ms=4, color=COLORS["data"], label=LABELS["data"],
                    elinewidth=0.8, capsize=0, zorder=10)

    ax.set_xlabel(r"$p_{\rm Miss}$ [GeV/c]")
    ax.set_ylabel(r"A(e,e$'$pp) / A(e,e$'$p)")
    ax.text(0.95, 0.95, r"$^{12}$C — SRC cuts", transform=ax.transAxes,
            ha="right", va="top", fontsize=11)
    ax.set_xlim(0.4, 1.0)
    ax.set_ylim(bottom=0)
    ax.legend(frameon=False, loc="upper left")

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig5_ratio_eepp_eep.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig5_ratio_eepp_eep.png")


def figure6(pwia, fsi, outdir, clas=None, clas_ev=None):
    """Fig 6: CM momentum components for 12C(e,e'pp) in the pmiss frame
    (z-axis along pmiss, q in x-z plane — Ref. [21] convention).

    Paper x-ranges: pcm_x,y in [-0.5,0.5], pcm_z in [-0.2,0.8],
    |pcm| in [0,0.8]. Data (bottom row, SRC cuts) is re-binned from the
    raw (e,e'pp) event file when `clas_ev` is provided.  Binning matches
    the paper (~20 bins per column)."""
    fig, axes = plt.subplots(2, 4, figsize=(16, 7))

    # (axis label, sim-key, xlim, bins)
    components = [
        (r"$p_{c.m.}^x$ [GeV/c]", "pcm_x",   (-0.5, 0.5), np.linspace(-0.5, 0.5, 21)),
        (r"$p_{c.m.}^y$ [GeV/c]", "pcm_y",   (-0.5, 0.5), np.linspace(-0.5, 0.5, 21)),
        (r"$p_{c.m.}^z$ [GeV/c]", "pcm_z",   (-0.2, 0.8), np.linspace(-0.2, 0.8, 21)),
        (r"$|p_{c.m.}|$ [GeV/c]", "pcm_mag", ( 0.0, 0.8), np.linspace( 0.0, 0.8, 21)),
    ]

    no_cuts = np.ones(len(pwia["weight"]), dtype=bool)
    no_cuts_f = np.ones(len(fsi["weight"]), dtype=bool)
    src_p = apply_src_cuts(pwia)
    src_f = apply_src_cuts(fsi)

    for row, (label, cp, cf, use_data) in enumerate([
        ("All events", no_cuts, no_cuts_f, False),
        ("SRC cuts",   src_p,   src_f,     True),
    ]):
        for col_idx, (comp_label, comp_key, xlim, bins) in enumerate(components):
            ax = axes[row, col_idx]
            ds = _collect_eepp(pwia, fsi, comp_key, cp, cf)
            title = rf"$^{{12}}$C(e,e'pp) — {label}" if col_idx == 0 else ""
            de = (events_to_entry(clas_ev, comp_key, "src_mask_epp", bins)
                  if (use_data and clas_ev is not None) else None)
            _plot_normalized(ax, ds, bins,
                             xlabel=comp_label, title=title,
                             data_entry=de)
            ax.set_xlim(xlim)

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig6_pcm_components.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig6_pcm_components.png")


def figure7(pwia, fsi, outdir, clas=None, clas_ev=None):
    """Fig 7: Relative momentum for 12C(e,e'pp).

    Data (SRC-cut column) is re-binned from the raw (e,e'pp) event file
    when `clas_ev` is provided; otherwise uses the stored `epp_k` TH1D."""
    fig, axes = plt.subplots(1, 2, figsize=(10, 4.5))
    bins = np.linspace(0.2, 1.0, 21)   # 0.04 GeV/c bins

    no_cuts = np.ones(len(pwia["weight"]), dtype=bool)
    no_cuts_f = np.ones(len(fsi["weight"]), dtype=bool)
    src_p = apply_src_cuts(pwia)
    src_f = apply_src_cuts(fsi)

    for col, (label, cp, cf, use_data) in enumerate([
        ("All events", no_cuts, no_cuts_f, False),
        ("SRC cuts",   src_p,   src_f,     True),
    ]):
        ds = _collect_eepp(pwia, fsi, "prel_mag", cp, cf)
        if use_data:
            de = (events_to_entry(clas_ev, "prel_mag", "src_mask_epp", bins)
                  if clas_ev is not None else _clas(clas, ("fig7_prel", "src")))
        else:
            de = None
        _plot_normalized(axes[col], ds, bins,
                         xlabel=r"$p_{\rm REL}$ [GeV/c]",
                         title=rf"$^{{12}}$C(e,e'pp) — {label}",
                         data_entry=de)
        axes[col].set_xlim(0.2, 1.0)

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig7_prel_eepp.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig7_prel_eepp.png")


# --- Figures 8-10: GCF (p_rel > kF, AV18) vs FULL MF (p_rel < kF, Fermi gas) ---
#
# The paper runs these comparisons with the SRC event selection cuts applied
# and only the FULL (post-FSI) calculation shown for each. For us:
#   * FULL GCF   <- fsi_src  (wf_mode = SRC_only, AV18 for p_rel > kF)
#   * FULL MF    <- fsi_mf   (wf_mode = MF_only,  Fermi gas for p_rel < kF)
# Both go through the same CLAS acceptance + smearing pipeline. Each curve is
# individually area-normalized to the data (where data exists).

def _fsi_vals_wts(d, var_key, channel, cuts_mask):
    """Return (values, weights) for a single FSI sample in a channel.

    channel: 'ep' or 'epp'. Applies the usual proton ID, CLAS fiducial mask,
    per-event acceptance map weight, and — for 'epp' — the precoil>0.35
    GeV/c cut. `cuts_mask` should already incorporate `apply_src_cuts(d)`.
    """
    if channel == "ep":
        sel  = select_eep(d)
        acc  = _acc_mask_ep(d)
        wmap = _acc_w_ep(d)
        m = sel & cuts_mask & acc
    else:
        sel  = select_eepp(d)
        acc  = _acc_mask_epp(d)
        wmap = _acc_w_epp(d)
        m = (sel & cuts_mask & acc
             & (d["prec"] > SRC_CUTS["precoil_min"]))
    return d[var_key][m], d["weight"][m] * wmap[m]


def _draw_gcf_mf(ax, fsi_src, fsi_mf, var_key, bins, *, channel,
                 xlabel="", title="", data_entry=None, logy=False,
                 ylabel="Counts", xlim=None):
    """Plot FULL-GCF and FULL-MF overlays on the same axis after SRC cuts.

    Each curve is individually area-normalized to the data integral (or, if
    `data_entry` is None, to the first non-empty calculation). Data is
    overlaid as black points.
    """
    if data_entry is not None and data_entry.get("edges") is not None:
        bins = data_entry["edges"]

    src_cuts_gcf = apply_src_cuts(fsi_src)
    src_cuts_mf  = apply_src_cuts(fsi_mf)

    v_gcf, w_gcf = _fsi_vals_wts(fsi_src, var_key, channel, src_cuts_gcf)
    v_mf,  w_mf  = _fsi_vals_wts(fsi_mf,  var_key, channel, src_cuts_mf)

    hists = [
        make_hist(v_gcf, w_gcf, bins) + ("gcf",),
        make_hist(v_mf,  w_mf,  bins) + ("mf_full",),
    ]

    ref_area = float(np.sum(data_entry["y"])) if data_entry is not None else None
    hists = area_normalize(hists, ref_area=ref_area)

    for c, h, key in hists:
        draw_hist(ax, c, h, color=COLORS[key], linestyle=STYLES[key],
                  label=LABELS[key], linewidth=LINEWIDTHS[key])

    if data_entry is not None:
        yerr = np.vstack([data_entry["yerr_lo"], data_entry["yerr_hi"]])
        ax.errorbar(data_entry["x"], data_entry["y"], yerr=yerr,
                    fmt="o", ms=4, color=COLORS["data"], label=LABELS["data"],
                    elinewidth=0.8, capsize=0, zorder=10)

    ax.set_xlabel(xlabel)
    ax.set_ylabel(ylabel)
    if title:
        ax.text(0.95, 0.95, title, transform=ax.transAxes,
                ha="right", va="top", fontsize=11)
    if xlim is not None:
        ax.set_xlim(xlim)
    if logy:
        ax.set_yscale("log")
    ax.legend(frameon=False, loc="best")


def figure8(fsi_src, fsi_mf, outdir, clas=None, clas_ev=None):
    """Fig 8: pair c.m. momentum components for 12C(e,e'pp) after SRC cuts,
    comparing FULL GCF (p_rel>kF, AV18) to FULL MF (p_rel<kF, Fermi gas).

    Layout mirrors the bottom row of Fig 6 (4 columns: pcm_x, pcm_y, pcm_z,
    |pcm|). Data for x/y/z comes from the Hists file's sub-binned
    `epp_Pcm*_i_0_0` histograms; |pcm| has no 1D hist in the file, so we
    re-bin it from the raw event file.
    """
    if fsi_mf is None:
        print("  [SKIP] fig8 — no MF sample provided")
        return

    fig, axes = plt.subplots(1, 4, figsize=(16, 4.5))
    components = [
        # (label, sim-key, xlim, bins, clas-map-key)
        (r"$p_{c.m.}^x$ [GeV/c]", "pcm_x",  (-0.5, 0.5), np.linspace(-0.5, 0.5, 21), ("fig6_x", "src")),
        (r"$p_{c.m.}^y$ [GeV/c]", "pcm_y",  (-0.5, 0.5), np.linspace(-0.5, 0.5, 21), ("fig6_y", "src")),
        (r"$p_{c.m.}^z$ [GeV/c]", "pcm_z",  (-0.2, 0.8), np.linspace(-0.2, 0.8, 21), ("fig6_z", "src")),
        (r"$|p_{c.m.}|$ [GeV/c]", "pcm_mag", (0.0, 0.8), np.linspace( 0.0, 0.8, 21), None),
    ]

    for col, (xlabel, comp_key, xlim, bins, clas_key) in enumerate(components):
        # Prefer raw-event data for uniform binning; fall back to Hists.
        if clas_ev is not None:
            de = events_to_entry(clas_ev, comp_key, "src_mask_epp", bins)
        else:
            de = _clas(clas, clas_key)
        title = r"$^{12}$C(e,e'pp) — SRC cuts" if col == 0 else ""
        _draw_gcf_mf(axes[col], fsi_src, fsi_mf, comp_key, bins,
                     channel="epp", xlabel=xlabel, title=title,
                     data_entry=de, xlim=xlim)

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig8_pcm_GCF_vs_MF.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig8_pcm_GCF_vs_MF.png")


def figure9(fsi_src, fsi_mf, outdir, clas=None, clas_ev=None):
    """Fig 9: theta(p_miss, q) for 12C(e,e'p) (left) and 12C(e,e'pp) (right),
    after SRC cuts + CLAS acceptance, comparing FULL GCF to FULL MF.

    (e,e'p) data from `ep_Pmq` TH1 (40 bins @ 2 deg), (e,e'pp) from
    `epp_Pmq` TH1 (20 bins @ 4 deg). Paper x-ranges: ~100-180 deg for
    (e,e'p), ~120-180 deg for (e,e'pp)."""
    if fsi_mf is None:
        print("  [SKIP] fig9 — no MF sample provided")
        return

    fig, axes = plt.subplots(1, 2, figsize=(10, 4.5))

    # (e,e'p) — left
    de_ep = _clas(clas, ("fig9_ep", "src"))
    bins_ep = (de_ep["edges"] if de_ep is not None and de_ep.get("edges") is not None
               else np.linspace(100, 180, 41))
    _draw_gcf_mf(axes[0], fsi_src, fsi_mf, "theta_pmiss_q_deg", bins_ep,
                 channel="ep",
                 xlabel=r"$\theta(p_{\rm Miss},\,q)$ [deg]",
                 title=r"$^{12}$C(e,e'p)",
                 data_entry=de_ep, xlim=(100, 180))

    # (e,e'pp) — right. Prefer raw events for finer-grained overlay.
    if clas_ev is not None:
        bins_epp = np.linspace(100, 180, 21)
        de_epp = events_to_entry(clas_ev, "theta_pmiss_q_deg",
                                 "src_mask_epp", bins_epp)
    else:
        de_epp = _clas(clas, ("fig9_epp", "src"))
        bins_epp = (de_epp["edges"] if de_epp is not None and de_epp.get("edges") is not None
                    else np.linspace(100, 180, 21))
    _draw_gcf_mf(axes[1], fsi_src, fsi_mf, "theta_pmiss_q_deg", bins_epp,
                 channel="epp",
                 xlabel=r"$\theta(p_{\rm Miss},\,q)$ [deg]",
                 title=r"$^{12}$C(e,e'pp)",
                 data_entry=de_epp, xlim=(120, 180))

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig9_theta_pmiss_q_GCF_vs_MF.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig9_theta_pmiss_q_GCF_vs_MF.png")


def figure10(fsi_src, fsi_mf, outdir, clas=None):
    """Fig 10: (e,e'pp)/(e,e'p) yield ratio vs p_miss after SRC cuts,
    comparing FULL GCF to FULL MF. Same x-range as Fig 5 (0.4-1.0 GeV/c)."""
    if fsi_mf is None:
        print("  [SKIP] fig10 — no MF sample provided")
        return

    fig, ax = plt.subplots(figsize=(6, 5))

    de = _clas(clas, ("fig5_ratio", "src"))
    if de is not None and de.get("edges") is not None:
        bins = de["edges"]
    elif de is not None and de.get("x") is not None:
        xd = de["x"]; step = xd[1] - xd[0]
        bins = np.concatenate([[xd[0] - step/2], xd + step/2])
    else:
        bins = np.linspace(0.4, 1.0, 14)
    centers = 0.5 * (bins[:-1] + bins[1:])

    def _ratio(d):
        """Weighted pmiss histograms for (e,e'p) and (e,e'pp), returns ratio."""
        src = apply_src_cuts(d)
        m_ep  = select_eep(d)  & src & _acc_mask_ep(d)
        m_epp = (select_eepp(d) & src & _acc_mask_epp(d)
                 & (d["prec"] > SRC_CUTS["precoil_min"]))
        w_ep  = d["weight"] * _acc_w_ep(d)
        w_epp = d["weight"] * _acc_w_epp(d)
        h_ep,  _ = np.histogram(d["pmiss"][m_ep],  bins=bins, weights=w_ep [m_ep])
        h_epp, _ = np.histogram(d["pmiss"][m_epp], bins=bins, weights=w_epp[m_epp])
        return np.divide(h_epp, h_ep,
                         out=np.zeros_like(h_epp, dtype=float),
                         where=h_ep > 0)

    r_gcf = _ratio(fsi_src)
    r_mf  = _ratio(fsi_mf)

    ax.plot(centers, r_gcf, color=COLORS["gcf"], linestyle=STYLES["gcf"],
            label=LABELS["gcf"], linewidth=LINEWIDTHS["gcf"])
    ax.plot(centers, r_mf,  color=COLORS["mf_full"], linestyle=STYLES["mf_full"],
            label=LABELS["mf_full"], linewidth=LINEWIDTHS["mf_full"])

    if de is not None:
        yerr = np.vstack([de["yerr_lo"], de["yerr_hi"]])
        ax.errorbar(de["x"], de["y"], yerr=yerr,
                    fmt="o", ms=4, color=COLORS["data"], label=LABELS["data"],
                    elinewidth=0.8, capsize=0, zorder=10)

    ax.set_xlabel(r"$p_{\rm Miss}$ [GeV/c]")
    ax.set_ylabel(r"A(e,e$'$pp) / A(e,e$'$p)")
    ax.text(0.95, 0.95, r"$^{12}$C — SRC cuts", transform=ax.transAxes,
            ha="right", va="top", fontsize=11)
    ax.set_xlim(0.4, 1.0)
    ax.set_ylim(bottom=0)
    ax.legend(frameon=False, loc="upper left")

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig10_ratio_GCF_vs_MF.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig10_ratio_GCF_vs_MF.png")


# ===================================================================
#  Effective transparency summary (text result from paper)
# ===================================================================

def print_effective_transparencies(pwia, fsi):
    """Compute and print effective transparencies (paper page 4-5).

    Paper definition: ratio of events passing the SRC selection cuts
    **within the CLAS acceptance** for FSI (or T+SCX) to PWIA, assuming
    "equivalent experimental luminosities".  Applying the same fiducial
    mask + map weight to both num and denom is essential for an apples-
    to-apples comparison.

    The two generator outputs in this project have different total
    generator-level weight sums (hA <w> ~ 100x PWIA <w>).  To recover
    the paper's luminosity-matched definition we rescale the FSI
    weights by  Sum(w)_PWIA / Sum(w)_FSI  BEFORE the acceptance + SRC
    cuts are applied.  This is exactly the ratio one would obtain if
    both samples had been thrown to the same integrated luminosity.
    """
    src = apply_src_cuts

    lumi_scale = pwia["weight"].sum() / fsi["weight"].sum()

    # PWIA, inside CLAS acceptance (fiducial masks + map weights applied).
    m_eep_pwia  = select_eep(pwia)  & src(pwia) & _acc_mask_ep(pwia)
    m_eepp_pwia = (select_eepp(pwia) & src(pwia) & _acc_mask_epp(pwia)
                   & (pwia["prec"] > SRC_CUTS["precoil_min"]))
    w_eep_pwia  = (pwia["weight"] * _acc_w_ep(pwia))[m_eep_pwia].sum()
    w_eepp_pwia = (pwia["weight"] * _acc_w_epp(pwia))[m_eepp_pwia].sum()

    # Full FSI, inside CLAS acceptance.  Scaled to same luminosity as PWIA.
    m_eep_fsi  = select_eep(fsi)  & src(fsi) & _acc_mask_ep(fsi)
    m_eepp_fsi = (select_eepp(fsi) & src(fsi) & _acc_mask_epp(fsi)
                  & (fsi["prec"] > SRC_CUTS["precoil_min"]))
    w_eep_fsi  = lumi_scale * (fsi["weight"] * _acc_w_ep(fsi))[m_eep_fsi].sum()
    w_eepp_fsi = lumi_scale * (fsi["weight"] * _acc_w_epp(fsi))[m_eepp_fsi].sum()

    # T+SCX applied on PWIA, inside CLAS acceptance.
    tscx_eep_w  = tscx_weight_eep(pwia)
    tscx_eepp_w = tscx_weight_eepp(pwia)
    m_eep_tscx  = src(pwia) & _acc_mask_ep(pwia)
    m_eepp_tscx = (src(pwia) & _acc_mask_epp(pwia)
                   & (pwia["prec"] > SRC_CUTS["precoil_min"]))
    w_eep_tscx  = (pwia["weight"] * tscx_eep_w  * _acc_w_ep(pwia))[m_eep_tscx].sum()
    w_eepp_tscx = (pwia["weight"] * tscx_eepp_w * _acc_w_epp(pwia))[m_eepp_tscx].sum()

    print("\n" + "="*62)
    print("  Effective Transparencies  (within CLAS acceptance, SRC cuts)")
    print("  Both samples rescaled to equivalent experimental luminosity.")
    print("="*62)
    print(f"  {'Channel':<12} {'T+SCX':>10} {'Full':>10}   (paper: T+SCX / Full)")
    print(f"  {'(e,e\'p)':<12} {w_eep_tscx/w_eep_pwia:>10.3f} "
          f"{w_eep_fsi/w_eep_pwia:>10.3f}   (paper: 0.61  / 0.58)")
    print(f"  {'(e,e\'pp)':<12} {w_eepp_tscx/w_eepp_pwia:>10.3f} "
          f"{w_eepp_fsi/w_eepp_pwia:>10.3f}   (paper: 0.83  / 0.73)")
    print("="*62 + "\n")


# ===================================================================
#  Main
# ===================================================================

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--pwia", default="events/pwia/events_2N_pwia_501.root",
                        help="PWIA SRC ROOT file (p_rel>=kF, AV18 WF)")
    parser.add_argument("--fsi", default="events/hA/events_2N_fsi_hA_501.root",
                        help="Full FSI SRC ROOT file (p_rel>=kF, AV18 WF)")
    parser.add_argument("--pwia-mf", default=None,
                        help=("Optional PWIA MF file (p_rel<kF, Fermi-gas). "
                              "If provided together with --fsi-mf, the analysis "
                              "combines SRC+MF samples with fSRC weighting."))
    parser.add_argument("--fsi-mf", default=None,
                        help="Optional FSI MF file (matching --pwia-mf).")
    parser.add_argument("--fsrc", type=float, default=0.2,
                        help=("SRC fraction used for combining (w_SRC=fsrc, "
                              "w_MF=1-fsrc). Default 0.2 matches the generator."))
    parser.add_argument("--outdir",
                        default="analysis/plots/natalie_paper/hA_acceptance",
                        help="Output directory for plots")
    parser.add_argument("--ebeam", type=float, default=5.01,
                        help="Beam energy [GeV]")
    parser.add_argument("--clas-data",
                        default="Acceptance/SRC_eg2_Hists_C.root",
                        help=("Pre-made CLAS paper histograms (Natalie Mail 2). "
                              "Used only for (e,e'p) panels (Fig 2, Fig 4 top, "
                              "Fig 5 ratio) — the (e,e'p) sample is not in the "
                              "raw event file."))
    parser.add_argument("--clas-events",
                        default="data/clas/SRC_e2p_C_GoodRuns_coulomb.root",
                        help=("Raw CLAS (e,e'pp) event ntuple. Used to re-bin "
                              "the (e,e'pp) panels (Fig 3, Fig 4 bottom, Fig 6, "
                              "Fig 7) at any binning we like, matching the paper's "
                              "own figures exactly.  Pass empty string to disable."))
    parser.add_argument("--acc-map",
                        default="Acceptance/map_eg2_adin.root",
                        help="Weighted CLAS acceptance map (protons+electrons)")
    parser.add_argument("--no-acceptance", action="store_true",
                        help="Skip CLAS acceptance (smearing + fiducial + map)")
    parser.add_argument("--seed", type=int, default=None,
                        help=("RNG seed for momentum smearing. "
                              "If omitted, a random seed is drawn from the "
                              "OS entropy pool; the concrete value is "
                              "printed so a specific run can be reproduced "
                              "by passing it back via --seed."))
    parser.add_argument("--weight-cap-percentile", type=float, default=None,
                        metavar="PCT",
                        help=("Cap per-event generator weights at the given "
                              "percentile (e.g. 99.5). Applied per input "
                              "sample BEFORE combining. Variance reduction "
                              "at the cost of small bias."))
    args = parser.parse_args()

    os.makedirs(args.outdir, exist_ok=True)

    combining_mf = (args.pwia_mf is not None) and (args.fsi_mf is not None)
    if (args.pwia_mf is None) ^ (args.fsi_mf is None):
        parser.error("--pwia-mf and --fsi-mf must be provided together.")

    def _load_and_preprocess(label, path, acc=None):
        print(f"Loading {label}: {path}")
        d = load_tree(path)
        print(f"  {len(d['weight'])} events loaded")
        meta = load_meta(path)
        if meta is not None:
            print(f"    metadata: wf_mode={meta.get('wf_mode_name')}  "
                  f"N_saved={meta.get('n_events_saved')}  "
                  f"Sigma_w={meta.get('total_weight')}")
        compute_kinematics(d, Ebeam=args.ebeam)
        if acc is not None:
            apply_acceptance_pipeline(d, acc)
            print(f"    (e,e'p)  fiducial: {d['acc_mask_ep'].sum()} / {len(d['weight'])}")
            print(f"    (e,e'pp) fiducial: {d['acc_mask_epp'].sum()} / {len(d['weight'])}")
        return d

    if not args.no_acceptance:
        if args.seed is None:
            args.seed = int(np.random.SeedSequence().entropy) & 0x7FFFFFFF
            seed_src = "random (OS entropy)"
        else:
            seed_src = "user-supplied"
        print(f"CLAS acceptance enabled  (map={args.acc_map}, "
              f"seed={args.seed}  [{seed_src}])")
        acc = ClasAcceptance(args.acc_map, seed=args.seed)
    else:
        print("CLAS acceptance disabled (--no-acceptance)")
        acc = None

    # Always load the SRC samples (the primary files).
    pwia_src = _load_and_preprocess("PWIA (SRC)", args.pwia, acc)
    fsi_src  = _load_and_preprocess("FSI  (SRC)", args.fsi,  acc)

    if combining_mf:
        pwia_mf = _load_and_preprocess("PWIA (MF)", args.pwia_mf, acc)
        fsi_mf  = _load_and_preprocess("FSI  (MF)", args.fsi_mf,  acc)

    if args.weight_cap_percentile is not None:
        pct = args.weight_cap_percentile
        if pct <= 0 or pct >= 100:
            parser.error("--weight-cap-percentile must be strictly in (0, 100)")
        print(f"\nWeight cap @ {pct}th percentile (per-sample, pre-combine):")
        apply_weight_cap(pwia_src, pct, label="PWIA (SRC)")
        apply_weight_cap(fsi_src,  pct, label="FSI  (SRC)")
        if combining_mf:
            apply_weight_cap(pwia_mf, pct, label="PWIA (MF)")
            apply_weight_cap(fsi_mf,  pct, label="FSI  (MF)")

    if combining_mf:
        print(f"\nCombining SRC+MF samples with fSRC={args.fsrc}")
        pwia = combine_samples(pwia_src, pwia_mf, args.fsrc)
        fsi  = combine_samples(fsi_src,  fsi_mf,  args.fsrc)
        print(f"  PWIA combined: {len(pwia['weight'])} events "
              f"({int((pwia['wf_component']==0).sum())} SRC + "
              f"{int((pwia['wf_component']==1).sum())} MF)")
        print(f"  FSI  combined: {len(fsi['weight'])} events "
              f"({int((fsi['wf_component']==0).sum())} SRC + "
              f"{int((fsi['wf_component']==1).sum())} MF)")
    else:
        pwia, fsi = pwia_src, fsi_src

    print(f"Loading CLAS paper hists: {args.clas_data}")
    clas = load_clas_hists(args.clas_data)
    if clas is not None:
        print(f"  Loaded {len(clas)} panel(s): {[k for k in clas.keys()]}")
    else:
        print("  WARNING: paper-hists file not found; (e,e'p) overlays disabled")

    if args.clas_events:
        print(f"Loading CLAS raw events: {args.clas_events}")
        clas_ev = load_clas_events(args.clas_events)
        if clas_ev is not None:
            n_tot = len(clas_ev["pN"])
            n_ep  = int(clas_ev["src_mask_ep"].sum())
            n_epp = int(clas_ev["src_mask_epp"].sum())
            print(f"  {n_tot} events; after SRC cuts: {n_ep} (e,e'p), "
                  f"{n_epp} (e,e'pp)  [paper: 363 (e,e'pp)]")
        else:
            print("  WARNING: raw-events file not found; (e,e'pp) overlays "
                  "fall back to the Hists file")
    else:
        clas_ev = None

    print_effective_transparencies(pwia, fsi)

    print(f"Generating plots in {args.outdir}/")
    figure2(pwia, fsi, args.outdir, clas=clas)
    figure3(pwia, fsi, args.outdir, clas=clas, clas_ev=clas_ev)
    figure4(pwia, fsi, args.outdir, clas=clas, clas_ev=clas_ev)
    figure5(pwia, fsi, args.outdir, clas=clas)
    figure6(pwia, fsi, args.outdir, clas=clas, clas_ev=clas_ev)
    figure7(pwia, fsi, args.outdir, clas=clas, clas_ev=clas_ev)

    # Figs 8-10 compare FULL GCF (p_rel>kF, AV18) to FULL MF (p_rel<kF, FG).
    # We pass the *raw* SRC and MF FSI samples, NOT the combined `fsi` object,
    # because the paper compares pure SRC- and pure MF-wavefunction calculations.
    fsi_mf_raw = fsi_mf if combining_mf else None
    figure8 (fsi_src, fsi_mf_raw, args.outdir, clas=clas, clas_ev=clas_ev)
    figure9 (fsi_src, fsi_mf_raw, args.outdir, clas=clas, clas_ev=clas_ev)
    figure10(fsi_src, fsi_mf_raw, args.outdir, clas=clas)

    print("\nDone.")


if __name__ == "__main__":
    main()
