#ifndef __SIMPLE_FSI_HANDLER_H__
#define __SIMPLE_FSI_HANDLER_H__

#include "TLorentzVector.h"
#include "TRandom3.h"
#include <vector>

// Simplified FSI handler that doesn't require full GENIE
// Based on GENIE's HNIntranuke2018 logic

enum FSIFate {
  kFSINoInteraction = 0,
  kFSIElastic,
  kFSIChargeExchange,
  kFSIAbsorption,
  kFSIInelastic
};

class SimpleFSIHandler {
public:
  SimpleFSIHandler(int A, int Z, TRandom3* rnd);
  ~SimpleFSIHandler();
  
  // Main FSI processing
  void ProcessParticles(int &pdg_lead, int &pdg_rec, 
                       TLorentzVector &p4_lead, TLorentzVector &p4_rec,
                       double &weight);
  
  // Configuration
  void SetFermiMomentum(double p) { fFermiMomentum = p; }
  void SetNuclearRadius(double r) { fNuclearRadius = r; }
  void SetDoFermi(bool b) { fDoFermi = b; }
  
  // Tuning parameters (similar to GENIE)
  void SetAbsorptionScale(double s) { fAbsScale = s; }
  void SetElasticScale(double s) { fElasScale = s; }
  void SetCExScale(double s) { fCExScale = s; }
  
private:
  int fA, fZ;          // Nucleus A and Z
  TRandom3* fRandom;
  
  // Nuclear model parameters
  double fFermiMomentum;
  double fNuclearRadius;
  bool fDoFermi;
  
  // Cross section scaling factors
  double fAbsScale;
  double fElasScale;
  double fCExScale;
  
  // Helper methods
  FSIFate SelectFate(int pdg, double ke, int nProtons, int nNeutrons);
  bool IsInNucleus(const TLorentzVector &p4);
  double GetMeanFreePath(int pdg, double ke);
  void HandleElastic(int &pdg_lead, int &pdg_rec, 
                    TLorentzVector &p4_lead, TLorentzVector &p4_rec);
  void HandleChargeExchange(int &pdg_lead, int &pdg_rec,
                           TLorentzVector &p4_lead, TLorentzVector &p4_rec);
  bool CheckPauliBlocking(const TLorentzVector &p4);
  
  // Cross section data (simplified)
  double GetElasticFraction(int pdg, double ke);
  double GetCExFraction(int pdg, double ke);
  double GetAbsFraction(int pdg, double ke);
  
  // PDG codes
  static const int kPdgProton = 2212;
  static const int kPdgNeutron = 2112;
};

#endif
