#include <cstring>
#include <iostream>
#include <unistd.h>
#include <math.h>
#include "TFile.h"
#include "TTree.h"
#include "QEGeneratorFSI_3N.hh"
#include "fsi/GenieFSIHelpers.hh"
#include "constants.hh"
#include "helpers.hh"

using namespace std;

int nEvents;
TFile * outfile;
bool verbose = false;
bool useCM   = true;   // -C 0 to disable CM smearing
TRandom3 * myRand;
eNCrossSection * myCS;
QEGeneratorFSI_3N * myGen;
TTree * outtree;

// Tree variables
Double_t pe[3], pLead[3], p2[3], p3[3], pAm3[3];
Double_t pLead_pre[3], p2_pre[3], p3_pre[3];
Double_t weight;
Int_t N1_type, N2_type, N3_type;
Int_t doFSI_flag;
Int_t fsiModelInt;       // 0 = hN, 1 = hA

void Usage()
{
  cerr << "Usage: ./code <Beam energy (GeV)> [Interaction #] <path/to/output.root> <# of events>\n\n"
       << "Optional flags:\n"
       << "-v: Verbose\n"
       << "-c: Specify eN cross section model (default cc1)\n"
       << "-f: FSI model (hN or hA, default hN)\n"
       << "-p: Fermi momentum for Pauli blocking, MeV/c (default 220)\n"
       << "-A: Target mass number (default 12)\n"
       << "-Z: Target charge number (default 6)\n"
       << "-s: CM Gaussian width sigCM in GeV/c per component (default 0.15)\n"
       << "-C: Toggle CM smearing: 1=on (default), 0=off\n"
       << "-n: Disable FSI (PWIA only)\n"
       << "-h: Print this message and exit\n\n\n";
}

bool init(int argc, char ** argv)
{
  int numargs = 5;

  if (argc < numargs)
    {
      Usage();
      return false;
    }

  double Ebeam = atof(argv[1]);
  int u = atoi(argv[2]);
  outfile = new TFile(argv[3],"RECREATE");
  nEvents = atoi(argv[4]);

  ffModel ffMod = kelly;
  csMethod csMeth = cc1;
  FSIModel fsiModel = kHN2018;
  double pFermiMeV = 220.;
  int A = 12;
  int Z = 6;
  double sigCM_GeV = 0.15;
  bool   sigCM_set = false;
  bool enableFSI = true;

  int c;
  while ((c = getopt(argc-numargs+1, &argv[numargs-1], "vc:f:p:A:Z:s:C:nh")) != -1)
    switch (c) {
      case 'v':
        verbose = true; break;
      case 'c':
        if (strcmp(optarg,"onshell") == 0) csMeth = onshell;
        else if ((strcmp(optarg,"cc1") == 0) || (atoi(optarg) == 1)) csMeth = cc1;
        else if ((strcmp(optarg,"cc2") == 0) || (atoi(optarg) == 2)) csMeth = cc2;
        else { cerr << "Invalid cross section. Allowed: onshell, cc1, cc2.\n"; return false; }
        break;
      case 'f':
        if (strcmp(optarg,"hN") == 0 || strcmp(optarg,"HN") == 0) fsiModel = kHN2018;
        else if (strcmp(optarg,"hA") == 0 || strcmp(optarg,"HA") == 0) fsiModel = kHA2018;
        else { cerr << "Invalid FSI model. Allowed: hN, hA.\n"; return false; }
        break;
      case 'p':
        pFermiMeV = atof(optarg); break;
      case 'A':
        A = atoi(optarg); break;
      case 'Z':
        Z = atoi(optarg); break;
      case 's':
        sigCM_GeV = atof(optarg); sigCM_set = true; break;
      case 'C':
        useCM = (atoi(optarg) != 0); break;
      case 'n':
        enableFSI = false; break;
      case 'h':
        Usage(); return false;
      default:
        abort();
    }

  myRand = new TRandom3(0);
  myCS   = new eNCrossSection(csMeth, ffMod);

  myGen = new QEGeneratorFSI_3N(Ebeam, myCS, u, myRand, A, Z);
  myGen->SetTargetNucleus(A, Z);  // updates both kinematic mA/mAm3 and FSI fA/fZ
  if (sigCM_set) myGen->SetSigCM(sigCM_GeV);
  myGen->set_theta_k_maxmin(5, 40);
  myGen->EnableFSI(enableFSI);
  myGen->SetFSIModel(fsiModel);
  myGen->SetFSITuning(pFermiMeV);

  doFSI_flag  = enableFSI ? 1 : 0;
  fsiModelInt = (fsiModel == kHN2018) ? 0 : 1;

  outfile->cd();
  outtree = new TTree("genTbuffer","Generator Tree");
  outtree->Branch("N1_type",  &N1_type,  "N1_type/I");
  outtree->Branch("N2_type",  &N2_type,  "N2_type/I");
  outtree->Branch("N3_type",  &N3_type,  "N3_type/I");
  outtree->Branch("pe",        pe,       "pe[3]/D");
  outtree->Branch("pLead",     pLead,    "pLead[3]/D");
  outtree->Branch("p2",        p2,       "p2[3]/D");
  outtree->Branch("p3",        p3,       "p3[3]/D");
  outtree->Branch("pAm3",      pAm3,     "pAm3[3]/D");
  outtree->Branch("pLead_pre", pLead_pre,"pLead_pre[3]/D");
  outtree->Branch("p2_pre",    p2_pre,   "p2_pre[3]/D");
  outtree->Branch("p3_pre",    p3_pre,   "p3_pre[3]/D");
  outtree->Branch("doFSI",    &doFSI_flag,  "doFSI/I");
  outtree->Branch("fsiModel", &fsiModelInt, "fsiModel/I");
  outtree->Branch("weight",   &weight,      "weight/D");

  return true;
}

void evnt(int /*event*/)
{
  TLorentzVector vk, vLead, v2, v3, vAm3;

  myGen->generate_event_with_FSI(weight, N1_type, N2_type, N3_type,
                                 vk, vLead, v2, v3, vAm3, useCM);

  pe[0] = vk.X();    pe[1] = vk.Y();    pe[2] = vk.Z();
  pLead[0] = vLead.X(); pLead[1] = vLead.Y(); pLead[2] = vLead.Z();
  p2[0] = v2.X();    p2[1] = v2.Y();    p2[2] = v2.Z();
  p3[0] = v3.X();    p3[1] = v3.Y();    p3[2] = v3.Z();
  pAm3[0] = vAm3.X(); pAm3[1] = vAm3.Y(); pAm3[2] = vAm3.Z();

  const TLorentzVector &preL = myGen->GetPreFSILead();
  const TLorentzVector &pre2 = myGen->GetPreFSIN2();
  const TLorentzVector &pre3 = myGen->GetPreFSIN3();
  pLead_pre[0] = preL.X(); pLead_pre[1] = preL.Y(); pLead_pre[2] = preL.Z();
  p2_pre[0]    = pre2.X(); p2_pre[1]    = pre2.Y(); p2_pre[2]    = pre2.Z();
  p3_pre[0]    = pre3.X(); p3_pre[1]    = pre3.Y(); p3_pre[2]    = pre3.Z();

  if (weight > 0.) {
    outtree->Fill();
  }
}

void fini()
{
  outtree->SetName("genT");
  outtree->Write();
  outfile->Delete("genTbuffer;*");
  outfile->Close();
}

int main(int argc, char ** argv)
{
  if (not init(argc, argv)) return -1;

  // Count successful (weight > 0) events. Keep generating until the target
  // number of successful events have been written to the tree.
  long long attempts = 0;
  long long filled   = 0;
  while (filled < (long long)nEvents) {
    if ((attempts % 1000000 == 0) && verbose)
      cout << "Attempts " << attempts << ", filled " << filled
           << "/" << nEvents << "\n";
    evnt((int)attempts);
    if (weight > 0.) filled++;
    attempts++;
  }
  if (verbose) {
    cout << "Done: " << filled << " filled out of " << attempts
         << " attempts (efficiency " << 100.0 * filled / attempts
         << "%)\n";
  }
  fini();
  return 0;
}
