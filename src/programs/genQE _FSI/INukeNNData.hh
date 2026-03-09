#ifndef __INUKE_NN_DATA_H__
#define __INUKE_NN_DATA_H__

// INukeNNData - Standalone interface to GENIE's intranuke physics data
//
// Replicates the physics core of GENIE's INukeHadroData2018 +
// HNIntranuke2018::HadronFateHN() without requiring the full GENIE framework.
// Reads the exact data files that GENIE's INukeHadroData2018 uses at runtime:
//
//   intranuke-fractions-NA2016.dat  — nucleon-nucleus conditional fate fractions
//                                     from Mashnik pFe INC simulation
//                                     columns: KE(MeV)  tot  inel  cex  abs  pipro  cmp
//                                     Note: NO separate 'elas' column; elastic is
//                                     the remainder  elas = tot - inel - cex - abs - pipro - cmp
//
//   intranuke-xsections-NN2014.dat  — NN total cross sections from
//                                     SAID Partial Wave Analysis (Arndt et al.)
//                                     + nn from Bystricky & Lehar (1981)
//                                     columns (CM KE): pp_tot pp_elas pp_reac
//                                                      pn_tot pn_elas pn_reac
//                                                      nn_tot nn_elas nn_reac
//                                                      pp_cmp pn_cmp  nn_cmp
//
// Data files are found via (in priority order):
//   1. Explicit path passed to Instance()
//   2. $GENIE/data/evgen/intranuke/tot_xsec/
//   3. $GINUKEHADRONDATA/tot_xsec/  (GENIE env override)
//   4. Hardcoded Generator-master development path (see INukeNNData.cc)
//   5. ./intranuke_data/
//
// If no data files are found a built-in fallback parameterisation is used
// with a warning. Physics follows GENIE hN-mode for nucleon FSI only.
//
// Units: kinetic energies in MeV, cross sections in mb, distances in fm.

#include "TRandom3.h"
#include "TSpline.h"
#include <string>

// FSI fate codes matching GENIE's INukeFateHN_t
enum INukeFateCode_t {
  kINFateNoInteraction = 0,  // nucleon exits nucleus without rescattering
  kINFateElastic       = 1,  // N+N → N+N (direction change, identity kept)
  kINFateCEx           = 2,  // N+N → N'+N' (p↔n conversion, ~isospin rotation)
  kINFateAbsorption    = 3,  // nucleon absorbed by nucleus → weight = 0
  kINFateInelastic     = 4   // quasi-elastic NN scatter: nucleon scatters and
                             // a second nucleon is knocked out of the nucleus
                             // (kIHNFtInelas in GENIE). Treated as elastic
                             // scatter of the primary nucleon here; the knocked-
                             // out partner is not tracked (consistent with how
                             // genQE accounts for the nuclear remnant).
};

class INukeNNData {
public:
  // Singleton access. Pass an explicit directory path on first call to
  // override the default search.
  static INukeNNData* Instance(const std::string& dataDir = "");

  // -----------------------------------------------------------------------
  // Main physics interface
  // -----------------------------------------------------------------------

  // Probability that a nucleon (pdg 2212=p, 2112=n) with lab kinetic energy
  // ke_lab_MeV traverses nucleus (A,Z) and undergoes at least one FSI
  // interaction. Uses NN2016 total cross sections + nuclear geometry.
  double GetInteractionProb(int pdg, double ke_lab_MeV, int A, int Z) const;

  // Select an FSI fate for a nucleon. Accounts for interaction probability
  // (returns kINFateNoInteraction if the nucleon escapes) and the conditional
  // fate fractions from GENIE's NA data.
  //
  // nProtonsAvail / nNeutronsAvail: remaining nuclear protons/neutrons
  // (used to suppress charge exchange when no suitable partner exists).
  INukeFateCode_t SelectFate(int pdg, double ke_lab_MeV,
                             int A, int Z,
                             int nProtonsAvail, int nNeutronsAvail,
                             TRandom3* rnd) const;

  // -----------------------------------------------------------------------
  // Tunable parameters (call before first use or after Instance())
  // -----------------------------------------------------------------------

  // Nuclear medium correction applied to free NN cross sections.
  // Accounts for Pauli blocking of intermediate states.
  // Default: 0.30  (calibrated to give ~40% interaction probability
  //                 for ~200 MeV nucleons in C-12)
  void SetMediumCorrFactor(double f)  { fMediumCorr = f;       }

  // Path-length multiplier relative to R = R0*A^(1/3).
  // 1.0 = from-center estimate; 2.0 = full diameter.
  // Default: 1.5  (intermediate, appropriate for pairs produced
  //               throughout the nuclear volume)
  void SetPathLengthScale(double s)   { fPathLengthScale = s;  }

  bool IsLoaded() const { return fIsLoaded; }

private:
  INukeNNData();
  ~INukeNNData();

  bool   LoadData(const std::string& dir);
  double GetNNAvgXSec_mb(int pdg, double ke_lab_MeV, int A, int Z) const;

  static double CMtoLabKE_MeV(double ke_cm_MeV);
  static double GetNuclearDensity_fm3(int A);

  // NA conditional fate fractions (from intranuke-fractions-NA2016.dat)
  // NB: NA2016 has NO separate 'elas' column; elastic = 1 - inel - cex - abs - pipro - cmp
  TSpline3* fSpInel;        // pA inelastic (quasi-elastic NN) fraction
  TSpline3* fSpCEx;         // pA charge-exchange fraction
  TSpline3* fSpAbs;         // pA absorption fraction
  TSpline3* fSpPiPro;       // pA pion-production fraction
  TSpline3* fSpCmp;         // pA compound-nucleus fraction
  TSpline3* fSpElasDerived; // pA elastic = tot - inel - cex - abs - pipro - cmp

  // NN total cross sections (mb; from intranuke-xsections-NN2014.dat, converted to lab KE)
  TSpline3* fSpPP_Tot;
  TSpline3* fSpPN_Tot;
  TSpline3* fSpNN_Tot;

  double fMediumCorr;      // default 0.30
  double fPathLengthScale; // default 1.5

  bool fIsLoaded;

  static INukeNNData* fInstance;
};

#endif
