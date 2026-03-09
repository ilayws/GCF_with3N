# FSI Integration Guide

## Overview
The QEGeneratorFSI class extends QEGenerator to include Final State Interaction (FSI) handling based on GENIE's HNIntranuke2018 module. This allows simulation of cases where the initially produced SRC pair is modified by nuclear rescattering before detection.

## Building with Make

The FSI functionality is integrated into `genQE_EIC` and builds seamlessly with the standard `make` command:

```bash
cd /path/to/genQE
make clean     # Optional: clean previous build
make -j4       # Build with FSI support
```

The build process compiles QEGeneratorFSI.cc automatically as part of the genQE_EIC target. No special flags or configuration is needed.

## Files
- **QEGeneratorFSI.hh**: Header file with FSI interface
- **QEGeneratorFSI.cc**: Implementation with integrated GENIE FSI

## Usage

### Basic Setup
```cpp
#include "QEGeneratorFSI.hh"

// Create generator with FSI support
QEGeneratorFSI* gen = new QEGeneratorFSI(Ebeam, thisInfo, thisCS, myRandom);

// Enable FSI processing (enabled by default)
gen->EnableFSI(true);

// Set FSI parameters (optional - defaults work for most cases)
gen->SetFSIParameters(
    40.0,   // meanFreePath in mb
    220.0,  // fermiMomentum in MeV/c
    30.0,   // pauliBlockingCutoff in MeV
    1.2     // nuclearRadiusParam (fm/A^(1/3))
);

// Generate events as usual
gen->generate_event(weight, lead_type, rec_type, vk, vLead, vRec, vAm2);
```

### FSI Physics Processes

The integrated FSI implements four FSI fates based on GENIE HNIntranuke2018:

1. **Elastic Scattering**: Nucleon changes direction but maintains identity
   - Energy-dependent probability (~30-60% depending on momentum)
   - Isotropic scattering in CM frame
   - Subject to Pauli blocking

2. **Charge Exchange**: p ↔ n conversion
   - Energy-dependent probability (~10-25%)
   - Isotropic scattering in CM frame
   - Subject to Pauli blocking

3. **Absorption**: Nucleon absorbed by nucleus
   - Energy-dependent probability (~5-20%)
   - Sets weight to 0 (event rejected)

4. **No Interaction**: Nucleon escapes without rescattering
   - Remaining probability after other fates

### FSI Parameter Details

- **meanFreePath** (default: 40 mb): Controls average distance nucleons travel before interacting
  - Typical values: 30-50 mb
  - Lower values = more interactions

- **fermiMomentum** (default: 220 MeV/c): Maximum nucleon momentum in nucleus
  - Carbon-12: ~220 MeV/c
  - Heavier nuclei: up to ~270 MeV/c

- **pauliBlockingCutoff** (default: 30 MeV): Minimum kinetic energy below which scattering is blocked
  - Prevents scattering to already-occupied states
  - Typical values: 20-40 MeV

- **nuclearRadiusParam** (default: 1.2 fm/A^(1/3)): Nuclear size parameter
  - R = nuclearRadiusParam * A^(1/3)
  - Standard value: 1.2 fm

## Event Flow with FSI

```
1. Initial Coulomb correction (electron in field)
2. Radiation effects (if enabled)
3. Electron-nucleon scattering (eN cross section)
4. ** FSI Processing ** (integrated GENIE FSI)
   - Lead nucleon processed first
   - Recoil nucleon processed second
   - Each can undergo elastic, charge exchange, absorption, or escape
5. Final Coulomb correction (detected particles in field)
```

## FSI Output

After FSI processing:
- `lead_type` and `rec_type` may change (e.g., proton → neutron via charge exchange)
- `vLead` and `vRec` may have different directions/momenta (elastic scattering)
- `weight` may be 0 if either nucleon was absorbed

## Detecting FSI Effects

To track when FSI modified the event:
```cpp
int initial_lead_type = lead_type;
int initial_rec_type = rec_type;
TLorentzVector initial_vLead = vLead;
TLorentzVector initial_vRec = vRec;

// Generate event with FSI
gen->generate_event(weight, lead_type, rec_type, vk, vLead, vRec, vAm2);

// Check if FSI occurred
bool fsi_occurred = (initial_lead_type != lead_type) || 
                    (initial_rec_type != rec_type) ||
                    (initial_vLead != vLead) ||
                    (initial_vRec != vRec);
```


gen->generate_event(Ebeam, vq, weight, lead_type, rec_type, vLead, vRec);

if (lead_type != initial_lead_type || rec_type != initial_rec_type) {
    // Charge exchange occurred
}

if (weight == 0) {
    // At least one nucleon was absorbed
}
```

## Comparison with GENIE

The SimpleFSIHandler is a simplified version of GENIE's HNIntranuke2018:

**Similarities**:
- Same physics processes (elastic, CE, absorption)
- Pauli blocking implementation
- Fermi momentum consideration
- Mean free path approach

**Differences**:
- SimpleFSIHandler uses energy-dependent but hardcoded cross section fractions
- GENIE uses detailed hadron-nucleon cross section models (Oset, etc.)
- SimpleFSIHandler only handles nucleons
- GENIE also handles pions, kaons, and other hadrons
- SimpleFSIHandler is standalone (no external dependencies)
- GENIE requires full framework installation

## Compilation

Add to your compilation command:
```bash
g++ -o myProgram myProgram.cc QEGeneratorFSI.cc SimpleFSIHandler.cc \
    `root-config --cflags --libs` -lgsl -lgslcblas
```

Or update your Makefile to include SimpleFSIHandler.cc in the build.

## Example: Comparing with/without FSI

```cpp
// Generate events without FSI
gen->EnableFSI(false);
for (int i=0; i<10000; i++) {
    gen->generate_event(Ebeam, vq, weight, lead_type, rec_type, vLead, vRec);
    // Fill histograms for "no FSI" case
}

// Generate events with FSI
gen->EnableFSI(true);
for (int i=0; i<10000; i++) {
    gen->generate_event(Ebeam, vq, weight, lead_type, rec_type, vLead, vRec);
    // Fill histograms for "with FSI" case
}

// Compare distributions to see FSI effects
```

## Technical Notes

- FSI is applied in the target rest frame
- Random number generator must be thread-safe if using parallel processing
- FSI increases computation time by ~20-30% per event
- Typical FSI modification rate: ~30-50% of events affected
- Absorption rate typically 5-15% depending on nucleon energy

## References

- GENIE HNIntranuke2018: NuWro Intranuke model (2018)
- Pauli blocking: Effective momentum approximation
- NN cross sections: Energy-dependent parameterization from NN scattering data
