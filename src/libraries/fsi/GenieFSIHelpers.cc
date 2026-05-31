#include "GenieFSIHelpers.hh"
#include "constants.hh"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <TMath.h>

#ifdef USE_FSI
#include "Framework/GHEP/GHepRecord.h"
#include "Framework/GHEP/GHepParticle.h"
#include "Framework/GHEP/GHepStatus.h"
#include "Framework/Numerical/RandomGen.h"
#include "Framework/ParticleData/PDGUtils.h"
#include "Framework/Interaction/Interaction.h"
#include "Framework/Interaction/InitialState.h"
#include "Physics/HadronTransport/HNIntranuke2018.h"
#include "Physics/HadronTransport/HAIntranuke2018.h"
#include "Physics/NuclearState/NuclearUtils.h"
#endif

namespace {
#ifdef USE_FSI
bool PathListContainsFile(const std::string &pathList, const std::string &filename)
{
  std::stringstream ss(pathList);
  std::string dir;
  while (std::getline(ss, dir, ':')) {
    if (dir.empty()) continue;
    std::ifstream f((dir + "/" + filename).c_str());
    if (f.good()) return true;
  }
  return false;
}

// Rejection-sample r from the radial weight w(r) = rho^n(r) * r^2 inside the
// nucleus; return a 4-position with that |r| and an isotropic direction.
// n=2 -> 2N (pair) sampling, n=3 -> 3N (triplet) sampling.
TLorentzVector SampleRadialPosition(int A, int n, TRandom3 *rnd,
                                    int &cached_A_io,
                                    double &cached_Rmax_io,
                                    double &cached_fmax_io)
{
  if (A != cached_A_io) {
    cached_A_io = A;
    cached_Rmax_io = 2.5 * 1.4 * TMath::Power(A, 1./3.); // fm
    cached_fmax_io = 0.;
    for (int i = 1; i <= 200; i++) {
      double r   = cached_Rmax_io * i / 200.;
      double rho = genie::utils::nuclear::Density(r, A);
      double f   = TMath::Power(rho, n) * r * r;
      if (f > cached_fmax_io) cached_fmax_io = f;
    }
    cached_fmax_io *= 1.01; // small safety margin
  }

  double r;
  do {
    r = cached_Rmax_io * rnd->Rndm();
    double rho = genie::utils::nuclear::Density(r, A);
    double f = TMath::Power(rho, n) * r * r;
    if (rnd->Rndm() * cached_fmax_io <= f) break;
  } while (true);

  double cosTheta = 2. * rnd->Rndm() - 1.;
  double sinTheta = TMath::Sqrt(1. - cosTheta * cosTheta);
  double phi = 2. * TMath::Pi() * rnd->Rndm();
  return TLorentzVector(r * sinTheta * TMath::Cos(phi),
                        r * sinTheta * TMath::Sin(phi),
                        r * cosTheta,
                        0.);
}
#endif // USE_FSI
} // namespace

namespace fsi {

void ResolveGenieXMLPath()
{
#ifdef USE_FSI
  const char *genie_home = std::getenv("GENIE");
  const char *gxml_env = std::getenv("GXMLPATH");
  if (!genie_home) return;

  const std::string config_dir = std::string(genie_home) + "/config";
  const std::string default_tune_dir = config_dir + "/G18_10a";

  bool has_model = false;
  bool has_tune_list = false;
  if (gxml_env && std::string(gxml_env).size() > 0) {
    const std::string gxml = gxml_env;
    has_model = PathListContainsFile(gxml, "ModelConfiguration.xml");
    has_tune_list = PathListContainsFile(gxml, "TuneGeneratorList.xml");
  }

  if (!has_model || !has_tune_list) {
    const std::string fixed_gxml = default_tune_dir + ":" + config_dir;
    setenv("GXMLPATH", fixed_gxml.c_str(), 1);
  }
#endif
}

TLorentzVector SampleSRCPosition(int A, TRandom3 *rnd)
{
#ifdef USE_FSI
  static int    cached_A    = -1;
  static double cached_Rmax = 0.;
  static double cached_fmax = 0.;
  return SampleRadialPosition(A, 2, rnd, cached_A, cached_Rmax, cached_fmax);
#else
  (void)A; (void)rnd;
  return TLorentzVector(0., 0., 0., 0.);
#endif
}

TLorentzVector SampleSRCPosition3N(int A, TRandom3 *rnd)
{
#ifdef USE_FSI
  static int    cached_A    = -1;
  static double cached_Rmax = 0.;
  static double cached_fmax = 0.;
  return SampleRadialPosition(A, 3, rnd, cached_A, cached_Rmax, cached_fmax);
#else
  (void)A; (void)rnd;
  return TLorentzVector(0., 0., 0., 0.);
#endif
}

TLorentzVector SampleMFPosition(int A, TRandom3 *rnd)
{
#ifdef USE_FSI
  static int    cached_A    = -1;
  static double cached_Rmax = 0.;
  static double cached_fmax = 0.;
  return SampleRadialPosition(A, 1, rnd, cached_A, cached_Rmax, cached_fmax);
#else
  (void)A; (void)rnd;
  return TLorentzVector(0., 0., 0., 0.);
#endif
}

double NuclearDensity(int A, double r_fm)
{
#ifdef USE_FSI
  return genie::utils::nuclear::Density(r_fm, A);
#else
  (void)A; (void)r_fm;
  return -1.;
#endif
}

bool ApplyGenieFSIToNucleon(int A_residual, int Z_residual,
                            int &nucleon_type,
                            TLorentzVector &p4,
                            const TLorentzVector &x4,
                            TRandom3 *rnd,
                            int parentRole,
                            std::vector<FSISecondary> &secondaries,
                            FSIModel model)
{
#ifdef USE_FSI
  if (!(nucleon_type == pCode || nucleon_type == nCode)) return false;

  const int pdg_in = nucleon_type;

  genie::RandomGen::Instance()->SetSeed(rnd->Integer(0x7fffffff));

  static genie::HNIntranuke2018 hN2018("genie::HNIntranuke2018");
  static genie::HAIntranuke2018 hA2018("genie::HAIntranuke2018");
  static bool initialized = false;
  if (!initialized) {
    hN2018.Configure("Default");
    hA2018.Configure("Default");
    initialized = true;
  }

  genie::GHepRecord evrec;
  const int pdg_tgt = genie::pdg::IonPdgCode(A_residual, Z_residual);
  const double m_tgt = mN * static_cast<double>(A_residual);

  // Build event record for lepton-nucleus mode so that GENIE skips
  // GenerateVertex() and uses our pre-set SRC position instead.
  //
  // Slot 0: fake electron probe  -> triggers kGMdLeptonNucleus so that
  //         GENIE skips GenerateVertex() and trusts our pre-set position.
  //         Never stepped (lepton-mode only steps kIStHadronInTheNucleus).
  //         Energy set very high to avoid tripping hA energy sanity checks.
  // Slot 1: target nucleus       -> used by SetTrackingRadius
  // Slot 2: remnant nucleus      -> used by TransportHadrons for fRemnA/fRemnZ
  // Slot 3: nucleon to transport -> carries our sampled position x4

  evrec.AddParticle(11, genie::kIStInitialState,
                    -1, -1, -1, -1,
                    0., 0., 100., 100.,
                    0., 0., 0., 0.);

  evrec.AddParticle(pdg_tgt, genie::kIStInitialState,
                    -1, -1, 2, 2,
                    0., 0., 0., m_tgt,
                    0., 0., 0., 0.);

  evrec.AddParticle(pdg_tgt, genie::kIStStableFinalState,
                    1, -1, -1, -1,
                    0., 0., 0., m_tgt,
                    0., 0., 0., 0.);

  evrec.AddParticle(pdg_in, genie::kIStHadronInTheNucleus,
                    0, -1, -1, -1,
                    p4.Px(), p4.Py(), p4.Pz(), p4.E(),
                    x4.X(), x4.Y(), x4.Z(), x4.T());

  if (model == kHN2018) {
    hN2018.ProcessEventRecord(&evrec);
  } else {
    hA2018.ProcessEventRecord(&evrec);
  }

  const int transported_idx = 3;

  // Walk the cascade chain via FirstDaughter until a stable particle is found.
  int chain_idx = transported_idx;
  while (true) {
    genie::GHepParticle* cp = evrec.Particle(chain_idx);
    if (!cp) break;
    if (cp->Status() == genie::kIStStableFinalState) break;
    int fd = cp->FirstDaughter();
    if (fd < 0) break;
    chain_idx = fd;
  }

  std::vector<int>* daughters = evrec.GetStableDescendants(transported_idx);
  std::vector<int> stable_descendant_indices;
  if (daughters) {
    for (int idx : *daughters) {
      genie::GHepParticle* sp = evrec.Particle(idx);
      if (!sp) continue;
      if (sp->Status() != genie::kIStStableFinalState) continue;
      stable_descendant_indices.push_back(idx);
    }
    delete daughters;
  }

  int best_idx = -1;
  {
    genie::GHepParticle* ep = evrec.Particle(chain_idx);
    if (ep && ep->Status() == genie::kIStStableFinalState &&
        (ep->Pdg() == pCode || ep->Pdg() == nCode)) {
      best_idx = chain_idx;
    }
  }

  // Fallback: highest-energy stable nucleon descendant.
  if (best_idx < 0) {
    double best_E = -1.;
    for (int idx : stable_descendant_indices) {
      genie::GHepParticle* sp = evrec.Particle(idx);
      if (!sp) continue;
      const int pdg = sp->Pdg();
      if (pdg != pCode && pdg != nCode) continue;
      if (sp->E() > best_E) {
        best_E = sp->E();
        best_idx = idx;
      }
    }
  }

  for (int idx : stable_descendant_indices) {
    if (idx == best_idx) continue;
    genie::GHepParticle* sp = evrec.Particle(idx);
    if (!sp || !sp->P4()) continue;

    FSISecondary sec;
    sec.parentRole = parentRole;
    sec.pdg = sp->Pdg();
    sec.p4 = *(sp->P4());
    sec.rescatterCode = sp->RescatterCode();
    secondaries.push_back(sec);
  }

  if (best_idx < 0) return false;

  genie::GHepParticle* best = evrec.Particle(best_idx);
  if (!best || !best->P4()) return false;

  nucleon_type = best->Pdg();
  p4 = *(best->P4());
  return true;
#else
  (void)A_residual; (void)Z_residual; (void)nucleon_type; (void)p4;
  (void)x4; (void)rnd; (void)parentRole; (void)secondaries; (void)model;
  return false;
#endif
}

} // namespace fsi
