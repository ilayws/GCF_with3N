#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <map>
#include <sys/stat.h>
#include <sys/types.h>
#include "QEGenerator_3N.hh"
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
QEGenerator_3N * myGen;
TRandom3 * myRand;

/*
Generates many (n_events). 
For each event, calculates vars (e.g that12,theta23,Q^2,xB,etc.)
Saves:
- 2D histogram of theta12-theta23
- Two 2D histograms of xB-Q2, one for each geometry (Star & rocket).
- Many 1D histograms that can be configured in saved_vars list.

Takes in:
int (n_events) : number of (successful, meaning not filtered) events to generate
int (theta_bins) : number of bins for (each axis in) theta12-theta23 histogram
0 or 1 (use_CM) : whether to use CM motion or not (randomly sampled from Gaussian with width sigCM)
0 or 1 (region_mode) : 0 = theta-based regions (theta12-theta23), 1 = xB-based regions (like 2N)
*/

// Region mode: 0 = theta-based (theta12-theta23), 1 = xB-based (like 2N for comparison)
int region_mode = 0;

// Parameters
int theta_bins = 200; // Number of bins for theta

// Target theta12 and theta23 in degrees - Two target pairs
const double target_theta12_deg_1 = 120.0;
const double target_theta23_deg_1 = 120.0;
const double target_theta12_deg_2 = 180.0;
const double target_theta23_deg_2 = 0.0;
const double tolerance_deg2 = pow(20,2); 

// Histogram settings for xB-Q2 (2D)
const int xB_bins = 500;
const int Q2_bins = 500;
const double xB_min = 0.0;
const double xB_max = 4.0;
const double Q2_min = 2.0;
const double Q2_max = 10.0;

// 1D histogram settings
const int hist1D_bins = 300;
const double pmiss_min = 0.0;
const double pmiss_max = 4.0; // GeV/c

// 2D histogram settings for pmiss vs xB
const int xB_bins_pmiss = 50;
const int pmiss_bins = 50;
const double pmiss_2D_min = 0.0;
const double pmiss_2D_max = 10.0; // GeV/c - extended to capture full range like 1D histograms

int n_events = 1000000;

bool use_CM = false;

double count_3N = 0;
double count_2N = 0;
double E2 = 0;
double E3 = 0;

// Arrays to store 2N and 3N counts per xB bin
std::vector<double> count_2N_per_xB(hist1D_bins, 0.0);
std::vector<double> count_3N_per_xB(hist1D_bins, 0.0);

// 2D histograms for 2N and 3N as function of xB and pmiss
std::vector<std::vector<double>> hist_2N_xB_pmiss;
std::vector<std::vector<double>> hist_3N_xB_pmiss;

int main(int argc, char **argv) {
    if (argc > 3) {
        n_events = std::stoi(argv[1]);
        theta_bins = std::stoi(argv[2]);
        use_CM = (std::stoi(argv[3]) == 1);
    }
    if (argc > 4) {
        region_mode = std::stoi(argv[4]);  // 0 = theta-based, 1 = xB-based
    }

    // Create output directories for different file types
    std::string base_output_dir = "analysis_output";
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
    std::cout << "  Region mode: " << (region_mode == 0 ? "theta-based (theta12-theta23)" : "xB-based (like 2N)") << std::endl;

    // Define ranges for different variable types
    const double theta_min = 0.0;    // degrees
    const double theta_max = 180.0;  // degrees
    const double phi_min = -180.0;   // degrees
    const double phi_max = 180.0;    // degrees

    myRand = new TRandom3(0);
    ffModel ffMod = kelly;
    csMethod csMeth = cc2;
    myCS = new eNCrossSection(csMeth, ffMod);
    const double Ebeam = 6.0; // GeV
    myGen = new QEGenerator_3N(Ebeam, myCS, 1, myRand);

    // 2D histogram for theta12-theta23 correlation
    std::vector<std::vector<double>> hist_theta(theta_bins, std::vector<double>(theta_bins, 0.0));
    // Separate 2D histogram to mark deuteron recoil (N2+N3 = pn or np)
    std::vector<std::vector<double>> hist_theta_deuteron(theta_bins, std::vector<double>(theta_bins, 0.0));

    // ---- Region L/R kinematic histograms ----
    // Triangular regions near (180,180) corner of theta12-theta23 space.
    // Region R: triangle bounded by lines through (180,180) with slopes B and 1/B,
    //           and a diagonal line with slope -1.
    // Region L: (x,y) in L iff (360-x-y, y) in R  (swap theta12 <-> theta13).
    const double A_region = 135.0;  // degrees
    const double K_region = 3.0;
    const double A_rad = A_region * M_PI / 180.0;
    const double B_region = (std::atan(std::sin(A_rad) / (K_region + std::cos(A_rad))) * 180.0 / M_PI)
                            / (180.0 - A_region);

    auto isInRegionR = [&](double x, double y) -> bool {
        double line1 = B_region * (x - 180.0) + 180.0;
        double line2 = (1.0 / B_region) * (x - 180.0) + 180.0;
        double line3 = -(x - A_region) + 180.0 - (180.0 - A_region) * B_region;
        return (y <= line1) && (y >= line2) && (y >= line3);
    };

    auto isInRegionL = [&](double x, double y) -> bool {
        return isInRegionR(360.0 - x - y, y);
    };

    // Region kinematic cuts (applied before filling region L/R histograms)
    const double region_kF = 0.25;                 // all final nucleons must have p > kF (GeV/c)
    const double region_e_angle_max = 45.0;        // electron angle with beam < 45 deg
    const double region_lead_angle_q_max = 10.0;   // final lead angle with q < 10 deg
    const double region_lead_over_q_min = 0.7;     // |p_lead_final| / |q| > 0.7

    struct RegionVarInfo { std::string name; double min_val, max_val; };
    const int region_bins_LR = 45;
    const int kNRegionVars = 16;
    const RegionVarInfo region_var_info[16] = {
        {"init_lead_angle_q", 0, 180},   {"init_rec1_angle_q", 0, 180},
        {"init_rec2_angle_q", 0, 180},   {"final_lead_angle_q", 0, 50},
        {"final_rec1_angle_q", 0, 180},  {"final_rec2_angle_q", 0, 180},
        {"pmiss_LR", 0, 1.5},           {"pmiss_angle_q", 0, 180},
        {"p2_final_mom", 0, 1.5},        {"p3_final_mom", 0, 1.5},
        {"e_angle_q_LR", 0, 90},        {"e_mom_LR", 0, 8},
        {"xB_LR", 0, 4},                {"Q2_LR", 2, 10},
        {"lead_mom_over_q", 0, 2},       {"p1_final_mom", 0, 8},
    };
    std::vector<std::vector<double>> hist_regionL_3N(kNRegionVars, std::vector<double>(region_bins_LR, 0.0));
    std::vector<std::vector<double>> hist_regionR_3N(kNRegionVars, std::vector<double>(region_bins_LR, 0.0));
    double weight_regionL_3N = 0.0, weight_regionR_3N = 0.0;
    double weight_3N_with_cuts = 0.0;  // total weight of events passing all kinematic cuts

    auto fill_region_hist = [&](std::vector<std::vector<double>>& hist, int vi, double value, double w) {
        if (value >= region_var_info[vi].min_val && value < region_var_info[vi].max_val) {
            double bs = (region_var_info[vi].max_val - region_var_info[vi].min_val) / region_bins_LR;
            int bin = std::min(static_cast<int>((value - region_var_info[vi].min_val) / bs), region_bins_LR - 1);
            hist[vi][bin] += w;
        }
    };

    // Initialize 2D histograms for 2N and 3N (coarse binning for pmiss vs xB)
    hist_2N_xB_pmiss.resize(pmiss_bins, std::vector<double>(xB_bins_pmiss, 0.0));
    hist_3N_xB_pmiss.resize(pmiss_bins, std::vector<double>(xB_bins_pmiss, 0.0));

    // Number of regions depends on region_mode
    // theta-based: 7 regions (rocket/star configurations)
    // xB-based: 5 regions (like 2N analysis)
    int n_regions = (region_mode == 0) ? 7 : 5;
    
    struct TargetRegion {
        double theta12;      // Used for theta-based mode
        double theta23;      // Used for theta-based mode
        double xB_center;    // Used for xB-based mode
        double xB_width;     // Used for xB-based mode
        std::string description;
        std::vector<double> Q2_hist;
        std::vector<double> xB_hist;
        std::vector<int> Q2_count;
        std::vector<int> xB_count;
        // 2D xB-Q2 histogram for this region
        std::vector<std::vector<double>> hist_xB_Q2;
        // 2D theta12-theta23 histogram for this region
        std::vector<std::vector<double>> hist_theta12_theta23;
        // Histograms for all variables in saved_vars
        std::vector<std::vector<double>> var_histograms;
        std::vector<std::vector<int>> var_counts;
        
        // Constructor for theta-based regions
        TargetRegion(double t12, double t23, int n_vars)
            : theta12(t12), theta23(t23), xB_center(0), xB_width(0), description(""),
              Q2_hist(hist1D_bins, 0.0), xB_hist(hist1D_bins, 0.0), 
              Q2_count(hist1D_bins, 0), xB_count(hist1D_bins, 0),
              hist_xB_Q2(Q2_bins, std::vector<double>(xB_bins, 0.0)),
              hist_theta12_theta23(theta_bins, std::vector<double>(theta_bins, 0.0)),
              var_histograms(n_vars, std::vector<double>(hist1D_bins, 0.0)),
              var_counts(n_vars, std::vector<int>(hist1D_bins, 0)) {}
        
        // Constructor for xB-based regions
        TargetRegion(double xB_c, double xB_w, const std::string& desc, int n_vars)
            : theta12(0), theta23(0), xB_center(xB_c), xB_width(xB_w), description(desc),
              Q2_hist(hist1D_bins, 0.0), xB_hist(hist1D_bins, 0.0), 
              Q2_count(hist1D_bins, 0), xB_count(hist1D_bins, 0),
              hist_xB_Q2(Q2_bins, std::vector<double>(xB_bins, 0.0)),
              hist_theta12_theta23(theta_bins, std::vector<double>(theta_bins, 0.0)),
              var_histograms(n_vars, std::vector<double>(hist1D_bins, 0.0)),
              var_counts(n_vars, std::vector<int>(hist1D_bins, 0)) {}
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
    
    // List of variables to save - keeping only the requested ones
    std::vector<VariableInfo> saved_vars = {
        {"Q2", "GeV^2", Q2_min, Q2_max},
        {"xB", "", xB_min, xB_max},
        
        {"Outgoing e angle with beam dir (z)", "deg", 0, 50},
        {"Outgoing e angle with q dir", "deg", 30, 90},
        {"Outgoing e mom.", "GeV/c", 0, 8},

        {"Incoming lead angle with beam dir (z)", "degrees", theta_min, theta_max},
        {"Incoming lead angle with q dir", "degrees", theta_min, theta_max},
        {"pmiss", "GeV/c", 0.0, 5.0},

        {"Recoil angle with beam dir (z)", "degrees", theta_min, theta_max},
        {"Recoil angle with q dir", "degrees", theta_min, theta_max},
        {"Recoil mom.", "GeV/c", 0.0, 1.5},

        {"Outgoing lead angle with beam dir (z)", "degrees", theta_min, theta_max},
        {"Outgoing lead angle with q dir", "degrees", 0, 50},
        {"Outgoing lead mom.", "GeV/c", 0, 8},

        // {"p1 over q", "", 0, 2},
        
        // Nucleon momenta for each configuration
        {"Lead Nucleon Momentum", "GeV/c", 0, 1},
        {"Recoil1 Nucleon Momentum", "GeV/c", 0, 1},
        {"Recoil2 Nucleon Momentum", "GeV/c", 0, 1}
        ,
        {"alpha_q", "", -2.0, 4.0},
        {"alpha_p_final", "", -2.0, 4.0},
        {"alpha_deutron", "", -2.0, 4.0},
        {"alpha_p_initial", "", -2.0, 4.0}
        ,
        {"alpha_sum", "", 1.0, 4.0},
        {"alpha_sum2N", "", 0.0, 4.0},
        {"p1_angle_with_q_pDcuts", "deg", 0.0, 180.0},
        {"p2_angle_with_q_pDcuts", "deg", 0.0, 180.0},
        {"p3_angle_with_q_pDcuts", "deg", 0.0, 180.0}
        
    // Jacobi coordinates and related angles
    // {"pa_mag", "GeV/c", 0.3, 1.2},
    // {"pb_mag", "GeV/c", 0.3, 1.0},
    // {"theta_ab", "deg", 0, 180},
        // {"p2", "GeV/c", 0, 8}
    };
    
    std::vector<TargetRegion> target_regions;
    
    if (region_mode == 0) {
        // Theta-based regions (original 3N mode)
        // equidistant points along the star-rocket line
        // for (int i = 0; i < n_regions; ++i) {
        //     double t12 = 120.0 + i * (60.0 / (n_regions - 1));
        //     double t23 = 120.0 - i * (120.0 / (n_regions - 1));
        //     target_regions.emplace_back(t12, t23, saved_vars.size());
        // }

        // TEMP make the regions
        // rocket with lead as head
        target_regions.emplace_back(180.0, 0.0, saved_vars.size());
        target_regions.emplace_back(150.0, 60.0, saved_vars.size());

        // rocket with lead as tail
        target_regions.emplace_back(180.0, 180.0, saved_vars.size());
        target_regions.emplace_back(0.0, 180.0, saved_vars.size());
        target_regions.emplace_back(150.0, 150.0, saved_vars.size());
        target_regions.emplace_back(60.0, 150.0, saved_vars.size());

        // star
        target_regions.emplace_back(120.0, 120.0, saved_vars.size());
    } else {
        // xB-based regions (like 2N for comparison)
        // Region 0: xB < 1 (quasi-elastic peak region)
        target_regions.emplace_back(0.5, 1.0, "xB < 1", saved_vars.size());
        // Region 1: 1 < xB < 1.5 (SRC onset)
        target_regions.emplace_back(1.25, 0.5, "1 < xB < 1.5", saved_vars.size());
        // Region 2: 1.5 < xB < 2 (2N/3N SRC region)
        target_regions.emplace_back(1.75, 0.5, "1.5 < xB < 2", saved_vars.size());
        // Region 3: 2 < xB < 2.5 (high xB region)
        target_regions.emplace_back(2.25, 0.5, "2 < xB < 2.5", saved_vars.size());
        // Region 4: xB > 2.5 (very high xB, 3N dominant)
        target_regions.emplace_back(3.0, 1.0, "xB > 2.5", saved_vars.size());
    }

    // Create index map for easy access
    std::map<std::string, int> var_index;
    for (int i = 0; i < saved_vars.size(); ++i) {
        var_index[saved_vars[i].name] = i;
    }

    const double dxB = (xB_max - xB_min) / xB_bins;
    const double dxB_pmiss = (xB_max - xB_min) / xB_bins_pmiss;
    const double dQ2 = (Q2_max - Q2_min) / Q2_bins;
    const double dThetaDeg = 180.0 / theta_bins;
    const double dPmiss = (pmiss_2D_max - pmiss_2D_min) / pmiss_bins;

    // Calculate bin sizes for all saved variables
    std::vector<double> bin_sizes(saved_vars.size());
    for (int i = 0; i < saved_vars.size(); ++i) {
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

    // Define helper functions as lambdas
    auto is_in_region = [&](double theta12, double theta23, int iregion) -> bool {
        double t12 = target_regions[iregion].theta12;
        double t23 = target_regions[iregion].theta23;
        return (pow(theta12 - t12, 2) + pow(theta23 - t23, 2)) < tolerance_deg2;
    };

    // see division into regions: https://www.desmos.com/calculator/x8p0w0wbjt
    auto is_in_region2 = [&](double t12, double t23, int iregion) -> bool {
        double a = 54.; double b = a/2;
        double c = 160; double d = 7./8. * c;
        switch (iregion) { // 0,2,3,6 are main regions
            case 0: // head rocket
                return (t23 < .5 * (t12 - b));
            case 1: // between head-rocket , star
                return (t23 > .5 * (t12 - b)) && (t23 < .5 * (t12 + a));
            case 2: // 180,180 (tail rocket)
                return (t23 > -(t12 - c) + c);
            case 3: // 0,180 (tail rocket)
                return (t23 > 2*t12 + b);
            case 4: // between 180,180 and star
                return (t23 > -(t12 - d) + d) && (t23 < -(t12 - c) + c);
            case 5: // between 0,180 and star
                return (t23 < 2*t12 + b) && (t23 > 2*t12 - a);
            case 6: // star
                return (t23 < 2*t12 - a) && (t23 < -(t12 - d) + d) && (t23 > .5 * (t12 + a));
            default:
                return false;
        }
    };

    // Helper function to determine which xB region an event belongs to (for xB-based mode)
    auto get_xB_region = [&](double xB) -> int {
        if (xB < 1.0) return 0;
        else if (xB < 1.5) return 1;
        else if (xB < 2.0) return 2;
        else if (xB < 2.5) return 3;
        else return 4;
    };

    // Counters for head-rocket (region 0) isospin-0 recoil pair fraction
    double count_head_rocket_total = 0.0;
    double count_head_rocket_isospin0 = 0.0;

    // generate many events. for each event, calculate theta12, theta23, xB, Q^2. if dist(theta, target_theta)<tolreance, save xB and Q^2 values.
    int event_count = 0;
    int success_count = 0;
    double total_weight_3N = 0.0;
    while (success_count < n_events) {
        event_count++;
        double weight;
        int N1_type, N2_type, N3_type;
        TLorentzVector v_k_target, v_Lead_target, v_2_target, v_3_target, v_Am3_target;
        myGen->generate_event(weight, N1_type, N2_type, N3_type, v_k_target, v_Lead_target, v_2_target, v_3_target, v_Am3_target, use_CM);
        if (weight <= 0.0) {continue;}
        total_weight_3N += weight;
        TLorentzVector vbeam_target(0.0, 0.0, Ebeam, Ebeam);
        TLorentzVector q = vbeam_target - v_k_target;
        TVector3 p1 = v_Lead_target.Vect() - q.Vect(); 
        TVector3 p1_after = v_Lead_target.Vect();
        TVector3 p2 = v_2_target.Vect();
        TVector3 p3 = v_3_target.Vect();
        TVector3 pb = 0.5 * (p2-p3);
        TVector3 pa = p1 - (1.0/3.0)*(p1+p2+p3);
        double theta_ab = pa.Angle(pb) * 180.0 / M_PI;

        // Apply basic kinematic cuts to ensure physical events (e.g. triangle inequality for momenta)  
        if (p1.Mag() > p2.Mag() + p3.Mag() || p2.Mag() > p1.Mag() + p3.Mag() || p3.Mag() > p1.Mag() + p2.Mag()) {
            continue;
        }
        double kF = 0.25; // Fermi momentum in GeV/c
        double k_cut = 0.05;

        double t12 = p1.Angle(p2) * 180.0 / M_PI;
        double t23 = p2.Angle(p3) * 180.0 / M_PI;
        double t13 = p3.Angle(p1) * 180.0 / M_PI;
        // Calculate xB for classification
        double nu = vbeam_target.T() - v_k_target.T();
        double Q2 = -q.Mag2();
        double xB_class = (nu > 0) ? (Q2 / (2 * mN * nu)) : -1.0;


        std::vector<std::pair<TVector3, int>> particles = {{p1, 1}, {p2, 2}, {p3, 3}};
        std::sort(particles.begin(), particles.end(), [](const auto& a, const auto& b) {
            return a.first.Mag() > b.first.Mag();
        });
        TVector3 p1_sorted = particles[0].first;
        TVector3 p2_sorted = particles[1].first;
        TVector3 p3_sorted = particles[2].first;
        
        // TEMP use original ordering
        // TVector3 p1_sorted = p1;
        // TVector3 p2_sorted = p2;
        // TVector3 p3_sorted = p3;

        double theta12 = p1.Angle(p2) * 180.0 / M_PI;
        double theta23 = p2.Angle(p3) * 180.0 / M_PI;
        // Q2 and xB already calculated above
        if (Q2 < Q2_min || Q2 >= Q2_max) {continue;}
        
        TVector3 p_total = p1_sorted + p2_sorted + p3_sorted;
        TVector3 q_3vec = q.Vect();
        TVector3 p_miss = p1;
        // double pmiss = p_miss.Mag();
        double pmiss = p_miss.Mag();
        double Ep1 = v_Lead_target.T() - q.T(); 
        double xB = xB_class;
        if (xB < xB_min || xB >= xB_max) {continue;}


        // define qhat
        TVector3 qhat = q_3vec.Unit();
        double alpha_sum2N = 0.;
        // CALCULATE TYPE OF EVENT (2N vs 3N) BASED ON MOMENTA AND ANGLES
        string type = "";
        // 2N:
        // LOW COM + HIGH P + BACK TO BACK + 3rd nucleon below Fermi sea
        if ((p1+p2).Mag() < k_cut && p1.Mag() > kF && p2.Mag() > kF and t12 > 170 && p3.Mag() < kF) {
            count_2N += weight;
            E2 += weight*weight;
            type = "2N";
            // Fill 2N per xB histogram
            if (xB_class >= xB_min && xB_class < xB_max) {
                int bin = static_cast<int>((xB_class - xB_min) / ((xB_max - xB_min) / hist1D_bins));
                bin = std::max(0, std::min(bin, hist1D_bins - 1));
                count_2N_per_xB[bin] += weight;
            }
            // sum for nucleons 1,2
            alpha_sum2N = (Ep1 - p1.Dot(qhat))/mN + (v_2_target.T() - p2.Dot(qhat))/mN;
        } else if ((p2+p3).Mag() < k_cut && p2.Mag() > kF && p3.Mag() > kF and t23 > 170 && p1.Mag() < kF) {
            count_2N += weight;
            E2 += weight*weight;
            type = "2N";
            // Fill 2N per xB histogram
            if (xB_class >= xB_min && xB_class < xB_max) {
                int bin = static_cast<int>((xB_class - xB_min) / ((xB_max - xB_min) / hist1D_bins));
                bin = std::max(0, std::min(bin, hist1D_bins - 1));
                count_2N_per_xB[bin] += weight;
            }
            // sum for nucleons 2,3
            alpha_sum2N = (v_2_target.T() - p2.Dot(qhat))/mN + (v_3_target.T() - p3.Dot(qhat))/mN;
        } else if ((p1+p3).Mag() < k_cut && p1.Mag() > kF && p3.Mag() > kF and t13 > 170 && p2.Mag() < kF) {
            count_2N += weight;
            E2 += weight*weight;
            type = "2N";
            // Fill 2N per xB histogram
            if (xB_class >= xB_min && xB_class < xB_max) {
                int bin = static_cast<int>((xB_class - xB_min) / ((xB_max - xB_min) / hist1D_bins));
                bin = std::max(0, std::min(bin, hist1D_bins - 1));
                count_2N_per_xB[bin] += weight;
            }
            // sum for nucleons 1, 3
            alpha_sum2N = (Ep1 - p1.Dot(qhat))/mN + (v_3_target.T() - p3.Dot(qhat))/mN;
            // 3N:
        } else if (p1.Mag() > kF && p2.Mag() > kF && p3.Mag() > kF) {
            count_3N += weight;
            E3 += weight*weight;
            type = "3N";
            // Fill 3N per xB histogram
            if (xB_class >= xB_min && xB_class < xB_max) {
                int bin = static_cast<int>((xB_class - xB_min) / ((xB_max - xB_min) / hist1D_bins));
                bin = std::max(0, std::min(bin, hist1D_bins - 1));
                count_3N_per_xB[bin] += weight;
            }
        } else {
            // continue;
        }
        // cout << "pmiss: " << p1.Mag() << ", type: " << type << endl;
        if (type == "2N") {
            fill_histogram("alpha_sum2N", alpha_sum2N, weight);
            // output alpha sum 2N
            // cout << alpha_sum2N << endl;
            if (alpha_sum2N > 2.5) {
                // print the momenta magnitudes
                cout << "alpha_sum2N: " << alpha_sum2N << ", p1: " << p1.Mag() << ", p2: " << p2.Mag() << ", p3: " << p3.Mag() << endl;
            }
        }

        // Fill 2D histograms for 2N and 3N based on event type (full pmiss range)
        if (type == "2N") {
            if (xB >= xB_min && xB < xB_max && pmiss >= pmiss_2D_min && pmiss < pmiss_2D_max) {
                int ix = static_cast<int>((xB - xB_min) / dxB_pmiss);
                int ip = static_cast<int>((pmiss - pmiss_2D_min) / dPmiss);
                ix = std::max(0, std::min(ix, xB_bins_pmiss - 1));
                ip = std::max(0, std::min(ip, pmiss_bins - 1));
                hist_2N_xB_pmiss[ip][ix] += weight;
            }
        } else if (type == "3N") {
            if (xB >= xB_min && xB < xB_max && pmiss >= pmiss_2D_min && pmiss < pmiss_2D_max) {
                int ix = static_cast<int>((xB - xB_min) / dxB_pmiss);
                int ip = static_cast<int>((pmiss - pmiss_2D_min) / dPmiss);
                ix = std::max(0, std::min(ix, xB_bins_pmiss - 1));
                ip = std::max(0, std::min(ip, pmiss_bins - 1));
                hist_3N_xB_pmiss[ip][ix] += weight;
            }
        }

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
        fill_histogram("pmiss", p1.Mag(), weight);

        fill_histogram("Recoil angle with beam dir (z)", p2.Theta() * 180. / M_PI, weight);
        fill_histogram("Recoil angle with q dir", p2.Angle(q_3vec) * 180. / M_PI, weight);
        fill_histogram("Recoil mom.", p2.Mag(), weight);

        fill_histogram("Outgoing lead angle with beam dir (z)", p1_after.Theta() * 180. / M_PI, weight);
        fill_histogram("Outgoing lead angle with q dir", p1_after.Angle(q_3vec) * 180. / M_PI, weight);
        fill_histogram("Outgoing lead mom.", outgoing_p1_mom, weight);

        // fill_histogram("p1 over q", p1_after.Mag() / q_3vec.Mag(), weight);
        
        // Nucleon momenta
        fill_histogram("Lead Nucleon Momentum", p1.Mag(), weight);
        fill_histogram("Recoil1 Nucleon Momentum", p2.Mag(), weight);
        fill_histogram("Recoil2 Nucleon Momentum", p3.Mag(), weight);
        // cout << (p1.Mag(), p2.Mag(), p3.Mag()) << endl;;

        // For each target region, check proximity and fill histograms
        bool event_success = false;
        
        if (region_mode == 0) {
            // Theta-based regions
            for (int iregion = 0; iregion < n_regions; ++iregion) {
                bool in_region = is_in_region2(theta12, theta23, iregion);
                if (in_region) {
                    // Track isospin-0 fraction for head-rocket (region 0)
                    if (iregion == 2 || iregion == 3) {
                        count_head_rocket_total += weight;
                        bool recoil_isospin0 = (N2_type == pCode && N3_type == nCode) || (N2_type == nCode && N3_type == pCode);
                        if (recoil_isospin0) count_head_rocket_isospin0 += weight;
                    }
                    // Q2
                    if (Q2 >= Q2_min && Q2 < Q2_max) {
                        int bin = static_cast<int>((Q2 - Q2_min) / ((Q2_max - Q2_min) / hist1D_bins));
                        bin = std::max(0, std::min(bin, hist1D_bins - 1));
                        target_regions[iregion].Q2_hist[bin] += weight;
                        target_regions[iregion].Q2_count[bin]++;
                    }
                    // xB
                    if (xB >= xB_min && xB < xB_max) {
                        int bin = static_cast<int>((xB - xB_min) / ((xB_max - xB_min) / hist1D_bins));
                        bin = std::max(0, std::min(bin, hist1D_bins - 1));
                        target_regions[iregion].xB_hist[bin] += weight;
                        target_regions[iregion].xB_count[bin]++;
                    }
                    
                    // Fill histograms for all variables
                    fill_target_histogram(iregion, "xB", xB, weight);
                    fill_target_histogram(iregion, "Q2", Q2, weight);

                    fill_target_histogram(iregion, "Outgoing e angle with beam dir (z)", v_k_target.Vect().Theta() * 180. / M_PI, weight);
                    fill_target_histogram(iregion, "Outgoing e angle with q dir", v_k_target.Vect().Angle(q_3vec) * 180. / M_PI, weight);
                    fill_target_histogram(iregion, "Outgoing e mom.", outgoing_e_mom, weight);

                    fill_target_histogram(iregion, "Incoming lead angle with beam dir (z)", p1.Theta() * 180. / M_PI, weight);
                    fill_target_histogram(iregion, "Incoming lead angle with q dir", p1.Angle(q_3vec) * 180. / M_PI, weight);
                    fill_target_histogram(iregion, "pmiss", p1.Mag(), weight);

                    fill_target_histogram(iregion, "Recoil angle with beam dir (z)", p2.Theta() * 180. / M_PI, weight);
                    fill_target_histogram(iregion, "Recoil angle with q dir", p2.Angle(q_3vec) * 180. / M_PI, weight);
                    fill_target_histogram(iregion, "Recoil mom.", p2.Mag(), weight);

                    fill_target_histogram(iregion, "Outgoing lead angle with beam dir (z)", p1_after.Theta() * 180. / M_PI, weight);
                    fill_target_histogram(iregion, "Outgoing lead angle with q dir", p1_after.Angle(q_3vec) * 180. / M_PI, weight);
                    fill_target_histogram(iregion, "Outgoing lead mom.", outgoing_p1_mom, weight);

                    // Nucleon momenta
                    fill_target_histogram(iregion, "Lead Nucleon Momentum", p1.Mag(), weight);
                    fill_target_histogram(iregion, "Recoil1 Nucleon Momentum", p2.Mag(), weight);
                    fill_target_histogram(iregion, "Recoil2 Nucleon Momentum", p3.Mag(), weight);

                    // Fill 2D xB-Q2 histogram for this region
                    if (xB >= xB_min && xB < xB_max && Q2 >= Q2_min && Q2 < Q2_max) {
                        int ix = static_cast<int>((xB - xB_min) / dxB);
                        int iq = static_cast<int>((Q2 - Q2_min) / dQ2);
                        ix = std::max(0, std::min(ix, xB_bins - 1));
                        iq = std::max(0, std::min(iq, Q2_bins - 1));
                        target_regions[iregion].hist_xB_Q2[iq][ix] += weight;
                    }

                    // Fill 2D theta12-theta23 histogram for this region
                    if (theta12 >= 0.0 && theta12 <= 180.0 && theta23 >= 0.0 && theta23 <= 180.0) {
                        int it1 = static_cast<int>(theta12 / dThetaDeg);
                        int it2 = static_cast<int>(theta23 / dThetaDeg);
                        if (it1 >= theta_bins) it1 = theta_bins - 1;
                        if (it2 >= theta_bins) it2 = theta_bins - 1;
                        target_regions[iregion].hist_theta12_theta23[it2][it1] += weight;
                    }


                    // Only count successful events once per event
                    if (!event_success) {
                        success_count++;
                        if (success_count > 0 && success_count % 50000 == 0) {
                            std::cout << "Successful events: " << success_count << " / " << n_events << std::endl;
                            cout << "Total events generated: " << event_count << std::endl;
                            // cout << "3N/2N ratio: " << static_cast<double>(count_3N) / static_cast<double>(count_2N) << std::endl;
                            // cout << "Statistical uncertainty on 3N/2N ratio: " 
                            //     << ( (count_3N/count_2N)*sqrt( (E3/(count_3N*count_3N)) + ((E2)/(count_2N*count_2N)) ) ) << std::endl;

                        }
                        event_success = true;
                    }
                }
            }
        } else {
            // xB-based regions (like 2N)
            int iregion = get_xB_region(xB);
            if (iregion >= 0 && iregion < n_regions) {
                // Q2
                if (Q2 >= Q2_min && Q2 < Q2_max) {
                    int bin = static_cast<int>((Q2 - Q2_min) / ((Q2_max - Q2_min) / hist1D_bins));
                    bin = std::max(0, std::min(bin, hist1D_bins - 1));
                    target_regions[iregion].Q2_hist[bin] += weight;
                    target_regions[iregion].Q2_count[bin]++;
                }
                // xB
                if (xB >= xB_min && xB < xB_max) {
                    int bin = static_cast<int>((xB - xB_min) / ((xB_max - xB_min) / hist1D_bins));
                    bin = std::max(0, std::min(bin, hist1D_bins - 1));
                    target_regions[iregion].xB_hist[bin] += weight;
                    target_regions[iregion].xB_count[bin]++;
                }
                
                // Fill histograms for all variables
                fill_target_histogram(iregion, "xB", xB, weight);
                fill_target_histogram(iregion, "Q2", Q2, weight);

                fill_target_histogram(iregion, "Outgoing e angle with beam dir (z)", v_k_target.Vect().Theta() * 180. / M_PI, weight);
                fill_target_histogram(iregion, "Outgoing e angle with q dir", v_k_target.Vect().Angle(q_3vec) * 180. / M_PI, weight);
                fill_target_histogram(iregion, "Outgoing e mom.", outgoing_e_mom, weight);

                fill_target_histogram(iregion, "Incoming lead angle with beam dir (z)", p1.Theta() * 180. / M_PI, weight);
                fill_target_histogram(iregion, "Incoming lead angle with q dir", p1.Angle(q_3vec) * 180. / M_PI, weight);
                fill_target_histogram(iregion, "pmiss", p1.Mag(), weight);

                fill_target_histogram(iregion, "Recoil angle with beam dir (z)", p2.Theta() * 180. / M_PI, weight);
                fill_target_histogram(iregion, "Recoil angle with q dir", p2.Angle(q_3vec) * 180. / M_PI, weight);
                fill_target_histogram(iregion, "Recoil mom.", p2.Mag(), weight);

                fill_target_histogram(iregion, "Outgoing lead angle with beam dir (z)", p1_after.Theta() * 180. / M_PI, weight);
                fill_target_histogram(iregion, "Outgoing lead angle with q dir", p1_after.Angle(q_3vec) * 180. / M_PI, weight);
                fill_target_histogram(iregion, "Outgoing lead mom.", outgoing_p1_mom, weight);

                // Nucleon momenta
                fill_target_histogram(iregion, "Lead Nucleon Momentum", p1.Mag(), weight);
                fill_target_histogram(iregion, "Recoil1 Nucleon Momentum", p2.Mag(), weight);
                fill_target_histogram(iregion, "Recoil2 Nucleon Momentum", p3.Mag(), weight);

                // Fill 2D xB-Q2 histogram for this region
                if (xB >= xB_min && xB < xB_max && Q2 >= Q2_min && Q2 < Q2_max) {
                    int ix = static_cast<int>((xB - xB_min) / dxB);
                    int iq = static_cast<int>((Q2 - Q2_min) / dQ2);
                    ix = std::max(0, std::min(ix, xB_bins - 1));
                    iq = std::max(0, std::min(iq, Q2_bins - 1));
                    target_regions[iregion].hist_xB_Q2[iq][ix] += weight;
                }

                // Fill 2D theta12-theta23 histogram for this region
                if (theta12 >= 0.0 && theta12 <= 180.0 && theta23 >= 0.0 && theta23 <= 180.0) {
                    int it1 = static_cast<int>(theta12 / dThetaDeg);
                    int it2 = static_cast<int>(theta23 / dThetaDeg);
                    if (it1 >= theta_bins) it1 = theta_bins - 1;
                    if (it2 >= theta_bins) it2 = theta_bins - 1;
                    target_regions[iregion].hist_theta12_theta23[it2][it1] += weight;
                }

                success_count++;
                if (success_count > 0 && success_count % 10000 == 0) {
                    std::cout << "Successful events: " << success_count << " / " << n_events << std::endl;
                }
                event_success = true;
            }
        }
        
        if (theta12 >= 0.0 && theta12 <= 180.0 && theta23 >= 0.0 && theta23 <= 180.0) {
            int it1 = static_cast<int>(theta12 / dThetaDeg);
            int it2 = static_cast<int>(theta23 / dThetaDeg);
            if (it1 >= theta_bins) it1 = theta_bins - 1;
            if (it2 >= theta_bins) it2 = theta_bins - 1;
            hist_theta[it2][it1] += weight;

            // ---- Region L/R kinematic histogram filling ----
            // For 3N generator: no FSI, so initial = final for recoils, and init_lead = pmiss
            auto fill_region_LR = [&](std::vector<std::vector<double>>& hist) {
                // init lead = p1 = v_Lead - q (incoming nucleon before photon)
                fill_region_hist(hist, 0, p1.Angle(q_3vec)*180./M_PI, weight);
                // init rec1 = p2 (spectator, same as final)
                fill_region_hist(hist, 1, p2.Angle(q_3vec)*180./M_PI, weight);
                // init rec2 = p3 (spectator, same as final)
                fill_region_hist(hist, 2, p3.Angle(q_3vec)*180./M_PI, weight);
                // final lead = p1_after = v_Lead (outgoing nucleon after photon absorption)
                fill_region_hist(hist, 3, p1_after.Angle(q_3vec)*180./M_PI, weight);
                // final rec1 = p2 (same as initial)
                fill_region_hist(hist, 4, p2.Angle(q_3vec)*180./M_PI, weight);
                // final rec2 = p3 (same as initial)
                fill_region_hist(hist, 5, p3.Angle(q_3vec)*180./M_PI, weight);
                // pmiss = |p1| = |v_Lead - q|
                fill_region_hist(hist, 6, p1.Mag(), weight);
                // pmiss angle with q
                fill_region_hist(hist, 7, p1.Angle(q_3vec)*180./M_PI, weight);
                // p2 final momentum
                fill_region_hist(hist, 8, p2.Mag(), weight);
                // p3 final momentum
                fill_region_hist(hist, 9, p3.Mag(), weight);
                // electron angle with q
                fill_region_hist(hist, 10, v_k_target.Vect().Angle(q_3vec)*180./M_PI, weight);
                // electron momentum
                fill_region_hist(hist, 11, v_k_target.T(), weight);
                // xB
                fill_region_hist(hist, 12, xB, weight);
                // Q2
                fill_region_hist(hist, 13, Q2, weight);
                // lead_mom_over_q = |p1_after| / |q|
                fill_region_hist(hist, 14, p1_after.Mag()/q_3vec.Mag(), weight);
                // p1_final_mom = |p1_after| (final lead momentum)
                fill_region_hist(hist, 15, p1_after.Mag(), weight);
            };
            // Apply kinematic cuts for region histograms:
            //   - all 3 nucleons above kF
            //   - electron scattering angle < 45 deg (matches generator acceptance)
            //   - final lead angle with q < 10 deg
            //   - |p_lead_final| / |q| > 0.7
            bool pass_region_cuts = (p1.Mag() > region_kF && p2.Mag() > region_kF && p3.Mag() > region_kF)
                                    && scattering_angle < region_e_angle_max
                                    && p1_after.Angle(q_3vec)*180./M_PI < region_lead_angle_q_max
                                    && p1_after.Mag()/q_3vec.Mag() > region_lead_over_q_min
                                    && p2.Mag() > 0.5;  // |p2| > 0.5 GeV/c
            if (pass_region_cuts) weight_3N_with_cuts += weight;
            if (pass_region_cuts && isInRegionL(theta12, theta23)) {
                fill_region_LR(hist_regionL_3N);
                weight_regionL_3N += weight;
            }
            if (pass_region_cuts && isInRegionR(theta12, theta23)) {
                fill_region_LR(hist_regionR_3N);
                weight_regionR_3N += weight;
            }

            // Mark bins where the recoil pair (N2,N3) forms a deuteron (pn or np) with low relative momentum
            bool correct_types = ((N2_type == pCode && N3_type == nCode) || (N2_type == nCode && N3_type == pCode));
            double p_rel = (p2 - p3).Mag() / 2.0;  // Relative momentum between N2 and N3
            bool is_deuteron = correct_types && (p_rel < 0.2);  // p_rel < 0.2 GeV/c
            if (is_deuteron) {
                hist_theta_deuteron[it2][it1] += weight;
                // Check for pD topology: lead nucleon is proton and deuteron (N2+N3) is back-to-back with it
                bool lead_is_proton = (N1_type == pCode);
                TVector3 pd_vec_local = p2 + p3; // total deuteron momentum
                double angle_p_pd = p1.Angle(pd_vec_local) * 180.0 / M_PI; // using incoming lead p1
                // require nearly back-to-back (angle ~ 180 deg). use threshold 170 deg
                bool back_to_back = (angle_p_pd > 170.0);

                double poq = p1_after.Mag() / q_3vec.Mag();
                double theta_pq = p1_after.Angle(q_3vec) * 180.0 / M_PI;
                double theta_pmissq = pd_vec_local.Angle(q_3vec) * 180.0 / M_PI;

                bool poq_cut = 0.65 < poq && poq < 0.95;
                bool theta_pq_cut = theta_pq < 30.;
                bool p1_mag_cut = p1.Mag() > 0.55 && p1.Mag() < 0.9;
                bool theta_pmissq_cut = theta_pmissq > 50. && theta_pmissq < 110.;
                bool cuts = poq_cut && theta_pq_cut && p1_mag_cut && theta_pmissq_cut;
                if (lead_is_proton && back_to_back && cuts) {
                    // Apply kinematic cuts before computing lightcone variables
                    if (xB <= 1.3) continue;
                    if (Q2 <= 1.0) continue;
                    // pD topology + cuts: fill nucleon direction angles w.r.t. q
                    fill_histogram("p1_angle_with_q_pDcuts", p1.Angle(q_3vec) * 180.0 / M_PI, weight);
                    fill_histogram("p2_angle_with_q_pDcuts", p2.Angle(q_3vec) * 180.0 / M_PI, weight);
                    fill_histogram("p3_angle_with_q_pDcuts", p3.Angle(q_3vec) * 180.0 / M_PI, weight);

                    // compute lightcone variables for pD event (recoil deuteron only)
                    TVector3 qhat = q_3vec.Unit();
                    double q_mag = q_3vec.Mag();
                    double alpha_q = (nu - q_mag) / mN;

                    TVector3 p_f_vec = p1_after; // final single proton momentum
                    double p_f = p_f_vec.Mag();
                    double p_f_proj = p_f_vec.Dot(qhat);
                    double E_p = sqrt(0.938*0.938 + p_f*p_f);
                    double alpha_p_final = (E_p - p_f_proj) / mN;

                    double p_d = pd_vec_local.Mag();
                    double p_d_proj = pd_vec_local.Dot(qhat);
                    double E_d = sqrt(1.875*1.875 + p_d*p_d);
                    double alpha_deutron = (E_d - p_d_proj) / mN;

                    double alpha_p_initial = alpha_p_final - alpha_q;

                    // Fill global histograms (only for pD events)
                    fill_histogram("alpha_q", alpha_q, weight);
                    fill_histogram("alpha_p_final", alpha_p_final, weight);
                    fill_histogram("alpha_deutron", alpha_deutron, weight);
                    fill_histogram("alpha_p_initial", alpha_p_initial, weight);
                    // also fill the sum variable
                    double alpha_sum = alpha_p_initial + alpha_deutron;
                    // std::cout << "Lead momentum" << p1.Mag() << endl;
                    // std::cout << "Alpha sum: " << alpha_sum << endl;
                    fill_histogram("alpha_sum", alpha_sum, weight);
                }
            }
        }
    }
    // Write histograms to files
    
    // Write 2D xB-pmiss histograms for 2N and 3N events
    {
        std::string fname_2N = txt_dir + "/hist_2N_xB_pmiss.txt";
        std::ofstream hout(fname_2N);
        hout << std::fixed << std::setprecision(25);
        hout << "# 2D xB-pmiss histogram for 2N events\n";
        hout << "# xB_bins " << xB_bins_pmiss << " xB_min " << xB_min << " xB_max " << xB_max
             << " pmiss_bins " << pmiss_bins << " pmiss_min " << pmiss_2D_min << " pmiss_max " << pmiss_2D_max << "\n";
        hout << "# Columns: xB_center pmiss_center weight\n";
        for (int ip = 0; ip < pmiss_bins; ++ip) {
            double pmiss_center = pmiss_2D_min + (ip + 0.5) * dPmiss;
            for (int ix = 0; ix < xB_bins_pmiss; ++ix) {
                double xB_center = xB_min + (ix + 0.5) * dxB_pmiss;
                double w = hist_2N_xB_pmiss[ip][ix];
                hout << xB_center << " " << pmiss_center << " " << w << "\n";
            }
        }
        std::cout << "2N xB-pmiss histogram written to hist_2N_xB_pmiss.txt\n";
    }
    
    {
        std::string fname_3N = txt_dir + "/hist_3N_xB_pmiss.txt";
        std::ofstream hout(fname_3N);
        hout << std::fixed << std::setprecision(25);
        hout << "# 2D xB-pmiss histogram for 3N events\n";
        hout << "# xB_bins " << xB_bins_pmiss << " xB_min " << xB_min << " xB_max " << xB_max
             << " pmiss_bins " << pmiss_bins << " pmiss_min " << pmiss_2D_min << " pmiss_max " << pmiss_2D_max << "\n";
        hout << "# Columns: xB_center pmiss_center weight\n";
        for (int ip = 0; ip < pmiss_bins; ++ip) {
            double pmiss_center = pmiss_2D_min + (ip + 0.5) * dPmiss;
            for (int ix = 0; ix < xB_bins_pmiss; ++ix) {
                double xB_center = xB_min + (ix + 0.5) * dxB_pmiss;
                double w = hist_3N_xB_pmiss[ip][ix];
                hout << xB_center << " " << pmiss_center << " " << w << "\n";
            }
        }
        std::cout << "3N xB-pmiss histogram written to hist_3N_xB_pmiss.txt\n";
    }
    
    // Write 2D xB-Q2 histograms for all regions
    for (int iregion = 0; iregion < n_regions; ++iregion) {
        std::string filename = txt_dir + "/hist_xB_Q2_region" + std::to_string(iregion) + ".txt";
        std::ofstream hout(filename);
        hout << std::fixed << std::setprecision(25);
        if (region_mode == 0) {
            hout << "# Target region " << iregion << ": theta12=" << target_regions[iregion].theta12 << ", theta23=" << target_regions[iregion].theta23 << "\n";
        } else {
            hout << "# Target region " << iregion << ": " << target_regions[iregion].description << "\n";
        }
        hout << "# xB_bins " << xB_bins << " xB_min " << xB_min << " xB_max " << xB_max
             << " Q2_bins " << Q2_bins << " Q2_min " << Q2_min << " Q2_max " << Q2_max << "\n";
        hout << "# Columns: xB_center Q2_center weight\n";
        for (int iq = 0; iq < Q2_bins; ++iq) {
            double Q2_center = Q2_min + (iq + 0.5) * dQ2;
            for (int ix = 0; ix < xB_bins; ++ix) {
                double xB_center = xB_min + (ix + 0.5) * dxB;
                double w = target_regions[iregion].hist_xB_Q2[iq][ix];
                hout << xB_center << " " << Q2_center << " " << w << "\n";
            }
        }
    }
    cout << "Total events generated: " << event_count << std::endl;
    cout << "Total 2N-like events: " << count_2N << std::endl;
    cout << "Total 3N-like events: " << count_3N << std::endl;
    cout << "3N/2N ratio: " << static_cast<double>(count_3N) / static_cast<double>(count_2N) << std::endl;
    cout << "Statistical uncertainty on 3N count: " << sqrt(E3) << std::endl;
    cout << "Statistical uncertainty on 2N count: " << sqrt(E2) << std::endl;
    cout << "Statistical uncertainty on 3N/2N ratio: " 
         << ( (count_3N/count_2N)*sqrt( (E3/(count_3N*count_3N)) + ((E2)/(count_2N*count_2N)) ) ) << std::endl;

    // Write 3N/2N ratio as a function of xB
    {
        std::string fname_ratio = txt_dir + "/3N_2N_ratio_vs_xB.txt";
        std::ofstream hout(fname_ratio);
        hout << std::fixed << std::setprecision(25);
        hout << "# 3N/2N ratio as a function of xB\n";
        hout << "# xB_center count_2N count_3N ratio\n";
        
        double bin_size_xb = (xB_max - xB_min) / hist1D_bins;
        for (int i = 0; i < hist1D_bins; ++i) {
            double xB_center = xB_min + (i + 0.5) * bin_size_xb;
            double c2N = count_2N_per_xB[i];
            double c3N = count_3N_per_xB[i];
            double ratio = (c2N > 0) ? (c3N / c2N) : 0.0;
            hout << xB_center << " " << c2N << " " << c3N << " " << ratio << "\n";
        }
        std::cout << "\n3N/2N ratio vs xB written to 3N_2N_ratio_vs_xB.txt\n";
    }

    {
        std::ofstream hout2(txt_dir + "/hist_theta12_theta23.txt");
        hout2 << std::fixed << std::setprecision(25);
        hout2 << "# theta_bins " << theta_bins << " range_deg [0,180]\n";
        hout2 << "# Columns: theta12_center theta23_center weight\n";
        for (int it2 = 0; it2 < theta_bins; ++it2) {
            double th23_center = (it2 + 0.5) * dThetaDeg;
            for (int it1 = 0; it1 < theta_bins; ++it1) {
                double th12_center = (it1 + 0.5) * dThetaDeg;
                double w = hist_theta[it2][it1];
                hout2 << th12_center << " " << th23_center << " " << w << "\n";
            }
        }
    }

    // Write deuteron-marked theta12-theta23 heatmap (same grid, weights only for pn/np recoil)
    {
        std::ofstream hout2(txt_dir + "/hist_theta12_theta23_deuteron.txt");
        hout2 << std::fixed << std::setprecision(25);
        hout2 << "# theta_bins " << theta_bins << " range_deg [0,180]\n";
        hout2 << "# Columns: theta12_center theta23_center weight (deuteron recoil only)\n";
        for (int it2 = 0; it2 < theta_bins; ++it2) {
            double th23_center = (it2 + 0.5) * dThetaDeg;
            for (int it1 = 0; it1 < theta_bins; ++it1) {
                double th12_center = (it1 + 0.5) * dThetaDeg;
                double w = hist_theta_deuteron[it2][it1];
                hout2 << th12_center << " " << th23_center << " " << w << "\n";
            }
        }
    }

    // Write Region L and Region R kinematic histograms
    {
        auto write_region_hists = [&](const std::vector<std::vector<double>>& hist,
                                      const std::string& suffix, double total_w) {
            for (int vi = 0; vi < kNRegionVars; ++vi) {
                double sum = 0;
                for (int b = 0; b < region_bins_LR; ++b) sum += hist[vi][b];
                if (sum == 0.0) continue;

                std::string fname = txt_dir + "/hist_" + region_var_info[vi].name + "_" + suffix + ".txt";
                std::ofstream hout(fname);
                hout << std::fixed << std::setprecision(25);
                hout << "# " << region_var_info[vi].name << " (" << suffix << ")\n";
                hout << "# total_weight_in_region " << total_w << "\n";
                hout << "# " << region_bins_LR << " bins, range ["
                     << region_var_info[vi].min_val << ", " << region_var_info[vi].max_val << "]\n";
                hout << "# Columns: center weight\n";
                double bs = (region_var_info[vi].max_val - region_var_info[vi].min_val) / region_bins_LR;
                for (int b = 0; b < region_bins_LR; ++b) {
                    double center = region_var_info[vi].min_val + (b + 0.5) * bs;
                    hout << center << " " << hist[vi][b] << "\n";
                }
            }
        };
        write_region_hists(hist_regionL_3N, "regionL", weight_regionL_3N);
        write_region_hists(hist_regionR_3N, "regionR", weight_regionR_3N);
        std::cout << "Region L (3N) total weight: " << weight_regionL_3N
                  << ", Region R (3N) total weight: " << weight_regionR_3N << "\n";
        std::cout << "Region L/R kinematic histograms written to hist_*_regionL.txt / hist_*_regionR.txt\n";
        // Write region weight summary file (with kinematic cuts)
        {
            std::string summary_path = txt_dir + "/region_weights_summary.txt";
            std::ofstream sf(summary_path);
            sf << std::setprecision(20);
            sf << "# Region weight summary (with kinematic cuts)\n";
            sf << "# e_angle_max=" << region_e_angle_max
               << " lead_angle_q_max=" << region_lead_angle_q_max
               << " lead_over_q_min=" << region_lead_over_q_min
               << " kF=" << region_kF << "\n";
            sf << "# total_weight " << weight_3N_with_cuts << "\n";
            sf << "3N_regionL " << weight_regionL_3N << "\n";
            sf << "3N_regionR " << weight_regionR_3N << "\n";
            sf.close();
            std::cout << "Region weight summary written to " << summary_path << "\n";
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
    // Write 1D histograms for each target region (Q2 and xB), normalized by nonzero bins in theta12-theta23 heatmap within tolerance radius
    for (int iregion = 0; iregion < n_regions; ++iregion) {
        // Count nonzero bins in theta12-theta23 heatmap within tolerance radius (only for theta-based mode)
        int nonzero_theta_bins = 0;
        if (region_mode == 0) {
            for (int it2 = 0; it2 < theta_bins; ++it2) {
                double th23_center = (it2 + 0.5) * dThetaDeg;
                for (int it1 = 0; it1 < theta_bins; ++it1) {
                    double th12_center = (it1 + 0.5) * dThetaDeg;
                    double dist2 = pow(th12_center - target_regions[iregion].theta12, 2) + pow(th23_center - target_regions[iregion].theta23, 2);
                    if (dist2 < tolerance_deg2 && hist_theta[it2][it1] > 0.0) {
                        nonzero_theta_bins++;
                    }
                }
            }
        }
        
        // Write histograms for all variables for this target region
        for (size_t var_idx = 0; var_idx < saved_vars.size(); ++var_idx) {
            const auto& var = saved_vars[var_idx];
            std::string fname = txt_dir + "/hist_" + var.name + "_region" + std::to_string(iregion) + "_1D.txt";
            std::ofstream hout(fname);
            hout << std::fixed << std::setprecision(25);
            if (region_mode == 0) {
                hout << "# " << var.name << " histogram for region " << iregion << " (theta12=" << target_regions[iregion].theta12 << ", theta23=" << target_regions[iregion].theta23 << ")\n";
            } else {
                hout << "# " << var.name << " histogram for region " << iregion << " (" << target_regions[iregion].description << ")\n";
            }
            hout << "# Columns: " << var.name << "_center weight event_count\n";
            double bin_size = (var.max_val - var.min_val) / hist1D_bins;
            for (int i = 0; i < hist1D_bins; ++i) {
                double center = var.min_val + (i + 0.5) * bin_size;
                // double weight = (nonzero_theta_bins > 0) ? target_regions[iregion].var_histograms[var_idx][i] / nonzero_theta_bins : 0.0; // with normalization
                double weight = target_regions[iregion].var_histograms[var_idx][i]; // without normalization
                hout << center << " " << weight << " " << target_regions[iregion].var_counts[var_idx][i] << "\n";
            }
        }
        
        // Q2 (keeping original for backward compatibility)
        std::string fname_q2 = txt_dir + "/hist_Q2_region" + std::to_string(iregion) + "_1D.txt";
        std::ofstream hq2(fname_q2);
        hq2 << std::fixed << std::setprecision(25);
        if (region_mode == 0) {
            hq2 << "# Q2 histogram for region " << iregion << " (theta12=" << target_regions[iregion].theta12 << ", theta23=" << target_regions[iregion].theta23 << ")\n";
        } else {
            hq2 << "# Q2 histogram for region " << iregion << " (" << target_regions[iregion].description << ")\n";
        }
        hq2 << "# Columns: Q2_center weight event_count\n";
        double bin_size_q2 = (Q2_max - Q2_min) / hist1D_bins;
        for (int i = 0; i < hist1D_bins; ++i) {
            double center = Q2_min + (i + 0.5) * bin_size_q2;
            // double weight = (nonzero_theta_bins > 0) ? target_regions[iregion].Q2_hist[i] / nonzero_theta_bins : 0.0; // with normalization
            double weight = target_regions[iregion].Q2_hist[i]; // without normalization
            hq2 << center << " " << weight << " " << target_regions[iregion].Q2_count[i] << "\n";
        }
        // xB (keeping original for backward compatibility)
        std::string fname_xb = txt_dir + "/hist_xB_region" + std::to_string(iregion) + "_1D.txt";
        std::ofstream hxb(fname_xb);
        hxb << std::fixed << std::setprecision(25);
        if (region_mode == 0) {
            hxb << "# xB histogram for region " << iregion << " (theta12=" << target_regions[iregion].theta12 << ", theta23=" << target_regions[iregion].theta23 << ")\n";
        } else {
            hxb << "# xB histogram for region " << iregion << " (" << target_regions[iregion].description << ")\n";
        }
        hxb << "# Columns: xB_center weight event_count\n";
        double bin_size_xb = (xB_max - xB_min) / hist1D_bins;
        for (int i = 0; i < hist1D_bins; ++i) {
            double center = xB_min + (i + 0.5) * bin_size_xb;
            // double weight = (nonzero_theta_bins > 0) ? target_regions[iregion].xB_hist[i] / nonzero_theta_bins : 0.0; // with normalization
            double weight = target_regions[iregion].xB_hist[i]; // without normalization
            hxb << center << " " << weight << " " << target_regions[iregion].xB_count[i] << "\n";
        }
        
        // Write 2D xB-Q2 histogram for this region
        std::string fname_2d = txt_dir + "/hist_xB_Q2_region" + std::to_string(iregion) + ".txt";
        std::ofstream h2d(fname_2d);
        h2d << std::fixed << std::setprecision(25);
        if (region_mode == 0) {
            h2d << "# 2D xB-Q2 histogram for region " << iregion << " (theta12=" << target_regions[iregion].theta12 << ", theta23=" << target_regions[iregion].theta23 << ")\n";
        } else {
            h2d << "# 2D xB-Q2 histogram for region " << iregion << " (" << target_regions[iregion].description << ")\n";
        }
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
    }

    // Write theta12-theta23 histograms for each region
    for (int iregion = 0; iregion < n_regions; ++iregion) {
        std::string filename = txt_dir + "/hist_theta12_theta23_region" + std::to_string(iregion) + ".txt";
        std::ofstream hout(filename);
        hout << std::fixed << std::setprecision(25);
        if (region_mode == 0) {
            hout << "# theta12-theta23 histogram for region " << iregion << " (theta12=" << target_regions[iregion].theta12 << ", theta23=" << target_regions[iregion].theta23 << ")\n";
        } else {
            hout << "# theta12-theta23 histogram for region " << iregion << " (" << target_regions[iregion].description << ")\n";
        }
        hout << "# theta_bins " << theta_bins << " range_deg [0,180]\n";
        hout << "# Columns: theta12_center theta23_center weight\n";
        for (int it2 = 0; it2 < theta_bins; ++it2) {
            double th23_center = (it2 + 0.5) * dThetaDeg;
            for (int it1 = 0; it1 < theta_bins; ++it1) {
                double th12_center = (it1 + 0.5) * dThetaDeg;
                double w = target_regions[iregion].hist_theta12_theta23[it2][it1];
                hout << th12_center << " " << th23_center << " " << w << "\n";
            }
        }
    }

    std::cout << "2D xB-Q2 histograms for all " << n_regions << " target regions written to hist_xB_Q2_region*.txt\n";
    std::cout << "2D theta12-theta23 histograms for all " << n_regions << " target regions written to hist_theta12_theta23_region*.txt\n";
    std::cout << "Angle correlation histogram written to hist_theta12_theta23.txt\n";
    std::cout << "Region mode: " << (region_mode == 0 ? "theta-based (theta12-theta23)" : "xB-based (like 2N)") << "\n";
    if (region_mode == 1) {
        std::cout << "\nxB-based regions used:\n";
        for (int i = 0; i < n_regions; ++i) {
            std::cout << "  Region " << i << ": " << target_regions[i].description << "\n";
        }
    }
    
    // Head-rocket isospin-0 recoil fraction
    std::cout << "\n--- Head-rocket (region 0) recoil isospin-0 (pn/np) fraction ---\n";
    std::cout << "Total head-rocket weight:          " << count_head_rocket_total << "\n";
    std::cout << "Isospin-0 recoil (pn/np) weight:   " << count_head_rocket_isospin0 << "\n";
    if (count_head_rocket_total > 0.0) {
        std::cout << "Fraction (isospin-0 / total):       "
                  << (count_head_rocket_isospin0 / count_head_rocket_total) << "\n";
    } else {
        std::cout << "Fraction: N/A (no head-rocket events)\n";
    }

    // List all saved 1D histogram variables for Python
    std::cout << "\n1D histograms saved for variables:\n";
    std::cout << "saved_vars = [";
    for (size_t i = 0; i < saved_vars.size(); ++i) {
        if (i > 0) std::cout << ", ";
        std::cout << "'" << saved_vars[i].name << "'";
    }
    std::cout << "]\n";
    
    return 0;
}
