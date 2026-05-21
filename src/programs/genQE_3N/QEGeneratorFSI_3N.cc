#include "QEGeneratorFSI_3N.hh"
#include "constants.hh"
#include <iostream>

QEGeneratorFSI_3N::QEGeneratorFSI_3N(double E, eNCrossSection *thisCS,
                                     int thisU, TRandom3 *thisRand,
                                     int A, int Z)
  : QEGenerator_3N(E, thisCS, thisU, thisRand),
    fRand(thisRand),
    fDoFSI(true),
    fFSIModel(kHN2018),
    fA(A),
    fZ(Z),
    fFermiMomentum(0.220)  // GeV/c, matches the 2N default for 12C
{
  fsi::ResolveGenieXMLPath();
}

QEGeneratorFSI_3N::~QEGeneratorFSI_3N() {}

void QEGeneratorFSI_3N::SetFSITuning(double fermiMom_MeV)
{
  fFermiMomentum = fermiMom_MeV * 1.e-3;
}

void QEGeneratorFSI_3N::SetTargetNucleus(int A, int Z)
{
  QEGenerator_3N::SetTargetNucleus(A, Z);  // validates + sets kinematic mA/mAm3
  fA = A;
  fZ = Z;
}

bool QEGeneratorFSI_3N::CheckPauliBlocking(const TLorentzVector &p4) const
{
  return (p4.P() < fFermiMomentum);
}

void QEGeneratorFSI_3N::generate_event_with_FSI(double &weight,
                                                int &N1_type, int &N2_type, int &N3_type,
                                                TLorentzVector &vk_target,
                                                TLorentzVector &vLead_target,
                                                TLorentzVector &v2_target,
                                                TLorentzVector &v3_target,
                                                TLorentzVector &vAm3_target,
                                                bool use_CM)
{
  // Generate the bare 3N event using the parent class.
  QEGenerator_3N::generate_event(weight, N1_type, N2_type, N3_type,
                                 vk_target, vLead_target, v2_target,
                                 v3_target, vAm3_target, use_CM);

  fSec.clear();
  fPreLead = vLead_target;
  fPreN2   = v2_target;
  fPreN3   = v3_target;

  if (fDoFSI && weight > 0.) {
    ApplyFSI(N1_type, N2_type, N3_type,
             vLead_target, v2_target, v3_target, weight);
  }
}

void QEGeneratorFSI_3N::ApplyFSI(int &N1_type, int &N2_type, int &N3_type,
                                 TLorentzVector &v1,
                                 TLorentzVector &v2,
                                 TLorentzVector &v3,
                                 double &weight)
{
  if (weight <= 0.) return;

  const int N1_in = N1_type, N2_in = N2_type, N3_in = N3_type;

  // Residual nucleus: remove the three knocked-out nucleons.
  const int removedP = (N1_in == pCode ? 1 : 0)
                     + (N2_in == pCode ? 1 : 0)
                     + (N3_in == pCode ? 1 : 0);
  const int removedN = (N1_in == nCode ? 1 : 0)
                     + (N2_in == nCode ? 1 : 0)
                     + (N3_in == nCode ? 1 : 0);
  const int Z_res = fZ - removedP;
  const int N_res = (fA - fZ) - removedN;
  const int A_res = Z_res + N_res;

  // GENIE intranuke is not validated for A<3; skip FSI rather than risk NaN.
  if (A_res < 3 || Z_res < 0 || N_res < 0) {
    return;
  }

  if (A_res < 7) {
    static bool warned = false;
    if (!warned) {
      std::cerr << "Warning: GENIE intranuke applied to light residual nucleus "
                << "(A_res=" << A_res << "). GENIE is validated for A>6; "
                << "results for A_res<7 should be treated with caution."
                << std::endl;
      warned = true;
    }
  }

#ifdef USE_FSI
  // Single shared position for the three nucleons of the SRC triplet:
  // rho^3-weighted (one factor of rho per nucleon at the same point).
  const TLorentzVector x4_src = fsi::SampleSRCPosition3N(fA, fRand);

  if (N1_type == pCode || N1_type == nCode) {
    if (!fsi::ApplyGenieFSIToNucleon(A_res, Z_res, N1_type, v1,
                                     x4_src, fRand, 0, fSec, fFSIModel)) {
      weight = 0.; return;
    }
  }
  if (N2_type == pCode || N2_type == nCode) {
    if (!fsi::ApplyGenieFSIToNucleon(A_res, Z_res, N2_type, v2,
                                     x4_src, fRand, 1, fSec, fFSIModel)) {
      weight = 0.; return;
    }
  }
  if (N3_type == pCode || N3_type == nCode) {
    if (!fsi::ApplyGenieFSIToNucleon(A_res, Z_res, N3_type, v3,
                                     x4_src, fRand, 2, fSec, fFSIModel)) {
      weight = 0.; return;
    }
  }

  if (CheckPauliBlocking(v1) ||
      CheckPauliBlocking(v2) ||
      CheckPauliBlocking(v3)) {
    weight = 0.;
  }
#else
  (void)v1; (void)v2; (void)v3;
#endif
}
