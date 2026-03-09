#include "SimpleFSIHandler.hh"
#include <TMath.h>
#include <iostream>

SimpleFSIHandler::SimpleFSIHandler(int A, int Z, TRandom3* rnd)
  : fA(A), fZ(Z), fRandom(rnd)
{
  // Default parameters based on GENIE HNIntranuke2018
  fFermiMomentum = 0.220; // GeV/c
  fNuclearRadius = 1.2 * TMath::Power(A, 1./3.); // fm
  fDoFermi = true;
  
  // Default scaling factors
  fAbsScale = 1.0;
  fElasScale = 1.0;
  fCExScale = 1.0;
}

SimpleFSIHandler::~SimpleFSIHandler()
{
}

void SimpleFSIHandler::ProcessParticles(int &pdg_lead, int &pdg_rec,
                                        TLorentzVector &p4_lead, TLorentzVector &p4_rec,
                                        double &weight)
{
  // Track number of protons and neutrons available
  int nProtons = fZ;
  int nNeutrons = fA - fZ;
  
  // Process lead nucleon
  if (pdg_lead == kPdgProton || pdg_lead == kPdgNeutron) {
    double ke_lead = (p4_lead.E() - p4_lead.M()) * 1000.; // MeV
    FSIFate fate_lead = SelectFate(pdg_lead, ke_lead, nProtons, nNeutrons);
    
    switch(fate_lead) {
      case kFSIElastic:
        HandleElastic(pdg_lead, pdg_rec, p4_lead, p4_rec);
        break;
      case kFSIChargeExchange:
        HandleChargeExchange(pdg_lead, pdg_rec, p4_lead, p4_rec);
        // Update nucleon counts
        if (pdg_lead == kPdgProton) { nProtons++; nNeutrons--; }
        else { nNeutrons++; nProtons--; }
        break;
      case kFSIAbsorption:
        // Lead nucleon absorbed - mark by setting very low momentum
        // This indicates the particle was absorbed
        weight = 0.; // Absorbed events get zero weight
        return;
      case kFSINoInteraction:
      default:
        // No change
        break;
    }
  }
  
  // Process recoil nucleon (if lead wasn't absorbed)
  if (pdg_rec == kPdgProton || pdg_rec == kPdgNeutron) {
    double ke_rec = (p4_rec.E() - p4_rec.M()) * 1000.; // MeV
    FSIFate fate_rec = SelectFate(pdg_rec, ke_rec, nProtons, nNeutrons);
    
    switch(fate_rec) {
      case kFSIElastic:
        HandleElastic(pdg_rec, pdg_lead, p4_rec, p4_lead);
        break;
      case kFSIChargeExchange:
        HandleChargeExchange(pdg_rec, pdg_lead, p4_rec, p4_lead);
        break;
      case kFSIAbsorption:
        weight = 0.; // Absorbed events get zero weight
        return;
      case kFSINoInteraction:
      default:
        // No change
        break;
    }
  }
  
  // Apply Pauli blocking check
  if (CheckPauliBlocking(p4_lead) || CheckPauliBlocking(p4_rec)) {
    weight = 0.; // Pauli blocked
  }
}

FSIFate SimpleFSIHandler::SelectFate(int pdg, double ke, int nProtons, int nNeutrons)
{
  // Can't interact if no nucleons left
  if (nProtons < 1 && nNeutrons < 1) return kFSINoInteraction;
  
  // Get interaction fractions
  double frac_elas = GetElasticFraction(pdg, ke) * fElasScale;
  double frac_cex = GetCExFraction(pdg, ke) * fCExScale;
  double frac_abs = GetAbsFraction(pdg, ke) * fAbsScale;
  
  // Apply nucleon availability constraints
  if (pdg == kPdgProton && nNeutrons < 1) frac_cex = 0.; // Can't do p->n CEX
  if (pdg == kPdgNeutron && nProtons < 1) frac_cex = 0.; // Can't do n->p CEX
  if (nProtons < 1 || nNeutrons < 1) frac_abs = 0.; // Need both for absorption
  
  double total = frac_elas + frac_cex + frac_abs;
  if (total < 1e-6) return kFSINoInteraction;
  
  double r = fRandom->Rndm() * total;
  double cumulative = 0.;
  
  cumulative += frac_elas;
  if (r < cumulative) return kFSIElastic;
  
  cumulative += frac_cex;
  if (r < cumulative) return kFSIChargeExchange;
  
  cumulative += frac_abs;
  if (r < cumulative) return kFSIAbsorption;
  
  return kFSINoInteraction;
}

double SimpleFSIHandler::GetElasticFraction(int pdg, double ke)
{
  // Simplified energy-dependent elastic cross section
  // Based on typical NN scattering data
  if (ke < 50.) return 0.8;      // Low energy: mostly elastic
  if (ke < 200.) return 0.6;     // Medium energy
  if (ke < 500.) return 0.4;     // Higher energy
  return 0.3;                     // Very high energy
}

double SimpleFSIHandler::GetCExFraction(int pdg, double ke)
{
  // Charge exchange is typically smaller
  if (ke < 50.) return 0.05;
  if (ke < 200.) return 0.10;
  if (ke < 500.) return 0.08;
  return 0.05;
}

double SimpleFSIHandler::GetAbsFraction(int pdg, double ke)
{
  // Absorption (more relevant for pions, but keep small for nucleons)
  if (ke < 50.) return 0.02;
  if (ke < 200.) return 0.05;
  return 0.03;
}

void SimpleFSIHandler::HandleElastic(int &pdg1, int &pdg2,
                                    TLorentzVector &p4_1, TLorentzVector &p4_2)
{
  // Simple elastic scattering: randomize directions while conserving momentum
  TVector3 p_total = p4_1.Vect() + p4_2.Vect();
  double E_total = p4_1.E() + p4_2.E();
  
  // Generate random scattering angle
  double cosTheta = 2. * fRandom->Rndm() - 1.;
  double sinTheta = TMath::Sqrt(1. - cosTheta * cosTheta);
  double phi = 2. * TMath::Pi() * fRandom->Rndm();
  
  // CM frame momentum magnitude
  double s = E_total * E_total - p_total.Mag2();
  double pcm = 0.5 * TMath::Sqrt(s - 4. * p4_1.M() * p4_1.M());
  
  // New momentum in CM frame
  TVector3 p1_cm(pcm * sinTheta * TMath::Cos(phi),
                 pcm * sinTheta * TMath::Sin(phi),
                 pcm * cosTheta);
  
  // Boost back to lab frame (simplified - just rescale)
  TVector3 beta = p_total * (1. / E_total);
  TVector3 p1_new = p1_cm + beta * p4_1.E();
  TVector3 p2_new = p_total - p1_new;
  
  // Update momenta
  p4_1.SetVectM(p1_new, p4_1.M());
  p4_2.SetVectM(p2_new, p4_2.M());
}

void SimpleFSIHandler::HandleChargeExchange(int &pdg1, int &pdg2,
                                            TLorentzVector &p4_1, TLorentzVector &p4_2)
{
  // Charge exchange: swap particle types, apply elastic scattering
  if (pdg1 == kPdgProton) pdg1 = kPdgNeutron;
  else if (pdg1 == kPdgNeutron) pdg1 = kPdgProton;
  
  // Update mass and energy
  double m_new = (pdg1 == kPdgProton) ? 0.938272 : 0.939565; // GeV
  double p_mag = p4_1.P();
  double E_new = TMath::Sqrt(p_mag * p_mag + m_new * m_new);
  TVector3 p_vec = p4_1.Vect();
  p4_1.SetVectM(p_vec, m_new);
  
  // Also apply elastic scattering
  HandleElastic(pdg1, pdg2, p4_1, p4_2);
}

bool SimpleFSIHandler::CheckPauliBlocking(const TLorentzVector &p4)
{
  // Check if momentum is below Fermi momentum
  if (!fDoFermi) return false;
  return (p4.P() < fFermiMomentum);
}

bool SimpleFSIHandler::IsInNucleus(const TLorentzVector &p4)
{
  // Simplified check - always return true for this implementation
  // In full version, would track particle position through nucleus
  return true;
}

double SimpleFSIHandler::GetMeanFreePath(int pdg, double ke)
{
  // Simplified mean free path calculation
  // Typical NN cross sections are ~40 mb at low energy
  double sigma = 40e-27; // m^2
  double rho = fA / (4./3. * TMath::Pi() * TMath::Power(fNuclearRadius * 1e-15, 3));
  return 1. / (rho * sigma);
}
