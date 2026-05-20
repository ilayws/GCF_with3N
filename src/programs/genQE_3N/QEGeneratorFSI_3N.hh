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
// position sampled from rho^3(r). Pauli-blocking is applied post-FSI:
// the event is rejected (weight=0) if any post-FSI nucleon falls below the
// configured Fermi momentum.
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
  void SetFSITuning(double fermiMom_MeV);    // MeV/c -> GeV/c

  const TLorentzVector & GetPreFSILead() const { return fPreLead; }
  const TLorentzVector & GetPreFSIN2()   const { return fPreN2;   }
  const TLorentzVector & GetPreFSIN3()   const { return fPreN3;   }
  const std::vector<FSISecondary> & GetLastFSISecondaries() const { return fSec; }

  bool   FSIEnabled() const { return fDoFSI; }
  FSIModel CurrentFSIModel() const { return fFSIModel; }

private:
  void ApplyFSI(int &N1_type, int &N2_type, int &N3_type,
                TLorentzVector &v1, TLorentzVector &v2, TLorentzVector &v3,
                double &weight);
  bool CheckPauliBlocking(const TLorentzVector &p4) const;

  TRandom3  *fRand;          // mirrors parent's myRand for use here
  bool       fDoFSI;
  FSIModel   fFSIModel;
  int        fA;
  int        fZ;
  double     fFermiMomentum; // GeV/c

  TLorentzVector fPreLead;
  TLorentzVector fPreN2;
  TLorentzVector fPreN3;
  std::vector<FSISecondary> fSec;
};

#endif
