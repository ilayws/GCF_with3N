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
import numpy as np
import uproot
import matplotlib.pyplot as plt

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
#  CLAS data loading
# ===================================================================

def load_clas_data(filepath="SRC_e2p_C_GoodRuns_coulomb.root"):
    """Load experimental CLAS 12C(e,e'pp) data and compute kinematic variables.

    Applies the SRC selection cuts (paper page 4) to match the simulation:
      xB > 1.2, theta_pq < 25 deg, 0.62 < pN/q < 0.92,
      0.4 < pmiss < 1.0 GeV/c, mmiss < 1.1 GeV.
    Recoil cut (precoil > 0.35 GeV/c) is applied to (e,e'pp) variables only.

    Returns dict with two sets of arrays:
      - "*"_eep : variables after (e,e'p) cuts (no precoil cut)
      - "*"_eepp: variables after (e,e'pp) cuts (with precoil cut)
    Returns None if the file is not found.
    """
    if not os.path.isfile(filepath):
        return None

    f = uproot.open(filepath)
    t = f["T"]
    raw = t.arrays(library="np")

    n = len(raw["Q2"])

    # Extract per-event arrays (jagged with size 2 for Pp/Pmiss)
    pLead = np.array([x[0] for x in raw["Pp_size"]], dtype=float)
    pRec  = np.array([x[1] for x in raw["Pp_size"]], dtype=float)
    pmiss_mag = np.array([x[0] for x in raw["Pmiss_size"]], dtype=float)

    # 3-vectors
    pLead_vec = np.array([x[0] for x in raw["Pp"]], dtype=float)
    pRec_vec  = np.array([x[1] for x in raw["Pp"]], dtype=float)
    pmiss_vec = np.array([x[0] for x in raw["Pmiss"]], dtype=float)
    qvec      = np.array(raw["q"], dtype=float)

    qmag = np.linalg.norm(qvec, axis=1)

    # CM momentum (e,e'pp): p_cm = pmiss + p_recoil
    pcm_vec = pmiss_vec + pRec_vec
    pcm_mag = np.linalg.norm(pcm_vec, axis=1)

    # Relative momentum: p_rel = (pmiss - p_recoil) / 2
    prel_vec = (pmiss_vec - pRec_vec) / 2.0
    prel_mag = np.linalg.norm(prel_vec, axis=1)

    # CM components in coordinate system: z = pmiss_hat, q in x-z plane
    pmiss_hat = pmiss_vec / (pmiss_mag[:, None] + 1e-30)
    z_hat = pmiss_hat
    q_dot_z = np.sum(qvec * z_hat, axis=1)
    q_perp = qvec - q_dot_z[:, None] * z_hat
    q_perp_mag = np.linalg.norm(q_perp, axis=1)
    x_hat = q_perp / (q_perp_mag[:, None] + 1e-30)
    y_hat = np.cross(z_hat, x_hat)
    pcm_x = np.sum(pcm_vec * x_hat, axis=1)
    pcm_y = np.sum(pcm_vec * y_hat, axis=1)
    pcm_z = np.sum(pcm_vec * z_hat, axis=1)

    # angle(pmiss, q) in degrees
    cos_pmq = np.sum(pmiss_vec * qvec, axis=1) / (pmiss_mag * qmag + 1e-30)
    theta_pmiss_q_deg = np.degrees(np.arccos(np.clip(cos_pmq, -1, 1)))

    # ---- Apply SRC cuts (paper page 4) ----
    xB = np.array(raw["Xb"])
    nu = np.array(raw["Nu"])
    pq = np.array([x[0] if hasattr(x, "__len__") else x for x in raw["pq_angle"]])  # degrees

    pNq = pLead / qmag
    E_lead = np.sqrt(M_AVG**2 + pLead**2)
    mmiss_sq = (2 * M_AVG + nu - E_lead)**2 - pmiss_mag**2
    mmiss = np.where(mmiss_sq > 0, np.sqrt(mmiss_sq), -np.sqrt(-mmiss_sq))

    c = SRC_CUTS
    mask_eep = (
        (xB > c["xB_min"]) &
        (pq < c["theta_pq_max_deg"]) &
        (pNq > c["pN_over_q_min"]) & (pNq < c["pN_over_q_max"]) &
        (pmiss_mag > c["pmiss_min"]) & (pmiss_mag < c["pmiss_max"]) &
        (mmiss < c["mmiss_max"])
    )
    mask_eepp = mask_eep & (pRec > c["precoil_min"])

    return dict(
        n_events=n,
        n_after_eep=int(np.sum(mask_eep)),
        n_after_eepp=int(np.sum(mask_eepp)),
        # (e,e'p) cuts (use lead-only variables)
        pLead_eep=pLead[mask_eep],
        pmiss_eep=pmiss_mag[mask_eep],
        # (e,e'pp) cuts (use both protons, requires precoil > 0.35)
        pLead_eepp=pLead[mask_eepp],
        pRec_eepp=pRec[mask_eepp],
        pmiss_eepp=pmiss_mag[mask_eepp],
        pcm_x_eepp=pcm_x[mask_eepp], pcm_y_eepp=pcm_y[mask_eepp],
        pcm_z_eepp=pcm_z[mask_eepp], pcm_mag_eepp=pcm_mag[mask_eepp],
        prel_mag_eepp=prel_mag[mask_eepp],
        theta_pmiss_q_deg_eepp=theta_pmiss_q_deg[mask_eepp],
    )


def hist_data_with_errors(values, bins):
    """Histogram with sqrt(N) Poisson errors. Returns (centers, counts, errors)."""
    counts, edges = np.histogram(values, bins=bins)
    centers = 0.5 * (edges[:-1] + edges[1:])
    errors = np.sqrt(counts)
    return centers, counts.astype(float), errors


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

COLORS = dict(pwia=_GRAY, tscx=_LBLUE, full=_BLUE, data="black", mf=_BLUE)
STYLES = dict(pwia=":", tscx="--", full="-", mf="-.")
LABELS = dict(pwia="PWIA", tscx="T+SCX", full="FULL", data="Data", mf="FULL MF")
LINEWIDTHS = dict(pwia=1.2, tscx=1.4, full=1.8, mf=1.4)

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


def plot_panel(ax, bins, datasets, title="", xlabel="", ylabel="Counts",
               logy=False, normalize=True):
    """Plot one panel with PWIA / T+SCX / Full / Data overlaid.

    datasets: list of (values, weights, style_key) tuples.
    """
    # Build histograms
    hists = []
    for vals, wts, key in datasets:
        if vals is None:
            continue
        centers, h = make_hist(vals, wts, bins)
        hists.append((centers, h, key))

    # Area-normalize
    if normalize and len(hists) > 0:
        hists = area_normalize(hists)

    # Draw
    for centers, h, key in hists:
        draw_hist(ax, centers, h,
                  color=COLORS[key], linestyle=STYLES[key],
                  label=LABELS[key], linewidth=1.5)

    clas = load_clas_data(title)
    if clas is not None:
        ax.errorbar(clas["x"], clas["y"], yerr=clas["yerr"],
                    fmt="o", ms=3, color=COLORS["data"], label=LABELS["data"])
    ax.set_xlabel(xlabel)
    ax.set_ylabel(ylabel)
    if title:
        ax.set_title(title, fontsize=10)
    if logy:
        ax.set_yscale("log")
    ax.legend(fontsize=7, frameon=False)


# ===================================================================
#  Figure functions — one per paper figure
# ===================================================================

def _collect_eep(pwia, fsi, var_key, cuts_mask_pwia, cuts_mask_fsi):
    """Collect (values, weights, style_key) for (e,e'p) PWIA/T+SCX/Full."""
    # PWIA: proton-lead only
    m_p = (pwia["lead_type"] == PROTON) & cuts_mask_pwia
    # T+SCX: all leads, reweighted
    tscx_w = tscx_weight_eep(pwia)
    m_t = cuts_mask_pwia
    # Full: post-FSI proton-lead
    m_f = (fsi["lead_type"] == PROTON) & cuts_mask_fsi
    return [
        (pwia[var_key][m_p], pwia["weight"][m_p], "pwia"),
        (pwia[var_key][m_t], pwia["weight"][m_t] * tscx_w[m_t], "tscx"),
        (fsi[var_key][m_f],  fsi["weight"][m_f], "full"),
    ]


def _collect_eepp(pwia, fsi, var_key, cuts_mask_pwia, cuts_mask_fsi):
    """Collect (values, weights, style_key) for (e,e'pp) PWIA/T+SCX/Full."""
    rec_pw = cuts_mask_pwia & (pwia["prec"] > SRC_CUTS["precoil_min"])
    rec_fs = cuts_mask_fsi  & (fsi["prec"]  > SRC_CUTS["precoil_min"])
    # PWIA: pp pairs only
    m_p = (pwia["lead_type"] == PROTON) & (pwia["rec_type"] == PROTON) & rec_pw
    # T+SCX: all pairs, reweighted
    tscx_w = tscx_weight_eepp(pwia)
    m_t = rec_pw
    # Full: post-FSI both protons
    m_f = (fsi["lead_type"] == PROTON) & (fsi["rec_type"] == PROTON) & rec_fs
    return [
        (pwia[var_key][m_p], pwia["weight"][m_p], "pwia"),
        (pwia[var_key][m_t], pwia["weight"][m_t] * tscx_w[m_t], "tscx"),
        (fsi[var_key][m_f],  fsi["weight"][m_f], "full"),
    ]


def _plot_normalized(ax, datasets, bins, xlabel="", title="", logy=False,
                     ylabel="Counts", data_values=None):
    """Build histograms, area-normalize, draw.

    If `data_values` is provided, overlay raw data points with sqrt(N) errors
    and area-normalize all calculation curves to match the data integral
    (paper convention: "calculations are individually area normalized to the data").
    """
    # Compute data histogram first if available
    ref_area = None
    if data_values is not None and len(data_values) > 0:
        d_centers, d_counts, d_errors = hist_data_with_errors(data_values, bins)
        ref_area = np.sum(d_counts)

    # Calculation histograms
    hists = []
    for vals, wts, key in datasets:
        c, h = make_hist(vals, wts, bins)
        hists.append((c, h, key))
    hists = area_normalize(hists, ref_area=ref_area)

    for c, h, key in hists:
        draw_hist(ax, c, h, color=COLORS[key], linestyle=STYLES[key],
                  label=LABELS[key], linewidth=LINEWIDTHS.get(key, 1.5))

    # Overlay data points (paper style: black filled circles with error bars)
    if data_values is not None and len(data_values) > 0:
        ax.errorbar(d_centers, d_counts, yerr=d_errors,
                    fmt="o", ms=4, color=COLORS["data"], label=LABELS["data"],
                    elinewidth=0.8, capsize=0, zorder=10)

    ax.set_xlabel(xlabel)
    ax.set_ylabel(ylabel)
    if title:
        # Place channel label inside the axes, upper-right, like ROOT
        ax.text(0.95, 0.95, title, transform=ax.transAxes,
                ha="right", va="top", fontsize=11)
    if logy:
        ax.set_yscale("log")
    ax.legend(frameon=False, loc="best")


def figure2(pwia, fsi, outdir, clas=None):
    """Fig 2: Leading-proton momentum for 12C(e,e'p).
    Paper: x=[0.5, 2.5], left panel linear, right panel linear.
    Per paper: data is shown only on right panel (SRC cuts), with calculations
    individually area-normalized to data."""
    fig, axes = plt.subplots(1, 2, figsize=(10, 4.5))
    bins = np.linspace(0.5, 2.5, 60)

    no_cuts = np.ones(len(pwia["weight"]), dtype=bool)
    no_cuts_f = np.ones(len(fsi["weight"]), dtype=bool)
    src_p = apply_src_cuts(pwia)
    src_f = apply_src_cuts(fsi)

    for i, (label, cp, cf) in enumerate([
        ("All events", no_cuts, no_cuts_f),
        ("SRC cuts",   src_p,   src_f),
    ]):
        ds = _collect_eep(pwia, fsi, "pN", cp, cf)
        data_vals = clas["pLead_eep"] if (clas is not None and label == "SRC cuts") else None
        _plot_normalized(axes[i], ds, bins,
                         xlabel=r"$p_{\rm Lead}$ [GeV/c]",
                         title=rf"$^{{12}}$C(e,e'p) — {label}",
                         data_values=data_vals)
        axes[i].set_xlim(0.5, 2.5)

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig2_pLead_eep.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig2_pLead_eep.png")


def figure3(pwia, fsi, outdir, clas=None):
    """Fig 3: Lead (top) and recoil (bottom) proton momentum for 12C(e,e'pp).
    Paper: lead x=[0.5,2.5], recoil x=[0.3,1.0], all linear."""
    fig, axes = plt.subplots(2, 2, figsize=(10, 8))
    bins_lead = np.linspace(0.5, 2.5, 60)
    bins_rec  = np.linspace(0.38, 1.0, 50)

    no_cuts = np.ones(len(pwia["weight"]), dtype=bool)
    no_cuts_f = np.ones(len(fsi["weight"]), dtype=bool)
    src_p = apply_src_cuts(pwia)
    src_f = apply_src_cuts(fsi)

    for col, (label, cp, cf) in enumerate([
        ("All events", no_cuts, no_cuts_f),
        ("SRC cuts",   src_p,   src_f),
    ]):
        ds_lead = _collect_eepp(pwia, fsi, "pN", cp, cf)
        ds_rec  = _collect_eepp(pwia, fsi, "prec", cp, cf)
        d_lead = clas["pLead_eepp"] if (clas is not None and label == "SRC cuts") else None
        d_rec  = clas["pRec_eepp"]  if (clas is not None and label == "SRC cuts") else None
        _plot_normalized(axes[0, col], ds_lead, bins_lead,
                         xlabel=r"$p_{\rm Lead}$ [GeV/c]",
                         title=rf"$^{{12}}$C(e,e'pp) — {label}",
                         data_values=d_lead)
        _plot_normalized(axes[1, col], ds_rec, bins_rec,
                         xlabel=r"$p_{\rm Recoil}$ [GeV/c]",
                         data_values=d_rec)
        axes[0, col].set_xlim(0.5, 2.5)
        axes[1, col].set_xlim(0.38, 1.0)

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig3_pLead_pRec_eepp.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig3_pLead_pRec_eepp.png")


def figure4(pwia, fsi, outdir, clas=None):
    """Fig 4: Missing momentum for (e,e'p) and (e,e'pp).
    Paper: x=[0.4,1.0], left=log y, right=log y."""
    fig, axes = plt.subplots(2, 2, figsize=(10, 8))
    bins = np.linspace(0.4, 1.0, 50)

    no_cuts = np.ones(len(pwia["weight"]), dtype=bool)
    no_cuts_f = np.ones(len(fsi["weight"]), dtype=bool)
    src_p = apply_src_cuts(pwia)
    src_f = apply_src_cuts(fsi)

    for col, (label, cp, cf) in enumerate([
        ("All events", no_cuts, no_cuts_f),
        ("SRC cuts",   src_p,   src_f),
    ]):
        ds_eep = _collect_eep(pwia, fsi, "pmiss", cp, cf)
        d_pm_eep = clas["pmiss_eep"] if (clas is not None and label == "SRC cuts") else None
        _plot_normalized(axes[0, col], ds_eep, bins, logy=True,
                         xlabel=r"$p_{\rm Miss}$ [GeV/c]",
                         title=rf"$^{{12}}$C(e,e'p) — {label}",
                         data_values=d_pm_eep)
        ds_eepp = _collect_eepp(pwia, fsi, "pmiss", cp, cf)
        d_pm_eepp = clas["pmiss_eepp"] if (clas is not None and label == "SRC cuts") else None
        _plot_normalized(axes[1, col], ds_eepp, bins, logy=True,
                         xlabel=r"$p_{\rm Miss}$ [GeV/c]",
                         title=rf"$^{{12}}$C(e,e'pp) — {label}",
                         data_values=d_pm_eepp)
        for row in range(2):
            axes[row, col].set_xlim(0.4, 1.0)

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig4_pmiss.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig4_pmiss.png")


def figure5(pwia, fsi, outdir, clas=None):
    """Fig 5: (e,e'pp)/(e,e'p) ratio vs p_miss after SRC cuts.
    Paper: x=[0.4,1.0], y=[0,0.2], linear.

    Note: Without (e,e'p) data this can't compute the data ratio. The CLAS
    file we have only contains (e,e'pp) events. We'd need a separate
    (e,e'p) data file to compute the ratio. Skipping data overlay for fig5.
    """
    fig, ax = plt.subplots(figsize=(6, 5))

    bins = np.linspace(0.4, 1.0, 14)
    centers = 0.5 * (bins[:-1] + bins[1:])
    src = apply_src_cuts

    for d, dname in [(pwia, "pwia"), (fsi, "full")]:
        if dname == "pwia":
            m_eep = select_eep(d) & src(d)
            h_eep, _ = np.histogram(d["pmiss"][m_eep], bins=bins,
                                    weights=d["weight"][m_eep])
            m_eepp = ((d["lead_type"] == PROTON) & (d["rec_type"] == PROTON)
                      & src(d) & (d["prec"] > SRC_CUTS["precoil_min"]))
            h_eepp, _ = np.histogram(d["pmiss"][m_eepp], bins=bins,
                                     weights=d["weight"][m_eepp])
        else:
            m_eep = select_eep(d) & src(d)
            h_eep, _ = np.histogram(d["pmiss"][m_eep], bins=bins,
                                    weights=d["weight"][m_eep])
            m_eepp = (select_eepp(d) & src(d)
                      & (d["prec"] > SRC_CUTS["precoil_min"]))
            h_eepp, _ = np.histogram(d["pmiss"][m_eepp], bins=bins,
                                     weights=d["weight"][m_eepp])

        ratio = np.divide(h_eepp, h_eep, out=np.zeros_like(h_eepp, dtype=float),
                          where=h_eep > 0)
        ax.plot(centers, ratio,
                color=COLORS[dname], linestyle=STYLES[dname],
                label=LABELS[dname], linewidth=LINEWIDTHS.get(dname, 1.5))

    # T+SCX ratio
    d = pwia
    tscx_eep = tscx_weight_eep(d)
    tscx_eepp = tscx_weight_eepp(d)
    m_all = src(d)
    h_eep_t, _ = np.histogram(d["pmiss"][m_all], bins=bins,
                               weights=d["weight"][m_all] * tscx_eep[m_all])
    m_rec = m_all & (d["prec"] > SRC_CUTS["precoil_min"])
    h_eepp_t, _ = np.histogram(d["pmiss"][m_rec], bins=bins,
                                weights=d["weight"][m_rec] * tscx_eepp[m_rec])
    ratio_t = np.divide(h_eepp_t, h_eep_t, out=np.zeros_like(h_eepp_t, dtype=float),
                        where=h_eep_t > 0)
    ax.plot(centers, ratio_t,
            color=COLORS["tscx"], linestyle=STYLES["tscx"],
            label=LABELS["tscx"], linewidth=LINEWIDTHS["tscx"])

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


def figure6(pwia, fsi, outdir, clas=None):
    """Fig 6: CM momentum components for 12C(e,e'pp).
    Paper: pcm_x,y in [-0.5,0.5], pcm_z in [-0.2,0.8], |pcm| in [0,0.8]."""
    fig, axes = plt.subplots(2, 4, figsize=(16, 7))

    components = [
        (r"$p_{c.m.}^x$ [GeV/c]", "pcm_x", np.linspace(-0.5, 0.5, 50)),
        (r"$p_{c.m.}^y$ [GeV/c]", "pcm_y", np.linspace(-0.5, 0.5, 50)),
        (r"$p_{c.m.}^z$ [GeV/c]", "pcm_z", np.linspace(-0.2, 0.8, 50)),
        (r"$|p_{c.m.}|$ [GeV/c]", "pcm_mag", np.linspace(0.0, 0.8, 50)),
    ]

    no_cuts = np.ones(len(pwia["weight"]), dtype=bool)
    no_cuts_f = np.ones(len(fsi["weight"]), dtype=bool)
    src_p = apply_src_cuts(pwia)
    src_f = apply_src_cuts(fsi)

    for row, (label, cp, cf) in enumerate([
        ("All events", no_cuts, no_cuts_f),
        ("SRC cuts",   src_p,   src_f),
    ]):
        for col_idx, (comp_label, comp_key, bins) in enumerate(components):
            ds = _collect_eepp(pwia, fsi, comp_key, cp, cf)
            title = rf"$^{{12}}$C(e,e'pp) — {label}" if col_idx == 0 else ""
            data_vals = clas[comp_key + "_eepp"] if (clas is not None and label == "SRC cuts") else None
            _plot_normalized(axes[row, col_idx], ds, bins,
                             xlabel=comp_label, title=title,
                             data_values=data_vals)

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig6_pcm_components.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig6_pcm_components.png")


def figure7(pwia, fsi, outdir, clas=None):
    """Fig 7: Relative momentum for 12C(e,e'pp).
    Paper: x=[0.2,1.0]."""
    fig, axes = plt.subplots(1, 2, figsize=(10, 4.5))
    bins = np.linspace(0.2, 1.0, 50)

    no_cuts = np.ones(len(pwia["weight"]), dtype=bool)
    no_cuts_f = np.ones(len(fsi["weight"]), dtype=bool)
    src_p = apply_src_cuts(pwia)
    src_f = apply_src_cuts(fsi)

    for col, (label, cp, cf) in enumerate([
        ("All events", no_cuts, no_cuts_f),
        ("SRC cuts",   src_p,   src_f),
    ]):
        ds = _collect_eepp(pwia, fsi, "prel_mag", cp, cf)
        d_pr = clas["prel_mag_eepp"] if (clas is not None and label == "SRC cuts") else None
        _plot_normalized(axes[col], ds, bins,
                         xlabel=r"$p_{\rm REL}$ [GeV/c]",
                         title=rf"$^{{12}}$C(e,e'pp) — {label}",
                         data_values=d_pr)
        axes[col].set_xlim(0.2, 1.0)

    fig.tight_layout()
    fig.savefig(os.path.join(outdir, "fig7_prel_eepp.png"), dpi=200)
    plt.close(fig)
    print("  Saved fig7_prel_eepp.png")


# --- Placeholder figures (need MF generator / CLAS data) ---

def figure8(pwia, fsi, outdir):
    """Fig 8: CM momentum — GCF vs Mean-Field (PLACEHOLDER)."""
    # TODO: requires mean-field (Fermi gas) event sample
    print("  [SKIP] fig8 — needs mean-field generator")


def figure9(pwia, fsi, outdir):
    """Fig 9: theta(p_miss, q) — GCF vs Mean-Field (PLACEHOLDER)."""
    # TODO: requires mean-field (Fermi gas) event sample
    print("  [SKIP] fig9 — needs mean-field generator")


def figure10(pwia, fsi, outdir):
    """Fig 10: (e,e'pp)/(e,e'p) ratio — GCF vs MF (PLACEHOLDER)."""
    # TODO: requires mean-field (Fermi gas) event sample
    print("  [SKIP] fig10 — needs mean-field generator")


# ===================================================================
#  Effective transparency summary (text result from paper)
# ===================================================================

def print_effective_transparencies(pwia, fsi):
    """Compute and print effective transparencies (paper page 4-5).

    Defined as: T_eff = N_events(FSI or T+SCX) / N_events(PWIA)
    for events passing SRC selection cuts.
    """
    src = apply_src_cuts

    # PWIA
    m_eep_pwia = select_eep(pwia) & src(pwia)
    m_eepp_pwia = ((pwia["lead_type"] == PROTON) & (pwia["rec_type"] == PROTON)
                   & src(pwia) & (pwia["prec"] > SRC_CUTS["precoil_min"]))
    w_eep_pwia = pwia["weight"][m_eep_pwia].sum()
    w_eepp_pwia = pwia["weight"][m_eepp_pwia].sum()

    # Full FSI
    m_eep_fsi = select_eep(fsi) & src(fsi)
    m_eepp_fsi = (select_eepp(fsi) & src(fsi)
                  & (fsi["prec"] > SRC_CUTS["precoil_min"]))
    w_eep_fsi = fsi["weight"][m_eep_fsi].sum()
    w_eepp_fsi = fsi["weight"][m_eepp_fsi].sum()

    # T+SCX
    tscx_eep_w = tscx_weight_eep(pwia)
    tscx_eepp_w = tscx_weight_eepp(pwia)
    m_src = src(pwia)
    w_eep_tscx = (pwia["weight"][m_src] * tscx_eep_w[m_src]).sum()
    m_rec = m_src & (pwia["prec"] > SRC_CUTS["precoil_min"])
    w_eepp_tscx = (pwia["weight"][m_rec] * tscx_eepp_w[m_rec]).sum()

    print("\n" + "="*50)
    print("  Effective Transparencies")
    print("="*50)
    print(f"  {'Channel':<12} {'T+SCX':>10} {'Full':>10}   (paper: T+SCX / Full)")
    print(f"  {'(e,e\'p)':<12} {w_eep_tscx/w_eep_pwia:>10.3f} {w_eep_fsi/w_eep_pwia:>10.3f}   (paper: 0.61  / 0.58)")
    print(f"  {'(e,e\'pp)':<12} {w_eepp_tscx/w_eepp_pwia:>10.3f} {w_eepp_fsi/w_eepp_pwia:>10.3f}   (paper: 0.83  / 0.73)")
    print("="*50 + "\n")


# ===================================================================
#  Main
# ===================================================================

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--pwia", default="events_2N_pwia_501.root",
                        help="PWIA ROOT file")
    parser.add_argument("--fsi", default="events_2N_fsi_501.root",
                        help="Full FSI ROOT file")
    parser.add_argument("--outdir", default="natalie_paper_plots",
                        help="Output directory for plots")
    parser.add_argument("--ebeam", type=float, default=5.01,
                        help="Beam energy [GeV]")
    parser.add_argument("--clas-data", default="SRC_e2p_C_GoodRuns_coulomb.root",
                        help="CLAS data file (12C(e,e'pp), already SRC-cut)")
    args = parser.parse_args()

    os.makedirs(args.outdir, exist_ok=True)

    print(f"Loading PWIA: {args.pwia}")
    pwia = load_tree(args.pwia)
    print(f"  {len(pwia['weight'])} events loaded")

    print(f"Loading FSI:  {args.fsi}")
    fsi = load_tree(args.fsi)
    print(f"  {len(fsi['weight'])} events loaded")

    print("Computing kinematics...")
    compute_kinematics(pwia, Ebeam=args.ebeam)
    compute_kinematics(fsi, Ebeam=args.ebeam)

    print(f"Loading CLAS data: {args.clas_data}")
    clas = load_clas_data(args.clas_data)
    if clas is not None:
        print(f"  {clas['n_events']} raw data events loaded")
        print(f"  {clas['n_after_eep']} pass (e,e'p) SRC cuts")
        print(f"  {clas['n_after_eepp']} pass (e,e'pp) SRC cuts")
    else:
        print("  WARNING: CLAS data file not found, plots will have no data overlay")

    print_effective_transparencies(pwia, fsi)

    print(f"Generating plots in {args.outdir}/")
    figure2(pwia, fsi, args.outdir, clas=clas)
    figure3(pwia, fsi, args.outdir, clas=clas)
    figure4(pwia, fsi, args.outdir, clas=clas)
    figure5(pwia, fsi, args.outdir, clas=clas)
    figure6(pwia, fsi, args.outdir, clas=clas)
    figure7(pwia, fsi, args.outdir, clas=clas)
    figure8(pwia, fsi, args.outdir)
    figure9(pwia, fsi, args.outdir)
    figure10(pwia, fsi, args.outdir)

    print("\nDone.")


if __name__ == "__main__":
    main()
