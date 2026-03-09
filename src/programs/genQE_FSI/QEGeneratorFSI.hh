#ifndef __QE_GENERATOR_FSI_H__
#define __QE_GENERATOR_FSI_H__

#include "TRandom3.h"
#include "TLorentzVector.h"
#include "TVector3.h"
#include "generator/gcfGenerator.hh"
#include "nucleus/gcfNucleus.hh"
#include "cross_sections/eNCrossSection.hh"
#include <vector>

// FSI model selection for GENIE intranuclear cascade
enum FSIModel { kHN2018, kHA2018 };

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

  // FSI on/off toggle (enabled by default)
  void EnableFSI(bool enable = true) { doFSI = enable; }

  // Select FSI model (default: kHN2018)
  void SetFSIModel(FSIModel m) { fFSIModel = m; }

  // Tuning: Fermi momentum for Pauli blocking threshold (in MeV/c)
  void SetFSITuning(double fermiMom_MeV);

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
  FSIModel fFSIModel;
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
  void ApplyElasticScatter(TLorentzVector &p4);

  // Pauli blocking: true if the nucleon's 3-momentum magnitude is below
  // the Fermi momentum.
  bool CheckPauliBlocking(const TLorentzVector &p4) const;
};

#endif
