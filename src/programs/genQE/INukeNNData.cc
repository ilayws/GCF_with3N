// INukeNNData.cc
//
// Implements the GENIE intranuke physics without the full GENIE framework.
// Reads INukeHadroData2018's data files directly and interpolates with ROOT
// TSpline3 — the same cubic-spline method used by GENIE's Spline class.
//
// Physics references:
//   - NN cross sections:  Arndt et al. SAID PWA; Bystricky & Lehar (1981)
//   - NA fate fractions:  Mashnik et al. pFe INC simulation
//   Both are maintained by Steve Dytman (Pittsburgh) for GENIE.
//
// The interaction probability is computed as:
//   P = 1 - exp(-path / MFP)
// where
//   MFP = 1 / (rho_nuc * sigma_NN_eff)
//   sigma_NN_eff = <sigma_NN_free> * f_medium    (medium correction)
//   path = f_path * R0 * A^(1/3)
//   rho_nuc = nuclear density (A-dependent, see GetNuclearDensity_fm3)

#include "INukeNNData.hh"

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <algorithm>
#include <sstream>

#include <TMath.h>

INukeNNData* INukeNNData::fInstance = nullptr;

// Physical constants (all in MeV / fm)
namespace {
  const double kMN_MeV    = 938.92;  // average nucleon mass
  const double kR0_fm     = 1.20;    // nuclear radius parameter
  const double kRho0_fm3  = 0.170;   // nuclear saturation density
}

// ---------------------------------------------------------------------------
INukeNNData* INukeNNData::Instance(const std::string& dataDir)
{
  if (!fInstance) {
    fInstance = new INukeNNData();

    // Search for data files in priority order
    std::vector<std::string> searchPaths;

    if (!dataDir.empty())
      searchPaths.push_back(dataDir);

    const char* genie_env = std::getenv("GENIE");
    if (genie_env)
      searchPaths.push_back(std::string(genie_env)
                            + "/data/evgen/intranuke/tot_xsec");

    // Hardcoded development path – update if the Generator repo moves
    searchPaths.push_back(
      "/Users/ilay/Downloads/Generator-master"
      "/data/evgen/intranuke/tot_xsec");

    searchPaths.push_back("./intranuke_data");

    bool loaded = false;
    for (const auto& p : searchPaths) {
      if (fInstance->LoadData(p)) {
        std::cout << "[INukeNNData] Loaded GENIE intranuke data from "
                  << p << "\n";
        loaded = true;
        break;
      }
    }
    if (!loaded) {
      std::cerr << "[INukeNNData] WARNING: Could not load GENIE intranuke "
                   "data files.\n"
                << "  Falling back to built-in parameterisation.\n"
                << "  Set $GENIE or pass the data directory to "
                   "INukeNNData::Instance().\n";
    }
  }
  return fInstance;
}

// ---------------------------------------------------------------------------
INukeNNData::INukeNNData()
  : fSpElas(nullptr), fSpInel(nullptr), fSpCEx(nullptr),
    fSpAbs(nullptr),  fSpPiPro(nullptr),
    fSpPP_Tot(nullptr), fSpPN_Tot(nullptr), fSpNN_Tot(nullptr),
    fMediumCorr(0.30), fPathLengthScale(1.5), fIsLoaded(false)
{}

INukeNNData::~INukeNNData()
{
  delete fSpElas;   delete fSpInel;   delete fSpCEx;
  delete fSpAbs;    delete fSpPiPro;
  delete fSpPP_Tot; delete fSpPN_Tot; delete fSpNN_Tot;
}

// ---------------------------------------------------------------------------
bool INukeNNData::LoadData(const std::string& dir)
{
  // -------------------------------------------------------------------------
  // 1.  NA fate fractions  (intranuke-xsections-NA.dat)
  //
  //   Columns: KE(lab,MeV)  pA_tot  pA_elas  pA_inel  pA_cex  pA_abs  pA_pipro
  //
  //   All values are conditional fractions (sum to 1 for interacting nucleons)
  //   from Mashnik's INC simulation of p+56Fe, assumed A-independent here
  //   (same approximation GENIE uses in hN mode).
  // -------------------------------------------------------------------------
  {
    std::string fname = dir + "/intranuke-xsections-NA.dat";
    std::ifstream f(fname);
    if (!f.is_open()) return false;

    std::vector<double> ke, elas, inel, cex, abs_v, pipro;
    std::string line;
    while (std::getline(f, line)) {
      if (line.empty() || line[0] == '#') continue;
      double kv, tot, el, in, cx, ab, pp;
      if (std::sscanf(line.c_str(), "%lf %lf %lf %lf %lf %lf %lf",
                      &kv, &tot, &el, &in, &cx, &ab, &pp) == 7
          && kv > 0.) {
        ke.push_back(kv);
        elas.push_back(el); inel.push_back(in);
        cex.push_back(cx);  abs_v.push_back(ab); pipro.push_back(pp);
      }
    }
    if (ke.empty()) return false;

    int n = (int)ke.size();
    // "b1e1" = zero first derivative at both ends (natural spline boundary)
    fSpElas  = new TSpline3("elas",  ke.data(), elas.data(),  n, "b1e1", 0., 0.);
    fSpInel  = new TSpline3("inel",  ke.data(), inel.data(),  n, "b1e1", 0., 0.);
    fSpCEx   = new TSpline3("cex",   ke.data(), cex.data(),   n, "b1e1", 0., 0.);
    fSpAbs   = new TSpline3("abs",   ke.data(), abs_v.data(), n, "b1e1", 0., 0.);
    fSpPiPro = new TSpline3("pipro", ke.data(), pipro.data(), n, "b1e1", 0., 0.);
  }

  // -------------------------------------------------------------------------
  // 2.  NN total cross sections  (intranuke-xsections-NN2016.dat)
  //
  //   Columns: KE_CM(MeV)  pp_tot  pp_elas  pp_reac
  //                         pn_tot  pn_elas  pn_reac
  //                         nn_tot  nn_elas  nn_reac
  //                         [+ pp_cmp  pn_cmp  nn_cmp]
  //
  //   KE_CM is the CM-frame kinetic energy; we convert to lab KE (target at
  //   rest) so the splines are indexed the same way as the NA fractions.
  // -------------------------------------------------------------------------
  {
    std::string fname = dir + "/intranuke-xsections-NN2016.dat";
    std::ifstream f(fname);
    if (!f.is_open()) return false;

    std::vector<double> ke_lab, pp_tot, pn_tot, nn_tot;
    std::string line;
    while (std::getline(f, line)) {
      if (line.empty() || line[0] == '#') continue;
      double kecm, ppt, ppel, ppre, pnt, pnel, pnre, nnt, nnel, nnre;
      if (std::sscanf(line.c_str(),
                      "%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",
                      &kecm, &ppt, &ppel, &ppre,
                             &pnt, &pnel, &pnre,
                             &nnt, &nnel, &nnre) >= 10
          && kecm > 0. && ppt > 0. && pnt > 0.) {
        double kl = CMtoLabKE_MeV(kecm);
        if (kl > 0.) {
          ke_lab.push_back(kl);
          pp_tot.push_back(ppt);
          pn_tot.push_back(pnt);
          nn_tot.push_back(nnt);
        }
      }
    }
    if (ke_lab.empty()) return false;

    // Sort ascending in lab KE (data is already ordered in CM KE, and
    // CMtoLabKE is monotonically increasing, so ordering is preserved)
    int n = (int)ke_lab.size();
    fSpPP_Tot = new TSpline3("pp_tot", ke_lab.data(), pp_tot.data(), n);
    fSpPN_Tot = new TSpline3("pn_tot", ke_lab.data(), pn_tot.data(), n);
    fSpNN_Tot = new TSpline3("nn_tot", ke_lab.data(), nn_tot.data(), n);
  }

  fIsLoaded = true;
  return true;
}

// ---------------------------------------------------------------------------
// CM kinetic energy → lab kinetic energy for symmetric NN (target at rest):
//   s = 2*mN*(T_lab + 2*mN)
//   T_CM = sqrt(s) - 2*mN
//   => T_lab = (T_CM + 2*mN)^2 / (2*mN) - 2*mN
double INukeNNData::CMtoLabKE_MeV(double ke_cm_MeV)
{
  double sqrts = ke_cm_MeV + 2.0 * kMN_MeV;
  double T_lab  = (sqrts * sqrts) / (2.0 * kMN_MeV) - 2.0 * kMN_MeV;
  return TMath::Max(T_lab, 0.0);
}

// ---------------------------------------------------------------------------
// Nuclear density in fm^-3.
// For A >= 4 we use saturation density kRho0.
// For light nuclei (d, He-3) the density is much lower than saturation.
double INukeNNData::GetNuclearDensity_fm3(int A)
{
  if (A <= 1) return 0.0;
  if (A == 2) return 0.040;   // deuteron: large RMS radius (~2 fm)
  if (A == 3) return 0.095;   // He-3 / H-3
  // A >= 4: smooth approach to nuclear saturation density
  return kRho0_fm3 * (1.0 - TMath::Exp(-0.5 * (A - 3)));
}

// ---------------------------------------------------------------------------
// Average NN total cross section (mb) experienced by a nucleon of type pdg
// with lab kinetic energy ke_lab_MeV in nuclear matter (A, Z).
// Weighted over the mix of proton/neutron targets and corrected for
// Pauli blocking / nuclear medium effects by fMediumCorr.
double INukeNNData::GetNNAvgXSec_mb(int pdg, double ke_lab_MeV,
                                     int A, int Z) const
{
  double N = A - Z;

  if (!fIsLoaded || !fSpPP_Tot) {
    // Built-in fallback: rough asymptotic NN values
    if (ke_lab_MeV < 100.) return 150.;
    if (ke_lab_MeV < 300.) return  60.;
    return 40.;
  }

  // Clamp to the range covered by the splines
  double ke_lo = fSpPP_Tot->GetXmin();
  double ke_hi = fSpPP_Tot->GetXmax();
  double ke    = TMath::Max(TMath::Min(ke_lab_MeV, ke_hi), ke_lo);

  double sigma;
  if (pdg == 2212) {  // incident proton: scatter off Z protons and N neutrons
    double pp = TMath::Max(fSpPP_Tot->Eval(ke), 0.0);
    double pn = TMath::Max(fSpPN_Tot->Eval(ke), 0.0);
    sigma = (Z * pp + N * pn) / A;
  } else {            // incident neutron: np ≈ pn (isospin)
    double np = TMath::Max(fSpPN_Tot->Eval(ke), 0.0);
    double nn = TMath::Max(fSpNN_Tot->Eval(ke), 0.0);
    sigma = (Z * np + N * nn) / A;
  }

  // Apply nuclear-medium correction (Pauli blocking of intermediate states)
  return sigma * fMediumCorr;
}

// ---------------------------------------------------------------------------
double INukeNNData::GetInteractionProb(int pdg, double ke_lab_MeV,
                                        int A, int Z) const
{
  if (A <= 1) return 0.0;

  double R_fm     = kR0_fm * TMath::Power((double)A, 1.0/3.0);
  double path_fm  = fPathLengthScale * R_fm;
  double rho_fm3  = GetNuclearDensity_fm3(A);

  // Convert cross section: mb → fm²  (1 mb = 0.1 fm²)
  double sigma_fm2 = GetNNAvgXSec_mb(pdg, ke_lab_MeV, A, Z) * 0.1;
  if (sigma_fm2 < 1.e-10) return 0.0;

  double mfp_fm = 1.0 / (rho_fm3 * sigma_fm2);
  double prob   = 1.0 - TMath::Exp(-path_fm / mfp_fm);

  return TMath::Min(prob, 0.99);
}

// ---------------------------------------------------------------------------
INukeFateCode_t INukeNNData::SelectFate(int pdg, double ke_lab_MeV,
                                         int A, int Z,
                                         int nProtonsAvail, int nNeutronsAvail,
                                         TRandom3* rnd) const
{
  // Step 1 – does this nucleon interact at all while crossing the nucleus?
  if (rnd->Rndm() > GetInteractionProb(pdg, ke_lab_MeV, A, Z))
    return kINFateNoInteraction;

  // Step 2 – pick fate from GENIE's NA conditional fractions.
  // Clamp KE to the data range [50, 1000] MeV; outside that range the
  // splines would extrapolate and the fractions might leave [0,1].
  double ke  = TMath::Max(TMath::Min(ke_lab_MeV, 1000.0), 50.0);

  double f_elas = 0.35, f_cex = 0.12, f_abs = 0.25;  // fallback fractions

  if (fIsLoaded && fSpElas) {
    f_elas = TMath::Max(fSpElas ->Eval(ke), 0.0);
    f_cex  = TMath::Max(fSpCEx  ->Eval(ke), 0.0);
    // Absorption = nuclear absorption + pion production
    // (pion production means the nucleon is effectively lost as a free nucleon)
    f_abs  = TMath::Max(fSpAbs  ->Eval(ke)
                      + fSpPiPro->Eval(ke), 0.0);
  }

  // Suppress charge exchange if no suitable partner nucleon is available
  // (mirrors GENIE's FateWeight() / HadronFateHN() CEX availability check)
  if (pdg == 2212 && nNeutronsAvail < 1) f_cex = 0.;
  if (pdg == 2112 && nProtonsAvail  < 1) f_cex = 0.;

  double total = f_elas + f_cex + f_abs;
  if (total < 1.e-6) return kINFateNoInteraction;

  double r = rnd->Rndm() * total;
  if (r < f_elas)              return kINFateElastic;
  if (r < f_elas + f_cex)      return kINFateCEx;
  return kINFateAbsorption;
}
