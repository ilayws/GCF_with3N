#ifndef __QE_GENERATOR_FSI_3N_H__
#define __QE_GENERATOR_FSI_3N_H__

#include "QEGenerator_3N.hh"
#include "fsi/GenieFSIHelpers.hh"
#include "TLorentzVector.h"
#include "TRandom3.h"
#include <vector>

// QEGeneratorFSI_3N — 3N quasi-elastic generator with GENIE FSI.
//
// Wraps QEGenerator_3N. After the parent samples the (N1, N2, N3) final state
// it transports each of the three outgoing nucleons through GENIE's
// intranuclear cascade (hN or hA mode), using a single shared SRC-triplet
// position sampled from rho^3(r). Pauli blocking is handled inside GENIE's
// cascade (blocked collisions are rerolled); no additional post-FSI momentum
// cut is applied here.
//
// The transport medium is the residual nucleus (A_res = A - 3,
// Z_res = Z - n_protons_in_triplet).

class QEGeneratorFSI_3N : public QEGenerator_3N
{
public:
  QEGeneratorFSI_3N(double E, eNCrossSection *thisCS, int thisU,
                    TRandom3 *thisRand,
                    int A = 12, int Z = 6);
  ~QEGeneratorFSI_3N();

  // Generate one event. Identical signature to QEGenerator_3N::generate_event,
  // but applies FSI to the three outgoing nucleons before returning. The
  // pre-FSI 4-momenta are cached and accessible via GetPreFSI*().
  void generate_event_with_FSI(double &weight,
                               int &N1_type, int &N2_type, int &N3_type,
                               TLorentzVector &vk_target,
                               TLorentzVector &vLead_target,
                               TLorentzVector &v2_target,
                               TLorentzVector &v3_target,
                               TLorentzVector &vAm3_target,
                               bool use_CM);

  void EnableFSI(bool e = true)              { fDoFSI = e; }
  void SetFSIModel(FSIModel m)               { fFSIModel = m; }

  // Independent-FSI mode: transport each nucleon through its own GENIE
  // record with an undepleted A-3 remnant (the pre-rewrite behaviour),
  // instead of the default shared depleting remnant in a single record.
  void SetIndependentFSI(bool i = true)      { fIndependentFSI = i; }
  bool IndependentFSI() const                { return fIndependentFSI; }

  // Override of QEGenerator_3N::SetTargetNucleus: updates both the
  // kinematic mA / mAm3 (via the parent) and the FSI residual nucleus
  // (A, Z used by ApplyFSI for GENIE transport).
  void SetTargetNucleus(int A, int Z);

  const TLorentzVector & GetPreFSILead() const { return fPreLead; }
  const TLorentzVector & GetPreFSIN2()   const { return fPreN2;   }
  const TLorentzVector & GetPreFSIN3()   const { return fPreN3;   }
  const std::vector<FSISecondary> & GetLastFSISecondaries() const { return fSec; }

  bool   FSIEnabled() const { return fDoFSI; }
  FSIModel CurrentFSIModel() const { return fFSIModel; }

  // Per-leg absorption flags from the last FSI call.
  //
  // True when GENIE's cascade produced no surviving nucleon descendant for
  // that leg (typically NN absorption). The event is NOT killed in that
  // case: the GCF primary cross section still applies and the surviving
  // legs / secondaries are still physically observable. Selection of
  // (e,e'pp) or (e,e'ppp) topologies must check these flags downstream.
  bool IsN1Absorbed() const { return fN1Absorbed; }
  bool IsN2Absorbed() const { return fN2Absorbed; }
  bool IsN3Absorbed() const { return fN3Absorbed; }

private:
  void ApplyFSI(int &N1_type, int &N2_type, int &N3_type,
                TLorentzVector &v1, TLorentzVector &v2, TLorentzVector &v3,
                double &weight);

  TRandom3  *fRand;          // mirrors parent's myRand for use here
  bool       fDoFSI;
  bool       fIndependentFSI = false;
  FSIModel   fFSIModel;
  int        fA;
  int        fZ;

  TLorentzVector fPreLead;
  TLorentzVector fPreN2;
  TLorentzVector fPreN3;
  std::vector<FSISecondary> fSec;
  bool fN1Absorbed = false;
  bool fN2Absorbed = false;
  bool fN3Absorbed = false;
};

#endif
