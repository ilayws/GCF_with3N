#ifndef __GENIE_FSI_HELPERS_H__
#define __GENIE_FSI_HELPERS_H__

#include "TLorentzVector.h"
#include "TRandom3.h"
#include <vector>

// FSI model selection for GENIE intranuclear cascade.
//   kHN2018: full hadron-nucleon cascade (HNIntranuke2018) - more accurate
//   kHA2018: effective hadron-nucleus cascade (HAIntranuke2018) - faster
enum FSIModel { kHN2018, kHA2018 };

// Stable secondary produced during a single ApplyGenieFSIToNucleon call.
// The selected outgoing nucleon used to update lead/recoil state is NOT
// included in the secondaries list.
struct FSISecondary {
  int parentRole;     // caller-defined tag (e.g. 0=lead, 1=recoil, 2=third)
  int pdg;
  TLorentzVector p4;
  int rescatterCode;  // GENIE GHepParticle::RescatterCode()
};

namespace fsi {

// Set GXMLPATH so GENIE can locate ModelConfiguration.xml /
// TuneGeneratorList.xml when the user has not sourced GENIE setup scripts.
// Idempotent; safe to call multiple times.
void ResolveGenieXMLPath();

// One-body nucleon number density rho(r) [fm^-3] at radius r [fm] for nucleus
// A, from GENIE's nuclear density model. Returns -1 if FSI/GENIE is not
// compiled in. Used to build the local-Fermi-gas momentum distribution.
double NuclearDensity(int A, double r_fm);

// Sample a position inside the nucleus weighted by rho^2(r) * r^2.
// Models the SRC pair location: pair density goes as the square of the
// single-nucleon density.
TLorentzVector SampleSRCPosition(int A, TRandom3 *rnd);

// Sample a position inside the nucleus weighted by rho^3(r) * r^2.
// Models the SRC triplet location: triplet density goes as the cube of the
// single-nucleon density.
TLorentzVector SampleSRCPosition3N(int A, TRandom3 *rnd);

// Sample a position inside the nucleus weighted by rho^1(r) * r^2.
// Models a single mean-field nucleon location: it follows the one-body
// nucleon density directly (not its square as for an SRC pair).
TLorentzVector SampleMFPosition(int A, TRandom3 *rnd);

// Apply GENIE intranuclear cascade to a single nucleon.
// Inputs:
//   A_residual, Z_residual : transport medium (nucleus the nucleon traverses)
//   nucleon_type           : input PDG code (proton/neutron); updated in place
//                            to the post-FSI nucleon PDG (may flip on charge
//                            exchange).
//   p4                     : input 4-momentum; updated in place to post-FSI.
//   x4                     : initial 4-position inside the nucleus.
//   rnd                    : ROOT RNG used to seed GENIE for this call.
//   parentRole             : tag attached to all returned secondaries.
//   secondaries            : appended to with stable descendants other than
//                            the selected outgoing nucleon.
//   model                  : kHN2018 or kHA2018.
// Returns true on success (a stable nucleon was produced); false if the
// nucleon was absorbed or no nucleon descendant could be selected.
bool ApplyGenieFSIToNucleon(int A_residual, int Z_residual,
                            int &nucleon_type,
                            TLorentzVector &p4,
                            const TLorentzVector &x4,
                            TRandom3 *rnd,
                            int parentRole,
                            std::vector<FSISecondary> &secondaries,
                            FSIModel model);

} // namespace fsi

#endif
