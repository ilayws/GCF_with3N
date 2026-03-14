#include "QEGeneratorFSI.hh"
#include "constants.hh"
#include "helpers.hh"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
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

using namespace std;

#ifdef USE_FSI
namespace {
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

// ---------------------------------------------------------------------------
// SampleSRCPosition — sample the SRC pair position inside the nucleus
//
// The probability of finding an SRC pair at radius r goes as
//   P(r) dr ∝ ρ²(r) × 4π r² dr
// (pair density scales as the square of the single-nucleon density).
// We rejection-sample r from ρ²(r)·r² using GENIE's nuclear density,
// then choose an isotropic direction.
//
// The envelope f_max and R_max are cached: recomputed only when A changes.
TLorentzVector SampleSRCPosition(int A, TRandom3 *rnd)
{
  static int    cached_A    = -1;
  static double cached_Rmax = 0.;
  static double cached_fmax = 0.;

  if (A != cached_A) {
    cached_A    = A;
    cached_Rmax = 2.5 * 1.4 * TMath::Power(A, 1./3.); // fm
    cached_fmax = 0.;
    for (int i = 1; i <= 200; i++) {
      double r   = cached_Rmax * i / 200.;
      double rho = genie::utils::nuclear::Density(r, A);
      double f   = rho * rho * r * r;
      if (f > cached_fmax) cached_fmax = f;
    }
    cached_fmax *= 1.01; // small safety margin
  }

  double r;
  do {
    r = cached_Rmax * rnd->Rndm();
    double rho = genie::utils::nuclear::Density(r, A);
    double f = rho * rho * r * r;
    if (rnd->Rndm() * cached_fmax <= f) break;
  } while (true);

  double cosTheta = 2. * rnd->Rndm() - 1.;
  double sinTheta = TMath::Sqrt(1. - cosTheta * cosTheta);
  double phi = 2. * TMath::Pi() * rnd->Rndm();
  return TLorentzVector(r * sinTheta * TMath::Cos(phi),
                        r * sinTheta * TMath::Sin(phi),
                        r * cosTheta,
                        0.);
}

// ---------------------------------------------------------------------------
bool ApplyGenieFSIToNucleon(int A, int Z,
                             int &nucleon_type,
                             TLorentzVector &p4,
                             const TLorentzVector &x4,
                             TRandom3 *rnd,
                             int parentRole,
                             std::vector<QEGeneratorFSI::FSISecondary> &secondaries,
                             FSIModel model)
{
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
  const int pdg_tgt = genie::pdg::IonPdgCode(A, Z);
  const double m_tgt = mN * static_cast<double>(A);

  // Build event record for lepton-nucleus mode so that GENIE skips
  // GenerateVertex() and uses our pre-set SRC position instead.
  //
  // Slot 0: fake electron probe  → triggers kGMdLeptonNucleus so that
  //         GENIE skips GenerateVertex() and trusts our pre-set position.
  //         Never stepped (lepton-mode only steps kIStHadronInTheNucleus).
  //         Energy set very high to avoid tripping hA energy sanity checks.
  // Slot 1: target nucleus       → used by SetTrackingRadius
  // Slot 2: remnant nucleus      → used by TransportHadrons for fRemnA/fRemnZ
  // Slot 3: nucleon to transport → carries our sampled position x4

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

  // Follow the GENIE parent-daughter chain to find the actual end of the
  // cascade track (the transported particle after all rescatterings), rather
  // than picking the highest-energy nucleon which can mis-identify
  // knocked-out target nucleons as the transported particle.
  const int transported_idx = 3;

  // Walk the cascade chain: at each interaction the continuation particle
  // is the first daughter of the current particle.  We follow FirstDaughter
  // until we reach a stable final-state particle (the cascade endpoint).
  int chain_idx = transported_idx;
  while (true) {
    genie::GHepParticle* cp = evrec.Particle(chain_idx);
    if (!cp) break;
    if (cp->Status() == genie::kIStStableFinalState) break;
    int fd = cp->FirstDaughter();
    if (fd < 0) break;
    chain_idx = fd;
  }

  // Collect all stable descendants for secondary export.
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

  // Validate the chain endpoint: must be a stable nucleon.
  int best_idx = -1;
  {
    genie::GHepParticle* ep = evrec.Particle(chain_idx);
    if (ep && ep->Status() == genie::kIStStableFinalState &&
        (ep->Pdg() == pCode || ep->Pdg() == nCode)) {
      best_idx = chain_idx;
    }
  }

  // Fallback: if the chain endpoint is not a nucleon (e.g. absorbed then
  // re-emitted as pion), pick the highest-energy stable nucleon descendant.
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

  // Export additional stable descendants X (exclude the selected outgoing
  // transported nucleon used to update lead/recoil state).
  for (int idx : stable_descendant_indices) {
    if (idx == best_idx) continue;
    genie::GHepParticle* sp = evrec.Particle(idx);
    if (!sp || !sp->P4()) continue;

    QEGeneratorFSI::FSISecondary sec;
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
}
} // anonymous namespace
#endif

QEGeneratorFSI::QEGeneratorFSI(double E, gcfNucleus * thisInfo, eNCrossSection * thisCS, TRandom3 * thisRand) : gcfGenerator(thisInfo, thisRand)
{
  myCS = thisCS;

  Ebeam = E;
  vbeam.SetXYZ(0.,0.,Ebeam);
  vbeam_target.SetXYZT(0.,0.,Ebeam,Ebeam);

  QSqmin = 1.0;
  QSqmax = 10.0;
  phikmin = 0.;
  phikmax = 2.*M_PI;

  // FSI defaults
  doFSI        = true;
  fFSIModel    = kHN2018;
  fA           = thisInfo->get_A();
  fZ           = thisInfo->get_Z();
  fFermiMomentum = 0.220; // GeV/c — typical for medium/heavy nuclei (C-12)

#ifdef USE_FSI
  // Ensure GENIE can locate both general XML config files and tune-specific
  // ModelConfiguration/TuneGeneratorList XML files when running outside
  // setup scripts.
  const char *genie_home = std::getenv("GENIE");
  const char *gxml_env = std::getenv("GXMLPATH");
  if (genie_home) {
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
  }
#endif
}

QEGeneratorFSI::~QEGeneratorFSI()
{
}

void QEGeneratorFSI::SetFSITuning(double fermiMom_MeV)
{
  fFermiMomentum = fermiMom_MeV * 1.e-3; // convert MeV/c -> GeV/c
}

bool QEGeneratorFSI::CheckPauliBlocking(const TLorentzVector &p4) const
{
  return (p4.P() < fFermiMomentum);
}

// ---------------------------------------------------------------------------
// ApplyElasticScatter
// Perform a proper 2-body elastic scatter of p4 off a target nucleon at rest.
// Conserves 4-momentum exactly. Scattering angle is sampled isotropically in
// the CM frame — the same approximation used in GENIE's ElasHN when the
// nucleon-nucleon angular distribution is not separately parameterised.
// On return p4 contains the updated 4-momentum of the scattered nucleon.
void QEGeneratorFSI::ApplyElasticScatter(TLorentzVector &p4)
{
  // Target nucleon at rest in the lab frame
  TLorentzVector p4_target(0., 0., 0., mN);

  // Total 4-momentum
  TLorentzVector p_tot = p4 + p4_target;

  // Boost vector to the CM frame
  TVector3 beta = p_tot.BoostVector();

  // Boost the incident nucleon to CM
  TLorentzVector p4_cm = p4;
  p4_cm.Boost(-beta);

  double p_cm = p4_cm.P();
  double E_cm = p4_cm.E();

  // Sample an isotropic direction in the CM frame
  double cosTheta = 2.0 * myRand->Rndm() - 1.0;
  double sinTheta = TMath::Sqrt(1.0 - cosTheta * cosTheta);
  double phi      = 2.0 * TMath::Pi() * myRand->Rndm();

  TVector3 p_cm_new(p_cm * sinTheta * TMath::Cos(phi),
                    p_cm * sinTheta * TMath::Sin(phi),
                    p_cm * cosTheta);

  TLorentzVector p4_cm_new(p_cm_new, E_cm);

  // Boost back to the lab frame
  p4_cm_new.Boost(beta);
  p4 = p4_cm_new;
}

// ---------------------------------------------------------------------------
// ApplyFSI — main FSI dispatcher
//
// Uses GENIE's intranuclear cascade (hN or hA mode) to transport each
// outgoing nucleon through the residual nucleus. Pauli-blocks the final
// state if either nucleon momentum < p_Fermi.
void QEGeneratorFSI::ApplyFSI(int &lead_type, int &rec_type,
                               TLorentzVector &vLead_target,
                               TLorentzVector &vRec_target,
                               double &weight)
{
  fLastFSIEventStats = FSIEventStats();
  fLastFSISecondaries.clear();
  if (!doFSI || weight <= 0.) return;

  const int lead_type_in = lead_type;
  const int rec_type_in = rec_type;

  // Residual nucleus after removing the struck/knocked-out SRC pair.
  const int removedP = (lead_type_in == pCode ? 1 : 0) + (rec_type_in == pCode ? 1 : 0);
  const int removedN = (lead_type_in == nCode ? 1 : 0) + (rec_type_in == nCode ? 1 : 0);
  const int Z_res = fZ - removedP;
  const int N_res = (fA - fZ) - removedN;
  const int A_res = Z_res + N_res;

  // No meaningful residual medium left to traverse.  Skip FSI for A_res<3:
  // GENIE's intranuke cascade is not validated for A<3 (produces NaN in
  // cross-section splines), and a ≤2-nucleon residual provides negligible
  // rescattering in any case.
  if (A_res < 3 || Z_res < 0 || N_res < 0) {
    return;
  }

  // Light residual nucleus warning (one-time)
  if (A_res < 7) {
    static bool warned = false;
    if (!warned) {
      std::cerr << "Warning: GENIE intranuke applied to light residual nucleus "
                << "(A_res=" << A_res << "). GENIE is validated for A>6; "
                << "results for A_res<7 should be treated with caution." << std::endl;
      warned = true;
    }
  }

  // Always transport through the actual A-2 residual nucleus.
  const int A_transport = A_res;
  const int Z_transport = Z_res;

#ifdef USE_FSI
  const TLorentzVector vLead_before = vLead_target;
  const TLorentzVector vRec_before  = vRec_target;

  // Sample position once for the SRC pair (both nucleons originate from the
  // same location).  Weighted by rho^2 of the FULL nucleus, since the pair
  // was formed before knockout.
  const TLorentzVector x4_src = SampleSRCPosition(fA, myRand);

  // If either nucleon is absorbed (no stable nucleon descendant), kill the event.
  if (lead_type == pCode || lead_type == nCode) {
    if (!ApplyGenieFSIToNucleon(A_transport, Z_transport, lead_type, vLead_target, x4_src, myRand, 0, fLastFSISecondaries, fFSIModel)) {
      weight = 0.;
      return;
    }
  }
  if (rec_type == pCode || rec_type == nCode) {
    if (!ApplyGenieFSIToNucleon(A_transport, Z_transport, rec_type, vRec_target, x4_src, myRand, 1, fLastFSISecondaries, fFSIModel)) {
      weight = 0.;
      return;
    }
  }

  fLastFSIEventStats.leadChargeExchange =
      ((lead_type_in == pCode || lead_type_in == nCode) &&
       (lead_type == pCode || lead_type == nCode) &&
       (lead_type != lead_type_in));
  fLastFSIEventStats.recoilChargeExchange =
      ((rec_type_in == pCode || rec_type_in == nCode) &&
       (rec_type == pCode || rec_type == nCode) &&
       (rec_type != rec_type_in));

  int nLeadNonNucleonSec = 0;
  int nRecNonNucleonSec = 0;
  for (const auto &sec : fLastFSISecondaries) {
    const bool isNucleon = (sec.pdg == pCode || sec.pdg == nCode);
    if (sec.parentRole == 0 && !isNucleon) nLeadNonNucleonSec++;
    if (sec.parentRole == 1 && !isNucleon) nRecNonNucleonSec++;
  }

  const double leadDeltaP = (vLead_target.Vect() - vLead_before.Vect()).Mag();
  const double recDeltaP  = (vRec_target.Vect()  - vRec_before.Vect()).Mag();
  const bool leadChanged = (leadDeltaP > 1e-6);
  const bool recChanged  = (recDeltaP  > 1e-6);

  // "Elastic-like": momentum changed (interaction occurred), no charge exchange,
  // and no non-nucleon secondaries (pions, etc.).  In GENIE's hN cascade an
  // elastic N-N scatter always ejects the struck nucleon as a secondary, so
  // requiring zero secondaries would make this condition unreachable.
  fLastFSIEventStats.leadElasticLike =
      !fLastFSIEventStats.leadChargeExchange &&
      (nLeadNonNucleonSec == 0) &&
      leadChanged;
  fLastFSIEventStats.recoilElasticLike =
      !fLastFSIEventStats.recoilChargeExchange &&
      (nRecNonNucleonSec == 0) &&
      recChanged;

  fLastFSIEventStats.nSecondaries = static_cast<int>(fLastFSISecondaries.size());
  for (const auto &sec : fLastFSISecondaries) {
    if (sec.pdg == 211) {
      fLastFSIEventStats.nPiPlus++;
      fLastFSIEventStats.nPionsTotal++;
    } else if (sec.pdg == -211) {
      fLastFSIEventStats.nPiMinus++;
      fLastFSIEventStats.nPionsTotal++;
    } else if (sec.pdg == 111) {
      fLastFSIEventStats.nPiZero++;
      fLastFSIEventStats.nPionsTotal++;
    }
  }

  if (CheckPauliBlocking(vLead_target) || CheckPauliBlocking(vRec_target)) {
    weight = 0.;
  }
#endif
}

void QEGeneratorFSI::generate_event(double &weight, int &lead_type, int &rec_type, TLorentzVector& vk_target, TLorentzVector &vLead_target, TLorentzVector &vRec_target, TLorentzVector &vAm2_target)
{
  double Estar;
  generate_event(weight,lead_type,rec_type,vk_target,vLead_target,vRec_target,vAm2_target,Estar);
}

void QEGeneratorFSI::generate_event(double &weight, int &lead_type, int &rec_type, TLorentzVector& vk_target, TLorentzVector &vLead_target, TLorentzVector &vRec_target, TLorentzVector &vAm2_target, double &Estar)
{
  TVector3 vRel_target;
  TLorentzVector q_target;
  generate_event(weight,lead_type,rec_type,vk_target,vLead_target,vRec_target,vAm2_target,vRel_target,q_target,Estar);
}

void QEGeneratorFSI::generate_event(double &weight, int &lead_type, int &rec_type, TLorentzVector& vk_target, TLorentzVector &vLead_target, TLorentzVector &vRec_target, TLorentzVector &vAm2_target, TVector3 &vRel_target, TLorentzVector &q_target, double &Estar)
{
  fLastFSIEventStats = FSIEventStats();
  fLastFSISecondaries.clear();
  weight = 1.;

  lead_type = (myRand->Rndm() > 0.5) ? pCode:nCode;
  rec_type = (myRand->Rndm() > 0.5) ? pCode:nCode;
  weight *= 4.;

  double mAm2 = get_mAm2(lead_type, rec_type, Estar);

  TVector3 v1, vRec;
  decay_function(weight, lead_type, rec_type, v1, vRec);

  if (weight <= 0.) return;

  TVector3 vAm2 = - v1 - vRec;
  double EAm2 = sqrt(vAm2.Mag2() + sq(mAm2));
  vAm2_target.SetVect(vAm2);
  vAm2_target.SetT(EAm2);

  vRel_target = 0.5*(v1 - vRec);

  double Erec = sqrt(sq(mN) + vRec.Mag2());
  vRec_target.SetVect(vRec);
  vRec_target.SetT(Erec);

  double E1 = mA - EAm2 - Erec;
  TLorentzVector v1_target(v1,E1);
  double p1_minus = E1 - v1.Z();

  TVector3 vbeam_int = vbeam;

  if(doCoul) {
    double deltaECoul = calcCoulombEnergy();
    vbeam_int.SetMag(vbeam_int.Mag() + deltaECoul);
  }

  vbeam_int = (doRad ? radiateElectron(vbeam_int) : vbeam_int);
  double Ebeam_int = vbeam_int.Mag();
  TLorentzVector vbeam_int_target(vbeam_int,Ebeam_int);

  double QSqmax_kine = 2*Ebeam_int*p1_minus;
  if (QSqmax_kine < QSqmin) { weight=0.; return; }

  double QSq = QSqmin + (min(QSqmax,QSqmax_kine) - QSqmin)*myRand->Rndm();
  double phik = phikmin + (phikmax - phikmin)*myRand->Rndm();
  weight *= (min(QSqmax,QSqmax_kine) - QSqmin) * (phikmax - phikmin);

  double k_minus = QSq/(2*Ebeam_int);
  double plead_minus = p1_minus - k_minus;
  if (plead_minus < 0.) { weight=0.; return; }

  double p1_plus = E1 + v1.Z();
  double virt = v1_target.Mag2() - sq(mN);

  double A = k_minus/p1_minus;
  double c = A*(p1_plus*k_minus - 2*Ebeam_int*plead_minus - virt);

  double delta_phi = phik - v1.Phi();
  double p1_perp = v1.Perp();
  double y = p1_perp*cos(delta_phi);
  double b = -2*A*y;
  double D = sq(b) - 4*c;
  if (D < 0.) { weight=0.; return; }

  double k_perp = (- b + sqrt(D))/2.;

  if (sqrt(D) < -b) {
    weight *= 2.;
    if (myRand->Rndm() > 0.5) k_perp = (- b - sqrt(D))/2.;
  }

  double k_plus = sq(k_perp)/k_minus;
  double kz = (k_plus - k_minus)/2.;
  TVector3 vk_int(k_perp*cos(phik),k_perp*sin(phik),kz);
  double Ek_int = vk_int.Mag();
  TLorentzVector vk_int_target;
  vk_int_target.SetVect(vk_int);
  vk_int_target.SetT(Ek_int);

  q_target = vbeam_int_target - vk_int_target;

  vLead_target = v1_target + vbeam_int_target - vk_int_target;
  TVector3 vLead = vLead_target.Vect();
  double Elead = vLead_target.T();

  TVector3 vk = (doRad ? radiateElectron(vk_int) : vk_int);
  double Ek = vk.Mag();
  vk_target.SetVect(vk);
  vk_target.SetT(Ek);

  double J = 2.*Ebeam_int*Ek_int*fabs(1. - (v1.Z() + y * tan(vk.Theta()/2.) + Ebeam_int - Ek_int)/Elead);
  weight *= 1./J;

  weight *= myCS->sigma_eN(Ebeam_int, vk_int, vLead, (lead_type==pCode));

  if (doRad) weight *= radiationFactor(Ebeam, Ek_int, QSq);

  if (doFSI && weight > 0.) {
    ApplyFSI(lead_type, rec_type, vLead_target, vRec_target, weight);
  }

  if (doCoul) {
    double deltaECoul = calcCoulombEnergy();
    coulombCorrection(vk_target, -deltaECoul);
    if (lead_type == pCode) coulombCorrection(vLead_target, deltaECoul);
    if (rec_type == pCode) coulombCorrection(vRec_target, deltaECoul);
  }
}

void QEGeneratorFSI::generate_event_lightcone(double &weight, int &lead_type, int &rec_type, TLorentzVector& vk_target, TLorentzVector &vLead_target, TLorentzVector &vRec_target, TLorentzVector &vAm2_target)
{
  double Estar;
  generate_event_lightcone(weight,lead_type,rec_type,vk_target,vLead_target,vRec_target,vAm2_target,Estar);
}

void QEGeneratorFSI::generate_event_lightcone(double &weight, int &lead_type, int &rec_type, TLorentzVector& vk_target, TLorentzVector &vLead_target, TLorentzVector &vRec_target, TLorentzVector &vAm2_target, double &Estar)
{
  fLastFSIEventStats = FSIEventStats();
  fLastFSISecondaries.clear();
  weight = 1.;

  lead_type = (myRand->Rndm() > 0.5) ? pCode:nCode;
  rec_type = (myRand->Rndm() > 0.5) ? pCode:nCode;
  weight *= 4.;

  double mAm2 = get_mAm2(lead_type, rec_type, Estar);

  double alpha1, alphaRec;
  TVector2 v1_perp, vRec_perp;
  decay_function_lc(weight, lead_type, rec_type, alpha1, v1_perp, alphaRec, vRec_perp);

  if (weight <= 0.) return;

  double alphaCM = alpha1 + alphaRec;
  double alphaAm2 = Anum - alphaCM;
  TVector2 vAm2_perp = -1.*v1_perp - vRec_perp;

  TVector3 vbeam_int = vbeam;

  if(doCoul) {
    double deltaE = calcCoulombEnergy();
    vbeam_int.SetMag(vbeam_int.Mag() + deltaE);
  }

  vbeam_int = (doRad ? radiateElectron(vbeam_int) : vbeam_int);
  double Ebeam_int = vbeam_int.Mag();
  TLorentzVector vbeam_int_target(vbeam_int,Ebeam_int);

  double QSq = QSqmin + (QSqmax - QSqmin)*myRand->Rndm();
  double phik = phikmin + (phikmax - phikmin)*myRand->Rndm();
  weight *= (QSqmax - QSqmin) * (phikmax - phikmin);

  double p1_minus = mbar*alpha1;
  double pRec_minus = mbar*alphaRec;
  double pAm2_minus = mbar*alphaAm2;
  double pRec_plus = (sq(mN) + vRec_perp.Mod2())/pRec_minus;
  double pAm2_plus = (sq(mAm2) + vAm2_perp.Mod2())/pAm2_minus;
  if (mAm2 == 0) pAm2_plus = 0.;
  double p1_plus = mA - pRec_plus - pAm2_plus;
  double virt = p1_plus*p1_minus- v1_perp.Mod2() - sq(mN);

  double E1 = 0.5*(p1_plus + p1_minus);
  double p1_z = 0.5*(p1_plus - p1_minus);
  double A = 0.5*(QSq - virt);
  double a = p1_plus*p1_minus;
  double b = -2*E1*A;
  double c = sq(A) - QSq*sq(p1_z);
  double D = sq(b) - 4*a*c;

  if (D<0.) { weight = 0.; return; }

  double omega1 = (-b - sqrt(D))/(2.*a);
  double omega2 = (-b + sqrt(D))/(2.*a);
  double omega;

  bool omega1Valid = (omega1>=0.) && (omega1<=Ebeam_int) && ((omega1*E1-A)*p1_z > 0);
  bool omega2Valid = (omega2>=0.) && (omega2<=Ebeam_int) && ((omega2*E1-A)*p1_z > 0);

  if ((!omega1Valid) && (!omega2Valid)) { weight=0.; return; }
  if (!omega1Valid) omega = omega2;
  else if (!omega2Valid) omega = omega1;
  else { omega = (gRandom->Rndm()>0.5)? omega1 : omega2; weight *= 2.; }

  double Ek_int = Ebeam_int - omega;
  double cosThetak = 1. - QSq/(2.*Ebeam_int*Ek_int);

  if (fabs(cosThetak) > 1.) { weight=0.; return; }

  double sinThetak = sqrt(1. - sq(cosThetak));
  double kz = Ek_int*cosThetak;
  double kperp = Ek_int*sinThetak;
  TVector3 vk_int(kperp*cos(phik),kperp*sin(phik),kz);

  TLorentzVector vk_int_target;
  vk_int_target.SetVect(vk_int);
  vk_int_target.SetT(Ek_int);

  TVector3 vq = vbeam_int - vk_int;
  double rot_phi = vq.Phi();
  double rot_theta = vq.Theta();

  TVector3 v1(v1_perp.X(),v1_perp.Y(),p1_z);
  v1.RotateY(rot_theta);
  v1.RotateZ(rot_phi);
  TLorentzVector v1_target(v1,E1);

  double ERec = 0.5*(pRec_plus + pRec_minus);
  double pRec_z = 0.5*(pRec_plus - pRec_minus);
  TVector3 vRec(vRec_perp.X(),vRec_perp.Y(),pRec_z);
  vRec.RotateY(rot_theta);
  vRec.RotateZ(rot_phi);
  vRec_target.SetVect(vRec);
  vRec_target.SetT(ERec);

  double EAm2 = 0.5*(pAm2_plus + pAm2_minus);
  double pAm2_z = 0.5*(pAm2_plus - pAm2_minus);
  TVector3 vAm2(vAm2_perp.X(),vAm2_perp.Y(),pAm2_z);
  vAm2.RotateY(rot_theta);
  vAm2.RotateZ(rot_phi);
  vAm2_target.SetVect(vAm2);
  vAm2_target.SetT(EAm2);

  vLead_target = v1_target + vbeam_int_target - vk_int_target;
  TVector3 vLead = vLead_target.Vect();
  double Elead = vLead_target.T();

  TVector3 vk = (doRad ? radiateElectron(vk_int) : vk_int);
  double Ek = vk.Mag();
  vk_target.SetVect(vk);
  vk_target.SetT(Ek);

  double J = 2.*Ebeam_int*Ek_int*fabs(1. - (vLead.Dot(vq)*omega)/(vq.Mag2()*Elead));
  weight *= 1./J;

  weight *= myCS->sigma_eN(Ebeam_int, vk_int, vLead, (lead_type==pCode));

  if (doRad) weight *= radiationFactor(Ebeam, Ek_int, QSq);

  if (doFSI && weight > 0.) {
    ApplyFSI(lead_type, rec_type, vLead_target, vRec_target, weight);
  }

  if (doCoul) {
    double deltaECoul = calcCoulombEnergy();
    coulombCorrection(vk_target, -deltaECoul);
    if (lead_type == pCode) coulombCorrection(vLead_target, deltaECoul);
    if (rec_type == pCode) coulombCorrection(vRec_target, deltaECoul);
  }
}
