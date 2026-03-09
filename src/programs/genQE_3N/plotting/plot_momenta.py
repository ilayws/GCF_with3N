import numpy as np
import matplotlib.pyplot as plt

# Read data from files
def read_hist_file(filename):
    data = np.loadtxt(filename, comments='#')
    return data[:, 0], data[:, 1]  # Return centers and weights

cut_x = False

# Number of regions
region_idx = [0,2,6]
name_by_region = {0: 'Lead Rocket', 2: 'Recoil Rocket', 6: 'Star'}
n_regions = 3

if cut_x:
    region_idx = [0]
    n_regions = 1

fig, axs = plt.subplots(1, 3, figsize=(20, 10))



# Names


# Plot for each region
i = 0
for region in region_idx:
    # Read momentum data for each nucleon
    lead_x, lead_y = read_hist_file(f'analysis_output/txt_files/hist_Lead Nucleon Momentum_region{region}_1D.txt')
    recoil1_x, recoil1_y = read_hist_file(f'analysis_output/txt_files/hist_Recoil1 Nucleon Momentum_region{region}_1D.txt')
    recoil2_x, recoil2_y = read_hist_file(f'analysis_output/txt_files/hist_Recoil2 Nucleon Momentum_region{region}_1D.txt')
    
    # Plot all three distributions in the same subplot
    axs[i].plot(lead_x, lead_y, 'r-', label='Lead', linewidth=2)
    axs[i].plot(recoil1_x, recoil1_y, 'b-', label='Recoil1', linewidth=2)
    axs[i].plot(recoil2_x, recoil2_y, 'g-', label='Recoil2', linewidth=2)
    
    axs[i].set_xlim(0.367, 1)

    axs[i].set_title(name_by_region[region], fontsize=20)
    axs[i].set_xlabel('Momentum [GeV/c]', fontsize=18)
    axs[i].set_ylabel('Total Weight', fontsize=18)
    axs[i].tick_params(axis='both', which='major', labelsize=16)
    axs[i].legend(fontsize=16)
    axs[i].grid(False)
    i += 1

plt.tight_layout()
plt.savefig('analysis_output/png_files/momenta_distributions.png')
plt.show()