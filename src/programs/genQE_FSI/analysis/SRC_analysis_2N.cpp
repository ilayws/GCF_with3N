#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include "QEGeneratorFSI.hh"
#include "nucleus/gcfNucleus.hh"
#include "constants.hh"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "TFile.h"
#include "TTree.h"

using namespace std;

eNCrossSection * myCS;
QEGeneratorFSI * myGen;
TRandom3 * myRand;
gcfNucleus * myNucleus;

/*
TTree-based 2N SRC analysis with FSI.
Generates events and saves ALL per-event kinematics to a ROOT TTree.
All cuts, histograms, and plotting are done in Python (analyze_2N.py).

Usage: ./SRC_analysis_2N [n_events] [doFSI=1] [fsiModel=hN] [output=events_2N.root]
*/

int n_events = 1000000;

int main(int argc, char **argv) {
    if (argc > 1) {
        n_events = std::stoi(argv[1]);
    }
    bool doFSI = true;
    if (argc > 2) doFSI = (std::atoi(argv[2]) != 0);

    FSIModel fsiModel = kHN2018;
    if (argc > 3) {
        std::string modelStr = argv[3];
        if (modelStr == "hA" || modelStr == "HA") fsiModel = kHA2018;
    }

    std::string output_filename = "events_2N.root";
    if (argc > 4) output_filename = argv[4];

    const char* fsi_model_name = (fsiModel == kHN2018) ? "hN" : "hA";
    std::string fsi_backend_str = std::string("ENABLED (GENIE ") + fsi_model_name + " intranuke cascade)";

    myRand = new TRandom3(0);
    ffModel ffMod = kelly;
    csMethod csMeth = cc2;
    myCS = new eNCrossSection(csMeth, ffMod);

    // Carbon-12 (GCF on A=12, FSI on A-2=10 residual)
    myNucleus = new gcfNucleus(6, 6, (char*)"AV18");

    myNucleus->set_sigmaCM(0.07);  // match 3N generator sigCM

    const double Ebeam = 6.0; // GeV
    myGen = new QEGeneratorFSI(Ebeam, myNucleus, myCS, myRand);
    myGen->EnableFSI(doFSI);
    if (doFSI) {
        myGen->SetFSIModel(fsiModel);
        myGen->SetFSITuning(250.);
    }

    std::cout << "\n========================================\n"
              << "  2N SRC Analysis — TTree output\n"
              << "========================================\n"
              << "  Nucleus:      C-12\n"
              << "  Beam energy:  " << Ebeam << " GeV\n"
              << "  Events:       " << n_events << "\n"
              << "  FSI:          " << (doFSI ? fsi_backend_str.c_str() : "DISABLED") << "\n"
              << "  Output:       " << output_filename << "\n"
              << "========================================\n\n";

    // ---- Create ROOT output file and TTree ----
    TFile *outfile = new TFile(output_filename.c_str(), "RECREATE");
    TTree *tree = new TTree("events", "2N SRC events with FSI");

    // Branch variables — scalars
    Double_t br_weight;
    Int_t br_lead_type, br_rec_type;
    Int_t br_doFSI;
    Double_t br_Q2, br_xB, br_nu, br_pmiss, br_scattering_angle;
    Int_t br_nAboveKF;

    // 4-vectors as {px, py, pz, E}
    Double_t br_electron[4], br_lead_post[4], br_recoil_post[4], br_q[4];
    Double_t br_lead_pre[4], br_recoil_pre[4];

    // FSI event stats
    Int_t br_nSecondaries, br_nPions, br_nPiPlus, br_nPiMinus, br_nPiZero;
    Bool_t br_leadCX, br_recoilCX, br_leadElastic, br_recoilElastic;

    // Variable-length FSI secondaries
    static const Int_t kMaxSec = 50;
    Int_t br_nSec;
    Int_t br_sec_pdg[kMaxSec], br_sec_parentRole[kMaxSec], br_sec_rescatterCode[kMaxSec];
    Double_t br_sec_px[kMaxSec], br_sec_py[kMaxSec], br_sec_pz[kMaxSec], br_sec_E[kMaxSec];

    // Set up branches
    tree->Branch("weight", &br_weight, "weight/D");
    tree->Branch("lead_type", &br_lead_type, "lead_type/I");
    tree->Branch("rec_type", &br_rec_type, "rec_type/I");
    tree->Branch("doFSI", &br_doFSI, "doFSI/I");

    tree->Branch("electron", br_electron, "electron[4]/D");
    tree->Branch("lead_post", br_lead_post, "lead_post[4]/D");
    tree->Branch("recoil_post", br_recoil_post, "recoil_post[4]/D");
    tree->Branch("q", br_q, "q[4]/D");
    tree->Branch("lead_pre", br_lead_pre, "lead_pre[4]/D");
    tree->Branch("recoil_pre", br_recoil_pre, "recoil_pre[4]/D");

    tree->Branch("Q2", &br_Q2, "Q2/D");
    tree->Branch("xB", &br_xB, "xB/D");
    tree->Branch("nu", &br_nu, "nu/D");
    tree->Branch("pmiss", &br_pmiss, "pmiss/D");
    tree->Branch("scattering_angle", &br_scattering_angle, "scattering_angle/D");
    tree->Branch("nAboveKF", &br_nAboveKF, "nAboveKF/I");

    tree->Branch("nSecondaries", &br_nSecondaries, "nSecondaries/I");
    tree->Branch("nPions", &br_nPions, "nPions/I");
    tree->Branch("nPiPlus", &br_nPiPlus, "nPiPlus/I");
    tree->Branch("nPiMinus", &br_nPiMinus, "nPiMinus/I");
    tree->Branch("nPiZero", &br_nPiZero, "nPiZero/I");
    tree->Branch("leadCX", &br_leadCX, "leadCX/O");
    tree->Branch("recoilCX", &br_recoilCX, "recoilCX/O");
    tree->Branch("leadElastic", &br_leadElastic, "leadElastic/O");
    tree->Branch("recoilElastic", &br_recoilElastic, "recoilElastic/O");

    tree->Branch("nSec", &br_nSec, "nSec/I");
    tree->Branch("sec_pdg", br_sec_pdg, "sec_pdg[nSec]/I");
    tree->Branch("sec_parentRole", br_sec_parentRole, "sec_parentRole[nSec]/I");
    tree->Branch("sec_rescatterCode", br_sec_rescatterCode, "sec_rescatterCode[nSec]/I");
    tree->Branch("sec_px", br_sec_px, "sec_px[nSec]/D");
    tree->Branch("sec_py", br_sec_py, "sec_py[nSec]/D");
    tree->Branch("sec_pz", br_sec_pz, "sec_pz[nSec]/D");
    tree->Branch("sec_E", br_sec_E, "sec_E[nSec]/D");

    // Set the doFSI flag (constant for all events in this run)
    br_doFSI = doFSI ? 1 : 0;

    // Counters for summary
    const double kF = 0.25; // Fermi momentum GeV/c
    int event_count = 0;
    int success_count = 0;
    int events_zero_weight = 0;
    double total_weight = 0.0;

    // FSI summary accumulators
    int events_with_any_cx = 0, events_with_any_pion = 0, events_with_extra_nucleons = 0;
    double weight_with_any_cx = 0.0, weight_with_any_pion = 0.0, weight_with_extra_nucleons = 0.0;
    double weight_nucleons_above_kF_lt2 = 0.0, weight_nucleons_above_kF_eq2 = 0.0, weight_nucleons_above_kF_ge3 = 0.0;
    int events_nucleons_above_kF_lt2 = 0, events_nucleons_above_kF_eq2 = 0, events_nucleons_above_kF_ge3 = 0;

    const int progress_interval = 10000;
    std::cout << "Starting event loop: " << n_events << " events requested..." << std::endl;

    while (success_count < n_events) {
        event_count++;
        double weight;
        int lead_type, rec_type;
        TLorentzVector v_k_target, v_Lead_target, v_Rec_target, v_Am2_target;
        myGen->generate_event(weight, lead_type, rec_type, v_k_target, v_Lead_target, v_Rec_target, v_Am2_target);
        if (weight <= 0.0) { events_zero_weight++; continue; }

        total_weight += weight;

        // ---- FSI event stats ----
        const auto &fsi_stats = myGen->GetLastFSIEventStats();
        br_leadCX = fsi_stats.leadChargeExchange;
        br_recoilCX = fsi_stats.recoilChargeExchange;
        br_leadElastic = fsi_stats.leadElasticLike;
        br_recoilElastic = fsi_stats.recoilElasticLike;
        br_nSecondaries = fsi_stats.nSecondaries;
        br_nPions = fsi_stats.nPionsTotal;
        br_nPiPlus = fsi_stats.nPiPlus;
        br_nPiMinus = fsi_stats.nPiMinus;
        br_nPiZero = fsi_stats.nPiZero;

        // Summary counters
        if (br_leadCX || br_recoilCX) { events_with_any_cx++; weight_with_any_cx += weight; }
        if (br_nPions > 0) { events_with_any_pion++; weight_with_any_pion += weight; }

        // ---- FSI secondaries ----
        const auto &secs = myGen->GetLastFSISecondaries();
        br_nSec = std::min(static_cast<int>(secs.size()), kMaxSec);
        int nNucleonSec = 0;
        for (int i = 0; i < br_nSec; i++) {
            br_sec_pdg[i] = secs[i].pdg;
            br_sec_parentRole[i] = secs[i].parentRole;
            br_sec_rescatterCode[i] = secs[i].rescatterCode;
            br_sec_px[i] = secs[i].p4.X();
            br_sec_py[i] = secs[i].p4.Y();
            br_sec_pz[i] = secs[i].p4.Z();
            br_sec_E[i] = secs[i].p4.T();
            if (secs[i].pdg == 2212 || secs[i].pdg == 2112) nNucleonSec++;
        }
        if (nNucleonSec > 0) { events_with_extra_nucleons++; weight_with_extra_nucleons += weight; }

        // ---- Count nucleons above kF ----
        int nAboveKF = 0;
        if (v_Lead_target.Vect().Mag() > kF) nAboveKF++;
        if (v_Rec_target.Vect().Mag() > kF) nAboveKF++;
        for (const auto &sec : secs) {
            if ((sec.pdg == 2212 || sec.pdg == 2112) && sec.p4.Vect().Mag() > kF)
                nAboveKF++;
        }
        br_nAboveKF = nAboveKF;

        if (nAboveKF < 2) { weight_nucleons_above_kF_lt2 += weight; events_nucleons_above_kF_lt2++; }
        else if (nAboveKF == 2) { weight_nucleons_above_kF_eq2 += weight; events_nucleons_above_kF_eq2++; }
        else { weight_nucleons_above_kF_ge3 += weight; events_nucleons_above_kF_ge3++; }

        // ---- Kinematics ----
        TLorentzVector vbeam_target(0.0, 0.0, Ebeam, Ebeam);
        TLorentzVector q = vbeam_target - v_k_target;
        TVector3 p1 = v_Lead_target.Vect() - q.Vect();  // pmiss (reconstructed initial lead)
        double Q2 = -q.Mag2();
        double nu = vbeam_target.T() - v_k_target.T();
        double xB = (nu > 0) ? (Q2 / (2 * mN * nu)) : -1.0;
        double pmiss = p1.Mag();
        double scattering_angle = v_k_target.Vect().Theta() * 180. / M_PI;

        // ---- Fill branch variables ----
        br_weight = weight;
        br_lead_type = lead_type;
        br_rec_type = rec_type;
        br_Q2 = Q2;
        br_xB = xB;
        br_nu = nu;
        br_pmiss = pmiss;
        br_scattering_angle = scattering_angle;

        // 4-vectors: {px, py, pz, E}
        br_electron[0] = v_k_target.X(); br_electron[1] = v_k_target.Y();
        br_electron[2] = v_k_target.Z(); br_electron[3] = v_k_target.T();

        br_lead_post[0] = v_Lead_target.X(); br_lead_post[1] = v_Lead_target.Y();
        br_lead_post[2] = v_Lead_target.Z(); br_lead_post[3] = v_Lead_target.T();

        br_recoil_post[0] = v_Rec_target.X(); br_recoil_post[1] = v_Rec_target.Y();
        br_recoil_post[2] = v_Rec_target.Z(); br_recoil_post[3] = v_Rec_target.T();

        br_q[0] = q.X(); br_q[1] = q.Y();
        br_q[2] = q.Z(); br_q[3] = q.T();

        // Pre-FSI momenta
        if (doFSI) {
            TLorentzVector pre_lead = myGen->GetPreFSILead();
            TLorentzVector pre_recoil = myGen->GetPreFSIRecoil();
            br_lead_pre[0] = pre_lead.X(); br_lead_pre[1] = pre_lead.Y();
            br_lead_pre[2] = pre_lead.Z(); br_lead_pre[3] = pre_lead.T();
            br_recoil_pre[0] = pre_recoil.X(); br_recoil_pre[1] = pre_recoil.Y();
            br_recoil_pre[2] = pre_recoil.Z(); br_recoil_pre[3] = pre_recoil.T();
        } else {
            // No FSI: pre = post
            br_lead_pre[0] = br_lead_post[0]; br_lead_pre[1] = br_lead_post[1];
            br_lead_pre[2] = br_lead_post[2]; br_lead_pre[3] = br_lead_post[3];
            br_recoil_pre[0] = br_recoil_post[0]; br_recoil_pre[1] = br_recoil_post[1];
            br_recoil_pre[2] = br_recoil_post[2]; br_recoil_pre[3] = br_recoil_post[3];
        }

        // ---- Fill tree ----
        tree->Fill();
        success_count++;

        if (success_count % progress_interval == 0) {
            std::cout << "\r  " << success_count << " / " << n_events
                      << " events (" << (100.0 * success_count / n_events) << "%)" << std::flush;
        }
    }
    std::cout << "\r  " << success_count << " / " << n_events << " events (100%)    " << std::endl;

    // ---- Write tree and close ----
    outfile->cd();
    tree->Write();
    outfile->Close();

    // ---- Print summary ----
    double gen_eff = 100.0 * success_count / event_count;
    std::cout << "\n========================================\n"
              << "  Summary\n"
              << "========================================\n"
              << "  Events generated (total attempts): " << event_count << "\n"
              << "  Events saved (weight > 0):         " << success_count << "\n"
              << "  Events with weight = 0:            " << events_zero_weight << "\n"
              << "  Generation efficiency:             " << gen_eff << "%\n"
              << "  Total weight:                      " << total_weight << "\n"
              << "\n--- FSI summary ---\n";
    if (doFSI) {
        std::cout << "  Charge exchange:      " << events_with_any_cx
                  << " events (" << (100.0 * weight_with_any_cx / total_weight) << "% weight)\n"
                  << "  Pion production:      " << events_with_any_pion
                  << " events (" << (100.0 * weight_with_any_pion / total_weight) << "% weight)\n"
                  << "  Extra nucleon sec.:   " << events_with_extra_nucleons
                  << " events (" << (100.0 * weight_with_extra_nucleons / total_weight) << "% weight)\n";
    } else {
        std::cout << "  (FSI disabled)\n";
    }
    std::cout << "\n--- Final nucleon multiplicity above kF=" << kF << " GeV/c ---\n"
              << "  <2 above kF:   " << events_nucleons_above_kF_lt2
              << "  (wfrac " << (100.0 * weight_nucleons_above_kF_lt2 / total_weight) << "%)\n"
              << "  =2 above kF:   " << events_nucleons_above_kF_eq2
              << "  (wfrac " << (100.0 * weight_nucleons_above_kF_eq2 / total_weight) << "%)\n"
              << "  >=3 above kF:  " << events_nucleons_above_kF_ge3
              << "  (wfrac " << (100.0 * weight_nucleons_above_kF_ge3 / total_weight) << "%)\n"
              << "========================================\n"
              << "Output written to: " << output_filename << "\n";

    delete myGen;
    delete myCS;
    delete myNucleus;
    delete myRand;

    return 0;
}
