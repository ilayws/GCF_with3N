#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <map>
#include <sys/stat.h>
#include <sys/types.h>
#include "QEGeneratorFSI.hh"
#include "nucleus/gcfNucleus.hh"
#include "constants.hh"
#include "TVector3.h"
#include "TLorentzVector.h"

using namespace std;

// Helper function to create directory if it doesn't exist
bool create_directory(const std::string& path) {
    struct stat info;
    if (stat(path.c_str(), &info) != 0) {
        // Directory doesn't exist, create it
        #ifdef _WIN32
            return mkdir(path.c_str()) == 0;
        #else
            return mkdir(path.c_str(), 0755) == 0;
        #endif
    } else if (info.st_mode & S_IFDIR) {
        // Directory already exists
        return true;
    } else {
        // Path exists but is not a directory
        return false;
    }
}

eNCrossSection * myCS;
QEGeneratorFSI * myGen;
TRandom3 * myRand;
gcfNucleus * myNucleus;

/*
Generates many (n_events) for 2N SRC analysis. 
For each event, calculates vars (e.g theta12, Q^2, xB, etc.)
Saves:
- 1D histogram of theta12 (angle between lead and recoil nucleons)
- 2D histogram of xB-Q2
- Many 1D histograms that can be configured in saved_vars list
- Per-region histograms based on xB ranges (analogous to 3N theta regions)

Takes in:
int (n_events) : number of successful events to generate
*/

// Histogram settings for xB-Q2 (2D)
const int xB_bins = 500;
const int Q2_bins = 500;
const double xB_min = 0.0;
const double xB_max = 4.0;
const double Q2_min = 2.0;
const double Q2_max = 10.0;

// 1D histogram settings
const int hist1D_bins = 45;

// theta histogram settings (angle between p1 and p2 / p2 and p3_hyp)
// Increased resolution for theta12-theta23 heatmaps.
const int theta12_bins = 100;

int n_events = 1000000;

int main(int argc, char **argv) {
    if (argc > 1) {
        n_events = std::stoi(argv[1]);
    }
    // Optional: argv[2] = 0 to run without FSI (useful for comparing FSI on vs off)
    bool doFSI = true;
    if (argc > 2) doFSI = (std::atoi(argv[2]) != 0);

    // Optional: argv[3] = FSI model: "hN" (default) or "hA"
    FSIModel fsiModel = kHN2018;
    if (argc > 3) {
        std::string modelStr = argv[3];
        if (modelStr == "hA" || modelStr == "HA") fsiModel = kHA2018;
    }

    const char* fsi_model_name = (fsiModel == kHN2018) ? "hN" : "hA";
    std::string fsi_backend_str = std::string("ENABLED (GENIE ") + fsi_model_name + " intranuke cascade)";

    // Create output directories for different file types
    std::string base_output_dir = "analysis_output_2N";
    std::string txt_dir = base_output_dir + "/txt_files";
    std::string png_dir = base_output_dir + "/png_files";
    std::string data_dir = base_output_dir + "/data_files";
    
    if (!create_directory(base_output_dir)) {
        std::cerr << "Error: Could not create output directory: " << base_output_dir << std::endl;
        return 1;
    }
    if (!create_directory(txt_dir)) {
        std::cerr << "Error: Could not create txt directory: " << txt_dir << std::endl;
        return 1;
    }
    if (!create_directory(png_dir)) {
        std::cerr << "Error: Could not create png directory: " << png_dir << std::endl;
        return 1;
    }
    if (!create_directory(data_dir)) {
        std::cerr << "Error: Could not create data directory: " << data_dir << std::endl;
        return 1;
    }
    
    std::cout << "Created output directories:" << std::endl;
    std::cout << "  Text files: " << txt_dir << std::endl;
    std::cout << "  PNG files: " << png_dir << std::endl;
    std::cout << "  Data files: " << data_dir << std::endl;

    // Define ranges for different variable types
    const double theta_min = 0.0;    // degrees
    const double theta_max = 180.0;  // degrees
    const double phi_min = -180.0;   // degrees
    const double phi_max = 180.0;    // degrees

    myRand = new TRandom3(0);
    ffModel ffMod = kelly;
    csMethod csMeth = cc2;
    myCS = new eNCrossSection(csMeth, ffMod);
    
    // Deuteron
    myNucleus = new gcfNucleus(2, 2, (char*)"AV18");
    
    const double Ebeam = 6.0; // GeV
    myGen = new QEGeneratorFSI(Ebeam, myNucleus, myCS, myRand);
    myGen->EnableFSI(doFSI);
    if (doFSI) {
        myGen->SetFSIModel(fsiModel);
        myGen->SetFSITuning(220.);
    }
    std::cout << "FSI: " << (doFSI ? fsi_backend_str.c_str() : "DISABLED") << "\n";

    // 1D histogram for theta12 (angle between lead and recoil)
    std::vector<double> hist_theta12(theta12_bins, 0.0);
    std::vector<int> hist_theta12_count(theta12_bins, 0);

    // 2D histogram for xB-Q2
    std::vector<std::vector<double>> hist_xB_Q2(Q2_bins, std::vector<double>(xB_bins, 0.0));

    // 2D 3-body theta heatmap — same format as SRC_analysis_3N hist_theta12_theta23.txt
    // Axes: theta12 = angle(p_lead_final, p_recoil),  theta23 = angle(p_recoil, p3_hyp)
    // Grid shape [theta23_idx][theta12_idx], using theta12_bins x theta12_bins bins
    std::vector<std::vector<double>> hist_theta_3body(theta12_bins, std::vector<double>(theta12_bins, 0.0));

    // Number of regions for different xB ranges (analogous to 3N theta regions)
    // For 2N, we use xB-based regions instead of theta12-theta23 regions
    int n_regions = 5;
    struct TargetRegion {
        double xB_center;
        double xB_width;
        std::string description;
        // Histograms for all variables in saved_vars
        std::vector<std::vector<double>> var_histograms;
        std::vector<std::vector<int>> var_counts;
        // 2D xB-Q2 histogram for this region
        std::vector<std::vector<double>> hist_xB_Q2;
        // 2D 3-body theta heatmap for this region
        std::vector<std::vector<double>> hist_theta_3body;
        
        TargetRegion(double xB_c, double xB_w, const std::string& desc, int n_vars)
            : xB_center(xB_c), xB_width(xB_w), description(desc),
              var_histograms(n_vars, std::vector<double>(hist1D_bins, 0.0)),
              var_counts(n_vars, std::vector<int>(hist1D_bins, 0)),
              hist_xB_Q2(Q2_bins, std::vector<double>(xB_bins, 0.0)),
              hist_theta_3body(theta12_bins, std::vector<double>(theta12_bins, 0.0)) {}
    };

    // Define variable info structure
    struct VariableInfo {
        std::string name;
        std::string unit;
        double min_val;
        double max_val;
        std::vector<double> histogram;
        std::vector<int> event_count;
        
        VariableInfo(const std::string& n, const std::string& u, double min_v, double max_v) 
            : name(n), unit(u), min_val(min_v), max_val(max_v), histogram(hist1D_bins, 0.0), event_count(hist1D_bins, 0) {}
    };
    
    // List of variables to save - 2N-relevant variables
    std::vector<VariableInfo> saved_vars = {
        {"Q2", "GeV^2", Q2_min, Q2_max},
        {"xB", "", xB_min, xB_max},
        
        {"Outgoing e angle with beam dir (z)", "deg", 0, 50},
        {"Outgoing e angle with q dir", "deg", 30, 90},
        {"Outgoing e mom.", "GeV/c", 0, 8},

        {"Incoming lead angle with beam dir (z)", "degrees", theta_min, theta_max},
        {"Incoming lead angle with q dir", "degrees", theta_min, theta_max},
        {"pmiss", "GeV/c", 0.0, 1.5},

        {"Recoil angle with beam dir (z)", "degrees", theta_min, theta_max},
        {"Recoil angle with q dir", "degrees", theta_min, theta_max},
        {"Recoil mom.", "GeV/c", 0.0, 1.5},

        {"Outgoing lead angle with beam dir (z)", "degrees", theta_min, theta_max},
        {"Outgoing lead angle with q dir", "degrees", 0, 50},
        {"Outgoing lead mom.", "GeV/c", 0, 8},

        // 2N-specific variables
        // Note: 'pmiss' and 'Lead Nucleon Momentum' (below) are DIFFERENT here.
        // pmiss  = |p1| = |p_lead_out - q|  (experimentally reconstructed initial lead, FSI-affected)
        // The pair observables below use both nucleons and are sensitive to FSI
        {"theta12", "degrees", theta_min, theta_max},  // angle between lead (p1) and recoil (p2)
        // Pair CM momentum: |p1+p2| — for a real SRC pair this is ~0; FSI pushes it up
        {"Pair CM mom. |p1+p2|", "GeV/c", 0, 1.0},
        // Pair relative momentum: |p1-p2|/2 — the internal SRC pair momentum
        {"Pair relative mom. |p1-p2|/2", "GeV/c", 0, 1.0},

        // Hypothetical 3rd nucleon (proton): reconstructed from p3 = -(p1_after + p2)
        // assuming zero total CM momentum of a 3N system
        {"3rd nucleon (p) hyp. mom.", "GeV/c", 0.0, 1.5},
        {"3rd nucleon (p) hyp. angle with beam", "degrees", theta_min, theta_max},
        {"3rd nucleon (p) hyp. angle with q",    "degrees", theta_min, theta_max}
    };
    
    // Define xB-based regions for 2N analysis
    // These are analogous to the theta12-theta23 regions in 3N
    std::vector<TargetRegion> target_regions;
    // Region 0: xB < 1 (quasi-elastic peak region)
    target_regions.emplace_back(0.5, 1.0, "xB < 1 (QE region)", saved_vars.size());
    // Region 1: 1 < xB < 1.5 (2N SRC onset)
    target_regions.emplace_back(1.25, 0.5, "1 < xB < 1.5 (SRC onset)", saved_vars.size());
    // Region 2: 1.5 < xB < 2 (2N SRC region)
    target_regions.emplace_back(1.75, 0.5, "1.5 < xB < 2 (2N SRC)", saved_vars.size());
    // Region 3: 2 < xB < 2.5 (high xB region)
    target_regions.emplace_back(2.25, 0.5, "2 < xB < 2.5 (high xB)", saved_vars.size());
    // Region 4: xB > 2.5 (very high xB)
    target_regions.emplace_back(3.0, 1.0, "xB > 2.5 (very high xB)", saved_vars.size());

    // Create index map for easy access
    std::map<std::string, int> var_index;
    for (size_t i = 0; i < saved_vars.size(); ++i) {
        var_index[saved_vars[i].name] = i;
    }

    const double dxB = (xB_max - xB_min) / xB_bins;
    const double dQ2 = (Q2_max - Q2_min) / Q2_bins;
    const double dTheta12Deg = 180.0 / theta12_bins;

    // Calculate bin sizes for all saved variables
    std::vector<double> bin_sizes(saved_vars.size());
    for (size_t i = 0; i < saved_vars.size(); ++i) {
        bin_sizes[i] = (saved_vars[i].max_val - saved_vars[i].min_val) / hist1D_bins;
    }

    // Helper function to fill histogram
    auto fill_histogram = [&](const std::string& var_name, double value, double weight) {
        auto it = var_index.find(var_name);
        if (it != var_index.end()) {
            int idx = it->second;
            if (value >= saved_vars[idx].min_val && value < saved_vars[idx].max_val) {
                int bin = static_cast<int>((value - saved_vars[idx].min_val) / bin_sizes[idx]);
                bin = std::max(0, std::min(bin, hist1D_bins - 1));
                saved_vars[idx].histogram[bin] += weight;
                saved_vars[idx].event_count[bin]++;
            }
        }
    };

    // Helper function to fill target region histograms
    auto fill_target_histogram = [&](int region_idx, const std::string& var_name, double value, double weight) {
        auto it = var_index.find(var_name);
        if (it != var_index.end()) {
            int var_idx = it->second;
            if (value >= saved_vars[var_idx].min_val && value < saved_vars[var_idx].max_val) {
                int bin = static_cast<int>((value - saved_vars[var_idx].min_val) / bin_sizes[var_idx]);
                bin = std::max(0, std::min(bin, hist1D_bins - 1));
                target_regions[region_idx].var_histograms[var_idx][bin] += weight;
                target_regions[region_idx].var_counts[var_idx][bin]++;
            }
        }
    };

    // Helper function to determine which xB region an event belongs to
    auto get_xB_region = [&](double xB) -> int {
        if (xB < 1.0) return 0;
        else if (xB < 1.5) return 1;
        else if (xB < 2.0) return 2;
        else if (xB < 2.5) return 3;
        else return 4;
    };

    // Generate many events
    int event_count = 0;
    int success_count = 0;
    int events_zero_weight = 0;  // counts weight=0 from FSI absorption, Pauli blocking, or kinematic failure
    int events_with_any_cx = 0;
    int events_with_lead_cx = 0;
    int events_with_recoil_cx = 0;
    int total_cx_transitions = 0;
    int events_with_any_elastic = 0;
    int events_with_lead_elastic = 0;
    int events_with_recoil_elastic = 0;
    int total_elastic_scatterings = 0;
    int events_with_any_pion = 0;
    long long total_secondaries = 0;
    long long total_pions = 0;
    long long total_pi_plus = 0;
    long long total_pi_minus = 0;
    long long total_pi_zero = 0;
    const int progress_interval = 10000;
    std::cout << "Starting event loop: " << n_events << " events requested..." << std::endl;
    std::cout << std::flush;

    while (success_count < n_events) {
        event_count++;
        double weight;
        int lead_type, rec_type;
        TLorentzVector v_k_target, v_Lead_target, v_Rec_target, v_Am2_target;
        myGen->generate_event(weight, lead_type, rec_type, v_k_target, v_Lead_target, v_Rec_target, v_Am2_target);
        if (weight <= 0.0) { events_zero_weight++; continue; }

        const auto &fsi_stats = myGen->GetLastFSIEventStats();
        const bool any_cx = fsi_stats.leadChargeExchange || fsi_stats.recoilChargeExchange;
        if (any_cx) events_with_any_cx++;
        if (fsi_stats.leadChargeExchange) events_with_lead_cx++;
        if (fsi_stats.recoilChargeExchange) events_with_recoil_cx++;
        total_cx_transitions += (fsi_stats.leadChargeExchange ? 1 : 0)
                      + (fsi_stats.recoilChargeExchange ? 1 : 0);

        const bool any_elastic = fsi_stats.leadElasticLike || fsi_stats.recoilElasticLike;
        if (any_elastic) events_with_any_elastic++;
        if (fsi_stats.leadElasticLike) events_with_lead_elastic++;
        if (fsi_stats.recoilElasticLike) events_with_recoil_elastic++;
        total_elastic_scatterings += (fsi_stats.leadElasticLike ? 1 : 0)
                       + (fsi_stats.recoilElasticLike ? 1 : 0);

        total_secondaries += static_cast<long long>(fsi_stats.nSecondaries);
        total_pions += static_cast<long long>(fsi_stats.nPionsTotal);
        total_pi_plus += static_cast<long long>(fsi_stats.nPiPlus);
        total_pi_minus += static_cast<long long>(fsi_stats.nPiMinus);
        total_pi_zero += static_cast<long long>(fsi_stats.nPiZero);
        if (fsi_stats.nPionsTotal > 0) events_with_any_pion++;

        TLorentzVector vbeam_target(0.0, 0.0, Ebeam, Ebeam);
        TLorentzVector q = vbeam_target - v_k_target;
        // p1: reconstructed initial lead momentum = (FSI-scattered outgoing lead) - q.
        // This equals the true GCF initial lead momentum only when FSI is off.
        // With FSI on it is the experimentally-reconstructed missing momentum (FSI-affected),
        // which is the physically relevant quantity for experimental comparison.
        TVector3 p1 = v_Lead_target.Vect() - q.Vect();
        // p1_after: detected outgoing lead momentum after FSI scatter + QE
        TVector3 p1_after = v_Lead_target.Vect();
        // p2: detected recoil momentum after FSI (FSI-modified from original GCF recoil)
        TVector3 p2 = v_Rec_target.Vect();
        // p3_hyp: hypothetical 3rd nucleon (assumed proton) momentum reconstructed from
        // zero total CM momentum of a 3-nucleon system: p1_after + p2 + p3 = 0
        // Uses the FINAL detected momenta of both nucleons.
        TVector3 p3_hyp = -(p1 + p2);
        double Q2 = -q.Mag2();
        if (Q2 < Q2_min || Q2 >= Q2_max) {continue;}
        TVector3 p_total = p1 + p2;
        TVector3 q_3vec = q.Vect();
        TVector3 p_miss = p1;
        double pmiss = p_miss.Mag();
        double nu = vbeam_target.T() - v_k_target.T();
        double xB = (nu > 0) ? (Q2 / (2 * mN * nu)) : -1.0;
        
        // Calculate theta12: angle between lead and recoil nucleon momenta
        double theta12 = p1.Angle(p2) * 180.0 / M_PI;

        // 3-body angles using FINAL detected momenta (consistent with p3_hyp reconstruction):
        //   theta12_3b = angle(p_lead_final, p_recoil)
        //   theta23_3b = angle(p_recoil, p3_hyp)      where p3_hyp = -(p_lead_final + p_recoil)
        double theta12_3b = p1_after.Angle(p2) * 180.0 / M_PI;
        double theta23_3b = p2.Angle(p3_hyp) * 180.0 / M_PI;

        // Calculate all variables for this event
        double scattering_angle = v_k_target.Vect().Theta() * 180. / M_PI;
        double outgoing_e_mom = v_k_target.T();
        double p1_mom = p1.Mag();
        double p1_angle = p1.Theta() * 180. / M_PI;
        double outgoing_p1_mom = p1_after.Mag();
        double outgoing_p1_angle = p1_after.Theta() * 180. / M_PI;
        
        // Fill 1D histograms for all events
        fill_histogram("xB", xB, weight);
        fill_histogram("Q2", Q2, weight);

        fill_histogram("Outgoing e angle with beam dir (z)", v_k_target.Vect().Theta() * 180. / M_PI, weight);
        fill_histogram("Outgoing e angle with q dir", v_k_target.Vect().Angle(q_3vec) * 180. / M_PI, weight);
        fill_histogram("Outgoing e mom.", outgoing_e_mom, weight);

        fill_histogram("Incoming lead angle with beam dir (z)", p1.Theta() * 180. / M_PI, weight);
        fill_histogram("Incoming lead angle with q dir", p1.Angle(q_3vec) * 180. / M_PI, weight);
        fill_histogram("pmiss", pmiss, weight);

        fill_histogram("Recoil angle with beam dir (z)", p2.Theta() * 180. / M_PI, weight);
        fill_histogram("Recoil angle with q dir", p2.Angle(q_3vec) * 180. / M_PI, weight);
        fill_histogram("Recoil mom.", p2.Mag(), weight);

        fill_histogram("Outgoing lead angle with beam dir (z)", p1_after.Theta() * 180. / M_PI, weight);
        fill_histogram("Outgoing lead angle with q dir", p1_after.Angle(q_3vec) * 180. / M_PI, weight);
        fill_histogram("Outgoing lead mom.", outgoing_p1_mom, weight);

        // 2N-specific variables
        fill_histogram("theta12", theta12, weight);
        fill_histogram("Pair CM mom. |p1+p2|",       (p1 + p2).Mag(),       weight);
        fill_histogram("Pair relative mom. |p1-p2|/2", (p1 - p2).Mag() / 2., weight);

        // Hypothetical 3rd nucleon variables
        fill_histogram("3rd nucleon (p) hyp. mom.",           p3_hyp.Mag(),                         weight);
        fill_histogram("3rd nucleon (p) hyp. angle with beam", p3_hyp.Theta() * 180. / M_PI,         weight);
        fill_histogram("3rd nucleon (p) hyp. angle with q",    p3_hyp.Angle(q_3vec) * 180. / M_PI,  weight);

        // Fill theta12 histogram
        if (theta12 >= 0.0 && theta12 <= 180.0) {
            int it = static_cast<int>(theta12 / dTheta12Deg);
            if (it >= theta12_bins) it = theta12_bins - 1;
            hist_theta12[it] += weight;
            hist_theta12_count[it]++;
        }

        // Fill 2D 3-body theta heatmap [theta23_idx][theta12_idx] — mirrors SRC_analysis_3N convention
        if (theta12_3b >= 0.0 && theta12_3b <= 180.0 && theta23_3b >= 0.0 && theta23_3b <= 180.0) {
            int it1 = std::min(static_cast<int>(theta12_3b / dTheta12Deg), theta12_bins - 1);
            int it2 = std::min(static_cast<int>(theta23_3b / dTheta12Deg), theta12_bins - 1);
            hist_theta_3body[it2][it1] += weight;
        }

        // Fill 2D xB-Q2 histogram
        if (xB >= xB_min && xB < xB_max && Q2 >= Q2_min && Q2 < Q2_max) {
            int ix = static_cast<int>((xB - xB_min) / dxB);
            int iq = static_cast<int>((Q2 - Q2_min) / dQ2);
            ix = std::max(0, std::min(ix, xB_bins - 1));
            iq = std::max(0, std::min(iq, Q2_bins - 1));
            hist_xB_Q2[iq][ix] += weight;
        }

        // Determine which xB region this event belongs to and fill region histograms
        int iregion = get_xB_region(xB);
        if (iregion >= 0 && iregion < n_regions) {
            // Fill histograms for all variables
            fill_target_histogram(iregion, "xB", xB, weight);
            fill_target_histogram(iregion, "Q2", Q2, weight);

            fill_target_histogram(iregion, "Outgoing e angle with beam dir (z)", v_k_target.Vect().Theta() * 180. / M_PI, weight);
            fill_target_histogram(iregion, "Outgoing e angle with q dir", v_k_target.Vect().Angle(q_3vec) * 180. / M_PI, weight);
            fill_target_histogram(iregion, "Outgoing e mom.", outgoing_e_mom, weight);

            fill_target_histogram(iregion, "Incoming lead angle with beam dir (z)", p1.Theta() * 180. / M_PI, weight);
            fill_target_histogram(iregion, "Incoming lead angle with q dir", p1.Angle(q_3vec) * 180. / M_PI, weight);
            fill_target_histogram(iregion, "pmiss", pmiss, weight);

            fill_target_histogram(iregion, "Recoil angle with beam dir (z)", p2.Theta() * 180. / M_PI, weight);
            fill_target_histogram(iregion, "Recoil angle with q dir", p2.Angle(q_3vec) * 180. / M_PI, weight);
            fill_target_histogram(iregion, "Recoil mom.", p2.Mag(), weight);

            fill_target_histogram(iregion, "Outgoing lead angle with beam dir (z)", p1_after.Theta() * 180. / M_PI, weight);
            fill_target_histogram(iregion, "Outgoing lead angle with q dir", p1_after.Angle(q_3vec) * 180. / M_PI, weight);
            fill_target_histogram(iregion, "Outgoing lead mom.", outgoing_p1_mom, weight);

            // 2N-specific variables
            fill_target_histogram(iregion, "theta12", theta12, weight);
            fill_target_histogram(iregion, "Pair CM mom. |p1+p2|",       (p1 + p2).Mag(),       weight);
            fill_target_histogram(iregion, "Pair relative mom. |p1-p2|/2", (p1 - p2).Mag() / 2., weight);

            // Hypothetical 3rd nucleon variables
            fill_target_histogram(iregion, "3rd nucleon (p) hyp. mom.",           p3_hyp.Mag(),                        weight);
            fill_target_histogram(iregion, "3rd nucleon (p) hyp. angle with beam", p3_hyp.Theta() * 180. / M_PI,        weight);
            fill_target_histogram(iregion, "3rd nucleon (p) hyp. angle with q",    p3_hyp.Angle(q_3vec) * 180. / M_PI, weight);

            // Fill 2D xB-Q2 histogram for this region
            if (xB >= xB_min && xB < xB_max && Q2 >= Q2_min && Q2 < Q2_max) {
                int ix = static_cast<int>((xB - xB_min) / dxB);
                int iq = static_cast<int>((Q2 - Q2_min) / dQ2);
                ix = std::max(0, std::min(ix, xB_bins - 1));
                iq = std::max(0, std::min(iq, Q2_bins - 1));
                target_regions[iregion].hist_xB_Q2[iq][ix] += weight;
            }

            // Fill 2D 3-body theta heatmap for this region
            if (theta12_3b >= 0.0 && theta12_3b <= 180.0 && theta23_3b >= 0.0 && theta23_3b <= 180.0) {
                int it1 = std::min(static_cast<int>(theta12_3b / dTheta12Deg), theta12_bins - 1);
                int it2 = std::min(static_cast<int>(theta23_3b / dTheta12Deg), theta12_bins - 1);
                target_regions[iregion].hist_theta_3body[it2][it1] += weight;
            }
        }
        
        success_count++;
        if (success_count % progress_interval == 0) {
            std::cout << "Successful events: " << success_count << " / " << n_events
                      << "  (FSI " << (doFSI ? "ON" : "OFF") << ", tried "
                      << event_count << ", zero-weight " << events_zero_weight << ")" << std::endl;
        }
    }

    // Write histograms to files
    
    // Write theta12 histogram
    {
        std::ofstream hout(txt_dir + "/hist_theta12_1D.txt");
        hout << std::fixed << std::setprecision(25);
        hout << "# theta12 (angle between lead and recoil nucleons) 1D histogram, " << theta12_bins << " bins, range [0, 180] degrees\n";
        hout << "# Columns: theta12_center weight event_count\n";
        for (int i = 0; i < theta12_bins; ++i) {
            double center = (i + 0.5) * dTheta12Deg;
            hout << center << " " << hist_theta12[i] << " " << hist_theta12_count[i] << "\n";
        }
    }

    // Write 2D xB-Q2 histogram
    {
        std::ofstream hout(txt_dir + "/hist_xB_Q2.txt");
        hout << std::fixed << std::setprecision(25);
        hout << "# 2D xB-Q2 histogram\n";
        hout << "# xB_bins " << xB_bins << " xB_min " << xB_min << " xB_max " << xB_max
             << " Q2_bins " << Q2_bins << " Q2_min " << Q2_min << " Q2_max " << Q2_max << "\n";
        hout << "# Columns: xB_center Q2_center weight\n";
        for (int iq = 0; iq < Q2_bins; ++iq) {
            double Q2_center = Q2_min + (iq + 0.5) * dQ2;
            for (int ix = 0; ix < xB_bins; ++ix) {
                double xB_center = xB_min + (ix + 0.5) * dxB;
                double w = hist_xB_Q2[iq][ix];
                hout << xB_center << " " << Q2_center << " " << w << "\n";
            }
        }
    }

    // Write 2D 3-body theta heatmap (identical format to SRC_analysis_3N hist_theta12_theta23.txt)
    {
        std::ofstream hout(txt_dir + "/hist_theta12_theta23_3body.txt");
        hout << std::fixed << std::setprecision(25);
        hout << "# 3-body theta heatmap from 2N FSI generator + hypothetical 3rd nucleon\n";
        hout << "# theta12 = angle(p_lead_final, p_recoil),  theta23 = angle(p_recoil, p3_hyp)\n";
        hout << "# p3_hyp = -(p_lead_final + p_recoil)  [zero-COM 3N assumption]\n";
        hout << "# theta_bins " << theta12_bins << " range_deg [0,180]\n";
        hout << "# Columns: theta12_center theta23_center weight\n";
        const double dTh = 180.0 / theta12_bins;
        for (int it2 = 0; it2 < theta12_bins; ++it2) {
            double th23_center = (it2 + 0.5) * dTh;
            for (int it1 = 0; it1 < theta12_bins; ++it1) {
                double th12_center = (it1 + 0.5) * dTh;
                hout << th12_center << " " << th23_center << " " << hist_theta_3body[it2][it1] << "\n";
            }
        }
    }

    // Write 1D histograms to files systematically
    for (const auto& var : saved_vars) {
        std::string filename = txt_dir + "/hist_" + var.name + "_1D.txt";
        std::ofstream hout(filename);
        hout << std::fixed << std::setprecision(25);
        std::string unit_str = var.unit.empty() ? "" : " " + var.unit;
        hout << "# " << var.name << " 1D histogram, " << hist1D_bins << " bins, range [" 
             << var.min_val << ", " << var.max_val << "]" << unit_str << "\n";
        hout << "# Columns: " << var.name << "_center weight event_count\n";
        double bin_size = (var.max_val - var.min_val) / hist1D_bins;
        for (int i = 0; i < hist1D_bins; ++i) {
            double center = var.min_val + (i + 0.5) * bin_size;
            hout << center << " " << var.histogram[i] << " " << var.event_count[i] << "\n";
        }
    }

    // Write per-region histograms (analogous to 3N's per-theta-region histograms)
    for (int iregion = 0; iregion < n_regions; ++iregion) {
        // Write histograms for all variables for this target region
        for (size_t var_idx = 0; var_idx < saved_vars.size(); ++var_idx) {
            const auto& var = saved_vars[var_idx];
            std::string fname = txt_dir + "/hist_" + var.name + "_region" + std::to_string(iregion) + "_1D.txt";
            std::ofstream hout(fname);
            hout << std::fixed << std::setprecision(25);
            hout << "# " << var.name << " histogram for region " << iregion << " (" << target_regions[iregion].description << ")\n";
            hout << "# Columns: " << var.name << "_center weight event_count\n";
            double bin_size = (var.max_val - var.min_val) / hist1D_bins;
            for (int i = 0; i < hist1D_bins; ++i) {
                double center = var.min_val + (i + 0.5) * bin_size;
                double weight = target_regions[iregion].var_histograms[var_idx][i];
                hout << center << " " << weight << " " << target_regions[iregion].var_counts[var_idx][i] << "\n";
            }
        }
        
        // Write 2D xB-Q2 histogram for this region
        std::string fname_2d = txt_dir + "/hist_xB_Q2_region" + std::to_string(iregion) + ".txt";
        std::ofstream h2d(fname_2d);
        h2d << std::fixed << std::setprecision(25);
        h2d << "# 2D xB-Q2 histogram for region " << iregion << " (" << target_regions[iregion].description << ")\n";
        h2d << "# xB_bins " << xB_bins << " xB_min " << xB_min << " xB_max " << xB_max
            << " Q2_bins " << Q2_bins << " Q2_min " << Q2_min << " Q2_max " << Q2_max << "\n";
        h2d << "# Columns: xB_center Q2_center weight\n";
        for (int iq = 0; iq < Q2_bins; ++iq) {
            double Q2_center = Q2_min + (iq + 0.5) * dQ2;
            for (int ix = 0; ix < xB_bins; ++ix) {
                double xB_center = xB_min + (ix + 0.5) * dxB;
                double w = target_regions[iregion].hist_xB_Q2[iq][ix];
                h2d << xB_center << " " << Q2_center << " " << w << "\n";
            }
        }

        // Write 2D 3-body theta heatmap for this region
        {
            std::string fname_th = txt_dir + "/hist_theta12_theta23_3body_region" + std::to_string(iregion) + ".txt";
            std::ofstream hth(fname_th);
            hth << std::fixed << std::setprecision(25);
            hth << "# 3-body theta heatmap for region " << iregion << " (" << target_regions[iregion].description << ")\n";
            hth << "# theta12 = angle(p_lead_final, p_recoil),  theta23 = angle(p_recoil, p3_hyp)\n";
            hth << "# theta_bins " << theta12_bins << " range_deg [0,180]\n";
            hth << "# Columns: theta12_center theta23_center weight\n";
            const double dTh = 180.0 / theta12_bins;
            for (int it2 = 0; it2 < theta12_bins; ++it2) {
                double th23_center = (it2 + 0.5) * dTh;
                for (int it1 = 0; it1 < theta12_bins; ++it1) {
                    double th12_center = (it1 + 0.5) * dTh;
                    hth << th12_center << " " << th23_center << " " << target_regions[iregion].hist_theta_3body[it2][it1] << "\n";
                }
            }
        }
    }

    // Write FSI event-level summary statistics for downstream plotting/reporting
    {
        std::ofstream sout(txt_dir + "/fsi_event_stats.txt");
        sout << std::fixed << std::setprecision(8);
        sout << "# FSI event-level statistics (accepted events only; weight > 0)\n";
        sout << "# key value\n";
        sout << "accepted_events " << success_count << "\n";
        sout << "events_with_any_cx " << events_with_any_cx << "\n";
        sout << "events_with_lead_cx " << events_with_lead_cx << "\n";
        sout << "events_with_recoil_cx " << events_with_recoil_cx << "\n";
        sout << "total_cx_transitions " << total_cx_transitions << "\n";
        sout << "events_with_any_elastic " << events_with_any_elastic << "\n";
        sout << "events_with_lead_elastic " << events_with_lead_elastic << "\n";
        sout << "events_with_recoil_elastic " << events_with_recoil_elastic << "\n";
        sout << "total_elastic_scatterings " << total_elastic_scatterings << "\n";
        sout << "events_with_any_pion " << events_with_any_pion << "\n";
        sout << "total_secondaries " << total_secondaries << "\n";
        sout << "total_pions " << total_pions << "\n";
        sout << "total_pi_plus " << total_pi_plus << "\n";
        sout << "total_pi_minus " << total_pi_minus << "\n";
        sout << "total_pi_zero " << total_pi_zero << "\n";
        const double denom = static_cast<double>(std::max(success_count, 1));
        sout << "frac_events_with_any_cx " << (events_with_any_cx / denom) << "\n";
        sout << "frac_events_with_any_elastic " << (events_with_any_elastic / denom) << "\n";
        sout << "frac_events_with_any_pion " << (events_with_any_pion / denom) << "\n";
        sout << "avg_secondaries_per_event " << (static_cast<double>(total_secondaries) / denom) << "\n";
        sout << "avg_pions_per_event " << (static_cast<double>(total_pions) / denom) << "\n";
    }

    std::cout << "\n2D xB-Q2 histogram written to hist_xB_Q2.txt\n";
    std::cout << "3-body theta heatmap written to hist_theta12_theta23_3body.txt\n";
    std::cout << "Per-region theta heatmaps written to hist_theta12_theta23_3body_region*.txt\n";
    std::cout << "theta12 histogram written to hist_theta12_1D.txt\n";
    std::cout << "Per-region histograms written to hist_*_region*.txt\n";
    std::cout << "\nRegions used:\n";
    for (int i = 0; i < n_regions; ++i) {
        std::cout << "  Region " << i << ": " << target_regions[i].description << "\n";
    }
    
    std::cout << "\n1D histograms saved for variables:\n";
    std::cout << "saved_vars = [";
    for (size_t i = 0; i < saved_vars.size(); ++i) {
        if (i > 0) std::cout << ", ";
        std::cout << "'" << saved_vars[i].name << "'";
    }
    std::cout << "]\n";

    // FSI efficiency summary
    std::cout << "\n--- FSI / event statistics ---\n";
    std::cout << "  FSI mode:             " << (doFSI ? fsi_backend_str.c_str() : "DISABLED") << "\n";
    std::cout << "  Total attempts:       " << event_count << "\n";
    std::cout << "  Accepted (weight>0):  " << success_count << "\n";
    std::cout << "  Rejected (weight=0):  " << events_zero_weight
              << "  (" << std::fixed << std::setprecision(1)
              << 100.0 * events_zero_weight / std::max(event_count, 1) << "%)\n";
    std::cout << "  Gen. efficiency:      "
              << std::setprecision(2) << 100.0 * success_count / std::max(event_count, 1) << "%\n";
    if (doFSI)
        std::cout << "  Note: zero-weight events include FSI absorption, Pauli blocking,\n"
                     "        and generator-level kinematic failures.\n";

    std::cout << "\n--- FSI channel summary (accepted events) ---\n";
    std::cout << "  Events with any CX:    " << events_with_any_cx
              << "  (" << std::setprecision(2)
              << 100.0 * events_with_any_cx / std::max(success_count, 1) << "%)\n";
    std::cout << "  Lead CX events:        " << events_with_lead_cx << "\n";
    std::cout << "  Recoil CX events:      " << events_with_recoil_cx << "\n";
    std::cout << "  Total CX transitions:  " << total_cx_transitions << "\n";
    std::cout << "  Events with elastic:   " << events_with_any_elastic
              << "  (" << std::setprecision(2)
              << 100.0 * events_with_any_elastic / std::max(success_count, 1) << "%)\n";
    std::cout << "  Lead elastic events:   " << events_with_lead_elastic << "\n";
    std::cout << "  Recoil elastic events: " << events_with_recoil_elastic << "\n";
    std::cout << "  Total elastic scatters:" << total_elastic_scatterings << "\n";
    std::cout << "  Events with any pion:  " << events_with_any_pion
              << "  (" << std::setprecision(2)
              << 100.0 * events_with_any_pion / std::max(success_count, 1) << "%)\n";
    std::cout << "  Total pions:           " << total_pions
              << "  [pi+=" << total_pi_plus
              << ", pi-=" << total_pi_minus
              << ", pi0=" << total_pi_zero << "]\n";
    std::cout << "  Stats file:            " << txt_dir << "/fsi_event_stats.txt\n";

    return 0;
}