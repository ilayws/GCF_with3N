#ifndef __QE_GENERATOR_FSI_H__
#define __QE_GENERATOR_FSI_H__

#include "TRandom3.h"
#include "TLorentzVector.h"
#include "TVector3.h"
#include "generator/gcfGenerator.hh"
#include "nucleus/gcfNucleus.hh"
#include "cross_sections/eNCrossSection.hh"
#include "fsi/GenieFSIHelpers.hh"
#include <vector>

// QEGeneratorFSI — QE generator with Final State Interactions (FSI)
//
// Extends gcfGenerator to apply nuclear FSI to the outgoing SRC nucleon pair
// using GENIE's intranuclear cascade (hN or hA mode).
//
// hN (HNIntranuke2018): Full intranuclear cascade with hadron-nucleon
//   cross sections and medium corrections. More accurate.
// hA (HAIntranuke2018): Effective cascade using hadron-nucleus cross sections.
//   Faster (~5-10x), suitable for systematics studies.
//
// Pauli blocking is applied post-FSI: if the final-state nucleon momentum
// falls below the Fermi momentum the event is rejected (weight -> 0).

class QEGeneratorFSI: public gcfGenerator
{
 public:
  QEGeneratorFSI(double E, gcfNucleus * thisInfo, eNCrossSection * thisCS,
                 TRandom3 * thisRand);
  ~QEGeneratorFSI();

  // Event generators (same interface as QEGenerator)
  void generate_event(double &weight, int &lead_type, int &rec_type,
                      TLorentzVector &vk_target,
                      TLorentzVector &vLead_target,
                      TLorentzVector &vRec_target,
                      TLorentzVector &vAm2_target);
  void generate_event(double &weight, int &lead_type, int &rec_type,
                      TLorentzVector &vk_target,
                      TLorentzVector &vLead_target,
                      TLorentzVector &vRec_target,
                      TLorentzVector &vAm2_target,
                      double &Estar);
  void generate_event(double &weight, int &lead_type, int &rec_type,
                      TLorentzVector &vk_target,
                      TLorentzVector &vLead_target,
                      TLorentzVector &vRec_target,
                      TLorentzVector &vAm2_target,
                      TVector3 &vRel_target,
                      TLorentzVector &q_target,
                      double &Estar);
  void generate_event_lightcone(double &weight, int &lead_type, int &rec_type,
                                 TLorentzVector &vk_target,
                                 TLorentzVector &vLead_target,
                                 TLorentzVector &vRec_target,
                                 TLorentzVector &vAm2_target);
  void generate_event_lightcone(double &weight, int &lead_type, int &rec_type,
                                 TLorentzVector &vk_target,
                                 TLorentzVector &vLead_target,
                                 TLorentzVector &vRec_target,
                                 TLorentzVector &vAm2_target,
                                 double &Estar);

  // ---- Single-nucleon mean-field (MF) mode ----
  // Models a single struck nucleon drawn from a Fermi-gas momentum
  // distribution (no correlated pair), transported through GENIE FSI in the
  // A-1 residual. No gen-level recoil is emitted: rec_type is set to a
  // non-nucleon sentinel and vRec is zero, so any second proton in an
  // (e,e'pp) analysis must originate from FSI secondaries — the correct MF
  // picture. FSI is still toggled by EnableFSI().
  enum FermiGasMode { kGlobalFG, kLocalFG };
  void generate_event_MF(double &weight, int &lead_type, int &rec_type,
                         TLorentzVector &vk_target,
                         TLorentzVector &vLead_target,
                         TLorentzVector &vRec_target,
                         TLorentzVector &vAm2_target);
  // kGlobalFG: flat n(p)=3/(4 pi kF^3) up to kF.
  // kLocalFG : density-folded n(p) from a local Fermi gas, kF(r) set by the
  //            one-body density (built lazily, cached per nucleus).
  void SetFermiGasMode(FermiGasMode m) { fFGMode = m; }
  // Fermi momentum ceiling for the GLOBAL Fermi gas (GeV/c). For the local
  // Fermi gas the ceiling is kF at central density (computed internally).
  void SetFermiMomentumFG(double kF_GeV) { fkF = kF_GeV; fLocalFG_built = false; }
  // Density value n_FG(p) used as the MF "wavefunction" (for bookkeeping in
  // the analysis tree). Normalised so integral n_FG d^3p = 1.
  double get_n_FG(double p) { return eval_n_FG(p); }

  // FSI on/off toggle (enabled by default)
  void EnableFSI(bool enable = true) { doFSI = enable; }

  // Select FSI model (default: kHN2018)
  void SetFSIModel(FSIModel m) { fFSIModel = m; }

  // Tuning: Fermi momentum for Pauli blocking threshold (in MeV/c)
  void SetFSITuning(double fermiMom_MeV);

    // FSISecondary is now defined in fsi/GenieFSIHelpers.hh and shared
    // between the 2N and 3N FSI generators.

      struct FSIEventStats {
        bool leadChargeExchange;
        bool recoilChargeExchange;
        bool leadElasticLike;
        bool recoilElasticLike;
        int nSecondaries;
        int nPionsTotal;
        int nPiPlus;
        int nPiMinus;
        int nPiZero;

        FSIEventStats()
          : leadChargeExchange(false),
            recoilChargeExchange(false),
            leadElasticLike(false),
            recoilElasticLike(false),
            nSecondaries(0),
            nPionsTotal(0),
            nPiPlus(0),
            nPiMinus(0),
            nPiZero(0) {}
      };

    const std::vector<FSISecondary> & GetLastFSISecondaries() const {
      return fLastFSISecondaries;
    }

    const FSIEventStats & GetLastFSIEventStats() const {
      return fLastFSIEventStats;
    }

    // Pre-FSI momenta (saved before intranuclear cascade modifies them)
    const TLorentzVector & GetPreFSILead()   const { return fLeadPreFSI; }
    const TLorentzVector & GetPreFSIRecoil() const { return fRecPreFSI;  }

    // Fermi-gas density n_FG(|p1|) of the last generate_event_MF call,
    // evaluated at the TRUE sampled struck-nucleon momentum (free of the
    // radiative/Coulomb reconstruction ambiguity). Valid for MF events only.
    double GetLastMFRho() const { return fLastMFRho; }

 private:
  eNCrossSection * myCS;

  double Ebeam;
  TVector3 vbeam;
  TLorentzVector vbeam_target;

  // FSI state
  bool   doFSI;
  FSIModel fFSIModel;
  int    fA, fZ;           // nucleus A and Z (set from gcfNucleus in ctor)
  double fFermiMomentum;   // GeV/c, for Pauli blocking (default 0.220)
  std::vector<FSISecondary> fLastFSISecondaries;
  FSIEventStats fLastFSIEventStats;
  TLorentzVector fLeadPreFSI;   // lead nucleon 4-momentum before cascade
  TLorentzVector fRecPreFSI;    // recoil nucleon 4-momentum before cascade

  // Single-nucleon MF state
  static constexpr int kNoRecoil = 0;  // rec_type sentinel: no recoil nucleon
  FermiGasMode fFGMode = kGlobalFG;
  double fkF = 0.25;                    // global-FG Fermi momentum (GeV/c)
  double fLastMFRho = 0.;               // n_FG at last MF struck-nucleon |p1|
  bool   fLocalFG_built = false;        // local-FG table cached for fA?
  double fLocalFG_kmax = 0.;            // local-FG momentum ceiling = kF(r=0)
  std::vector<double> fLocalFG_p;       // local-FG table: momentum grid (GeV/c)
  std::vector<double> fLocalFG_n;       // local-FG table: n_FG(p) values

  // Apply FSI to the lead and recoil nucleons.
  // Modifies lead_type, rec_type, momenta in-place; sets weight=0 on absorption
  // or Pauli blocking.
  void ApplyFSI(int &lead_type, int &rec_type,
                TLorentzVector &vLead_target,
                TLorentzVector &vRec_target,
                double &weight);

  // Apply FSI to a SINGLE struck nucleon transported through the A-1 residual
  // (mean-field knockout). Modifies lead_type and vLead in place; sets
  // weight=0 on absorption or Pauli blocking.
  void ApplyFSI_single(int &lead_type, TLorentzVector &vLead_target,
                       double &weight);

  // Shared electron/Jacobian/cross-section kinematics (extracted so both the
  // 2N pair path and the single-nucleon MF path use identical physics).
  // Given the struck-nucleon 3-momentum v1, its off-shell 4-vector v1_target
  // (with energy E1) and type, solves the scattered-electron kinematics and
  // fills vk_target/vLead_target/q_target and the weight. Returns false (and
  // sets weight=0) on any kinematic rejection.
  bool solve_lepton_kinematics(double &weight, int lead_type,
                               const TVector3 &v1,
                               const TLorentzVector &v1_target, double E1,
                               TLorentzVector &vk_target,
                               TLorentzVector &vLead_target,
                               TLorentzVector &q_target);

  // Sample the struck-nucleon momentum v1 from the Fermi-gas distribution and
  // fold the corresponding density into the weight (mirrors decay_function).
  bool sample_FG_momentum(double &weight, TVector3 &v1);

  // Fermi-gas density n_FG(p) (normalised so integral n d^3p = 1).
  double eval_n_FG(double p) const;
  // Build (and cache) the local-Fermi-gas momentum table for nucleus fA.
  void build_local_FG_table();

  // Perform a 2-body elastic scatter of p4 off a nucleon at rest.
  void ApplyElasticScatter(TLorentzVector &p4);

  // Pauli blocking: true if the nucleon's 3-momentum magnitude is below
  // the Fermi momentum.
  bool CheckPauliBlocking(const TLorentzVector &p4) const;
};

#endif
