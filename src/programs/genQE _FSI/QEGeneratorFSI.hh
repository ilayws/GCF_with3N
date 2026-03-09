#ifndef __QE_GENERATOR_FSI_H__
#define __QE_GENERATOR_FSI_H__

#include "TRandom3.h"
#include "TLorentzVector.h"
#include "TVector3.h"
#include "generator/gcfGenerator.hh"
#include "nucleus/gcfNucleus.hh"
#include "cross_sections/eNCrossSection.hh"
#include "INukeNNData.hh"
#include <vector>

// QEGeneratorFSI — QE generator with Final State Interactions (FSI)
//
// Extends gcfGenerator to apply nuclear FSI to the outgoing SRC nucleon pair
// using GENIE's intranuke physics data (INukeNNData).
//
// Four fates are implemented, matching GENIE's HNIntranuke2018 hN-mode:
//   elastic        – nucleon changes direction, identity preserved
//                    (proper 2-body CM-frame kinematics)
//   charge exchange – p↔n conversion with elastic-like kinematics
//   absorption      – nucleon absorbed by nucleus; event weight → 0
//   no interaction  – nucleon exits without rescattering
//
// Pauli blocking is applied post-FSI: if the final-state nucleon momentum
// falls below the Fermi momentum the event is rejected (weight → 0).

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

  // FSI on/off toggle (enabled by default)
  void EnableFSI(bool enable = true) { doFSI = enable; }

  // Optional tuning – delegates to INukeNNData singleton.
  // mediumCorr:   nuclear medium correction factor (default 0.30)
  // fermiMom_MeV: Fermi momentum in MeV/c used for Pauli blocking (default 220)
  // pathScale:    path-length multiplier (1=R, 2=2R; default 1.5)
  void SetFSITuning(double mediumCorr, double fermiMom_MeV = 220.,
                    double pathScale = 1.5);

    // GENIE-FSI secondaries produced in the most recent ApplyFSI() call.
    // The selected outgoing lead/recoil nucleon used to update event kinematics
    // is NOT included here. The list contains additional stable descendants X.
    struct FSISecondary {
      int parentRole; // 0 = lead nucleon transport, 1 = recoil nucleon transport
      int pdg;
      TLorentzVector p4;
      int rescatterCode; // GENIE GHepParticle::RescatterCode()
    };

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

 private:
  eNCrossSection * myCS;

  double Ebeam;
  TVector3 vbeam;
  TLorentzVector vbeam_target;

  // FSI state
  bool   doFSI;
  int    fA, fZ;           // nucleus A and Z (set from gcfNucleus in ctor)
  double fFermiMomentum;   // GeV/c, for Pauli blocking (default 0.220)
  std::vector<FSISecondary> fLastFSISecondaries;
  FSIEventStats fLastFSIEventStats;

  // Apply FSI to the lead and recoil nucleons.
  // Modifies lead_type, rec_type, momenta in-place; sets weight=0 on absorption
  // or Pauli blocking.
  void ApplyFSI(int &lead_type, int &rec_type,
                TLorentzVector &vLead_target,
                TLorentzVector &vRec_target,
                double &weight);

  // Perform a 2-body elastic scatter of p4 off a nucleon at rest.
  // Conserves 4-momentum; scattering angle sampled isotropically in CM frame.
  // (Isotropic CM is the same approximation used in GENIE's ElasHN when no
  // angular data are available for the specific channel.)
  void ApplyElasticScatter(TLorentzVector &p4);

  // Pauli blocking: true if the nucleon's 3-momentum magnitude is below
  // the Fermi momentum.
  bool CheckPauliBlocking(const TLorentzVector &p4) const;
};

#endif
