import numpy as np
import uproot
import matplotlib.pyplot as plt

f = uproot.open("test.root")
w = f["genT"]["weight"].array(library="np")

mag = np.abs(w)
nonzero = mag[mag > 0]

print(f"N events        : {len(w)}")
print(f"N weight > 0    : {len(nonzero)}  ({100*len(nonzero)/len(w):.2f}%)")
print(f"N weight == 0   : {np.sum(w == 0)}")
print(f"N weight < 0    : {np.sum(w < 0)}")
print(f"min |w| (>0)    : {nonzero.min():.3e}")
print(f"max |w|         : {mag.max():.3e}")
print(f"mean |w| (>0)   : {nonzero.mean():.3e}")
print(f"median |w| (>0) : {np.median(nonzero):.3e}")

fig, axes = plt.subplots(1, 2, figsize=(12, 5))

axes[0].hist(nonzero, bins=200)
axes[0].set_xlabel("|weight|")
axes[0].set_ylabel("events")
axes[0].set_title(f"|weight| (linear), {len(nonzero)} nonzero / {len(w)}")
axes[0].set_yscale("log")

lo = max(nonzero.min(), 1e-30)
hi = nonzero.max()
bins_log = np.logspace(np.log10(lo), np.log10(hi), 200)
axes[1].hist(nonzero, bins=bins_log)
axes[1].set_xscale("log")
axes[1].set_yscale("log")
axes[1].set_xlabel("|weight|")
axes[1].set_ylabel("events")
axes[1].set_title("|weight| (log-log)")

plt.tight_layout()
out = "analysis/Plots/weight_distribution.png"
import os
os.makedirs(os.path.dirname(out), exist_ok=True)
plt.savefig(out, dpi=120)
print(f"\nSaved: {out}")
