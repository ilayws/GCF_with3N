#include "QEGeneratorFSI.hh"
#include "constants.hh"
#include "helpers.hh"
#include "fsi/GenieFSIHelpers.hh"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <TMath.h>

using namespace std;

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

  fsi::ResolveGenieXMLPath();
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
  fLeadPreFSI = vLead_target;
  fRecPreFSI  = vRec_target;
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
  const TLorentzVector x4_src = fsi::SampleSRCPosition(fA, myRand);

  // If either nucleon is absorbed (no stable nucleon descendant), kill the event.
  if (lead_type == pCode || lead_type == nCode) {
    if (!fsi::ApplyGenieFSIToNucleon(A_transport, Z_transport, lead_type, vLead_target, x4_src, myRand, 0, fLastFSISecondaries, fFSIModel)) {
      weight = 0.;
      return;
    }
  }
  if (rec_type == pCode || rec_type == nCode) {
    if (!fsi::ApplyGenieFSIToNucleon(A_transport, Z_transport, rec_type, vRec_target, x4_src, myRand, 1, fLastFSISecondaries, fFSIModel)) {
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
