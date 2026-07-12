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
    fZ(Z)
{
  fsi::ResolveGenieXMLPath();
}

QEGeneratorFSI_3N::~QEGeneratorFSI_3N() {}

void QEGeneratorFSI_3N::SetTargetNucleus(int A, int Z)
{
  QEGenerator_3N::SetTargetNucleus(A, Z);  // validates + sets kinematic mA/mAm3
  fA = A;
  fZ = Z;
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
  fN1Absorbed = false;
  fN2Absorbed = false;
  fN3Absorbed = false;

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

  // Transport the three outgoing nucleons through a SHARED, depleting remnant
  // in a single GENIE call.  Previously each nucleon was transported through
  // its own GHepRecord with an undepleted A-3 medium, which overestimated FSI
  // by ignoring the fact that nucleon 1's absorption depletes the nucleus
  // seen by nucleons 2 and 3.  GENIE's Intranuke2018::TransportHadrons iterates
  // over all kIStHadronInTheNucleus particles in one record while sharing
  // fRemnA/fRemnZ across them.
  std::vector<fsi::FSIInputNucleon> fsi_inputs;
  fsi_inputs.reserve(3);
  auto push = [&](int pdg, const TLorentzVector &p4, int role) {
    if (pdg != pCode && pdg != nCode) return;
    fsi::FSIInputNucleon in;
    in.pdg = pdg; in.p4 = p4; in.x4 = x4_src; in.parentRole = role;
    fsi_inputs.push_back(in);
  };
  push(N1_type, v1, 0);
  push(N2_type, v2, 1);
  push(N3_type, v3, 2);

  std::vector<fsi::FSIOutputNucleon> fsi_outputs;
  if (fIndependentFSI) {
    // Independent mode: each nucleon gets its own GENIE record and sees the
    // full undepleted A-3 remnant, regardless of what happens to the others.
    fsi_outputs.resize(fsi_inputs.size());
    for (size_t i = 0; i < fsi_inputs.size(); ++i) {
      int pdg = fsi_inputs[i].pdg;
      TLorentzVector p4 = fsi_inputs[i].p4;
      fsi_outputs[i].survived =
        fsi::ApplyGenieFSIToNucleon(A_res, Z_res, pdg, p4,
                                    fsi_inputs[i].x4, fRand,
                                    fsi_inputs[i].parentRole, fSec, fFSIModel);
      fsi_outputs[i].pdg = pdg;
      fsi_outputs[i].p4  = p4;
    }
  } else {
    fsi::ApplyGenieFSIToNucleons(A_res, Z_res,
                                  fsi_inputs, fsi_outputs,
                                  fRand, fSec, fFSIModel);
  }

  // Demux outputs back to N1/N2/N3 in the same order they were pushed.
  //
  // Absorption of one (or more) legs no longer kills the event: the
  // primary-vertex GCF cross section is still valid, the surviving legs are
  // real observable nucleons, and the secondaries are still in fSec. The
  // absorbed flag records that the ORIGINAL nucleon ceased to exist in the
  // cascade (fate = abs/cmp), but the experiment only sees the final state:
  // if the absorption ejected a nucleon, the detector would reconstruct THAT
  // as the leg. So the leg's saved momentum becomes the leading nucleon
  // ejecta of that leg (removed from fSec so multiplicity counts don't
  // double-count it); only if no nucleon ejecta exists is the leg zeroed.
  auto promote = [&](int role, int &pdg_out, TLorentzVector &p4_out) -> bool {
    int best = -1; double bestP = -1.;
    for (size_t i = 0; i < fSec.size(); ++i) {
      if (fSec[i].parentRole != role) continue;
      if (fSec[i].pdg != pCode && fSec[i].pdg != nCode) continue;
      if (fSec[i].p4.P() > bestP) { bestP = fSec[i].p4.P(); best = (int)i; }
    }
    if (best < 0) return false;
    pdg_out = fSec[best].pdg;
    p4_out  = fSec[best].p4;
    fSec.erase(fSec.begin() + best);
    return true;
  };
  size_t out_idx = 0;
  auto pop = [&](int &pdg_out, TLorentzVector &p4_out, bool &absorbed, int role) {
    absorbed = false;
    if (pdg_out != pCode && pdg_out != nCode) return; // not sent through FSI
    if (out_idx >= fsi_outputs.size() || !fsi_outputs[out_idx].survived) {
      absorbed = true;
      if (!promote(role, pdg_out, p4_out)) {
        pdg_out = 0;
        p4_out = TLorentzVector(0., 0., 0., 0.);
      }
    } else {
      pdg_out = fsi_outputs[out_idx].pdg;
      p4_out = fsi_outputs[out_idx].p4;
    }
    ++out_idx;
  };
  pop(N1_type, v1, fN1Absorbed, 0);
  pop(N2_type, v2, fN2Absorbed, 1);
  pop(N3_type, v3, fN3Absorbed, 2);

  // No post-cascade Pauli veto: GENIE's cascade already Pauli-blocks each
  // collision internally (blocked outcomes throw INukeException and the
  // fate/kinematics are rerolled), so the surviving final state needs no
  // further momentum cut.
#else
  (void)v1; (void)v2; (void)v3;
#endif
}
