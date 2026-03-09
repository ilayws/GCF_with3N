#!/usr/bin/env python3
"""Plot heatmaps produced by theta_scan.cpp.

Searches for files named `hist_theta12_theta23_Q2_region*.txt` in the input
directory, reads the (theta12, theta23, weight) triplets, rebuilds a
2D histogram, and saves a PNG heatmap for each Q2 region.

Usage: python theta_scan_plot.py [--indir DIR] [--outdir DIR] [--log] [--norm]

Options:
  --indir DIR   directory containing the hist_*.txt files (default: current)
  --outdir DIR  output directory for PNGs (default: same as indir)
  --log         use log color scale (adds small epsilon)
  --norm        normalize each histogram to its maximum
  --cmap NAME   matplotlib colormap (default: viridis)
"""

from __future__ import annotations
import os
import sys
import glob
import math
import argparse
from typing import Tuple

import numpy as np
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import numpy.fft as fft


def parse_header(lines: list[str]) -> Tuple[int, Tuple[float, float], str]:
	"""Parse header lines starting with '#' and return (theta_bins, (var_min,var_max), varname).

	If header fields are missing, defaults are returned: theta_bins=50, varname='Q2', var_range=(0,0).
	This looks for the first header line that contains a ':' and numeric range, and extracts the
	variable name from the left side of the ':' (first token after '#').
	"""
	theta_bins = 50
	v_min = 0.0
	v_max = 0.0
	varname = 'Q2'
	import re
	for L in lines:
		Ls = L.strip()
		if not Ls.startswith('#'):
			continue
		if 'theta_bins' in Ls:
			try:
				parts = Ls.split()
				# expects: # theta_bins 50 range_deg [0,180]
				idx = parts.index('theta_bins')
				theta_bins = int(parts[idx+1])
			except Exception:
				pass

		# Look for any region header with a ':' and extract numbers from the portion after ':'
		if ':' in Ls:
			try:
				left, after = Ls.split(':', 1)
				# determine varname from left: first token after '#'
				left_tokens = left.replace('#','').strip().split()
				if len(left_tokens) >= 1:
					varname = left_tokens[0]
				# remove units like 'GeV' to avoid capturing them as numbers
				after_clean = after
				if 'GeV' in after_clean:
					after_clean = after_clean.split('GeV', 1)[0]
				nums = re.findall(r"[-+]?\d*\.?\d+(?:[eE][-+]?\d+)?", after_clean)
				if len(nums) >= 2:
					v_min = float(nums[0])
					v_max = float(nums[1])
				elif len(nums) == 1:
					v_min = float(nums[0])
			except Exception:
				pass
			# once we've found a region line, stop searching further
			if v_min != 0.0 or v_max != 0.0:
				break
	return theta_bins, (v_min, v_max), varname


def load_histogram(path: str) -> Tuple[np.ndarray, int, Tuple[float, float], str]:
	"""Load a single hist file and return (hist2d, theta_bins, (var_min,var_max), varname).

	hist2d is shaped (theta_bins, theta_bins) with axis0=theta23 (y), axis1=theta12 (x).
	"""
	with open(path, 'r') as f:
		lines = f.readlines()

	header = [L for L in lines if L.strip().startswith('#')]
	theta_bins, var_range, varname = parse_header(header)
	dtheta = 180.0 / float(theta_bins)

	hist = np.zeros((theta_bins, theta_bins), dtype=float)

	for L in lines:
		if L.strip().startswith('#') or not L.strip():
			continue
		parts = L.split()
		if len(parts) < 3:
			continue
		try:
			th12 = float(parts[0])
			th23 = float(parts[1])
			w = float(parts[2])
		except Exception:
			continue
		it1 = int(th12 / dtheta)
		it2 = int(th23 / dtheta)
		if it1 < 0 or it1 >= theta_bins or it2 < 0 or it2 >= theta_bins:
			# skip out-of-range
			continue
		hist[it2, it1] = w

	return hist, theta_bins, var_range, varname


def plot_and_save(arr: np.ndarray, theta_bins: int, var_range: Tuple[float, float], varname: str, outpath: str,
				  log_scale: bool = False, cmap: str = 'viridis', annotate: str | None = None) -> None:
	"""Plot a 2D array `arr` (assumed shape (theta_bins,theta_bins)) and save to outpath.

	arr is expected to already be normalized such that sum(arr) == 1 if desired.
	annotate: optional text to draw in the upper-left of the axes (e.g. Pstar/Procket values).
	varname and var_range are used to generate a descriptive title and units when possible.
	"""
	dtheta = 180.0 / float(theta_bins)
	extent = [0.0, 180.0, 0.0, 180.0]

	plot_arr = arr.copy()
	if log_scale:
		eps = 1e-12
		plot_arr = np.log10(plot_arr + eps)

	fig, ax = plt.subplots(figsize=(6,5))
	im = ax.imshow(plot_arr, origin='lower', extent=extent, aspect='auto', cmap=cmap)
	ax.set_xlabel('theta12 (deg)')
	ax.set_ylabel('theta23 (deg)')
	# produce a friendly var label
	var_label = varname
	if varname.lower().startswith('q'):
		var_label = 'Q^2 (GeV^2)'
	elif varname.lower().startswith('xb') or varname.lower() == 'xb':
		var_label = 'xB'
	title = f'theta12 vs theta23, {var_label} in [{var_range[0]:g}, {var_range[1]:g})'
	if log_scale:
		title += ' (log10 scale)'
	ax.set_title(title)
	if annotate:
		# place annotation in axes coordinates
		ax.text(0.02, 0.98, annotate, transform=ax.transAxes,
				va='top', ha='left', fontsize=9, bbox=dict(boxstyle='round', facecolor='white', alpha=0.6))

	cbar = fig.colorbar(im, ax=ax)
	if log_scale:
		cbar.set_label('log10(weight)')
	else:
		cbar.set_label('weight (array sum may be normalized to 1)')
	fig.tight_layout()

	# Save figure
	fig.savefig(outpath, dpi=150)
	plt.close(fig)
	return None


def main(argv: list[str] | None = None) -> int:
	argv = list(sys.argv) if argv is None else list(argv)
	parser = argparse.ArgumentParser(description='Plot hist_theta12_theta23 outputs')
	parser.add_argument('--indir', default='.', help='input directory with hist_*.txt files')
	parser.add_argument('--outdir', default=None, help='output directory for PNGs')
	parser.add_argument('--log', action='store_true', help='use log color scale')
	parser.add_argument('--norm', action='store_true', help='normalize each histogram to maximum (legacy)')
	parser.add_argument('--radius', type=float, default=5.0, help='radius in degrees for Pstar/Procket integration (default 5.0)')
	parser.add_argument('--cmap', default='viridis', help='matplotlib colormap')
	args = parser.parse_args(argv[1:])

	indir = os.path.abspath(args.indir)
	outdir = os.path.abspath(args.outdir) if args.outdir else indir
	os.makedirs(outdir, exist_ok=True)

	# look for any variable name in the filename (e.g. hist_theta12_theta23_Q2_region*.txt or hist_theta12_theta23_xB_region*.txt)
	pattern = os.path.join(indir, 'hist_theta12_theta23_*_region*.txt')
	files = sorted(glob.glob(pattern))
	if not files:
		print(f'No files found matching: {pattern}', file=sys.stderr)
		return 2

	# Prepare arrays to collect variable midpoints and probabilities
	var_mids: list[float] = []
	pstars: list[float] = []
	prockets: list[float] = []
	varname_global = None

	def compute_P_in_radius(hist_arr: np.ndarray, theta_bins: int, center: tuple[float, float], radius_deg: float) -> float:
		"""Sum histogram bins within `radius_deg` (Euclidean distance in degree space) around center=(th12,th23).

		hist_arr shape (theta_bins, theta_bins) with axes (theta23, theta12).
		Returns the sum of bins (not normalized) inside the circle.
		"""
		dtheta = 180.0 / float(theta_bins)
		# build coordinate grids for theta12 (x) and theta23 (y)
		th12_edges = (np.arange(theta_bins) + 0.5) * dtheta
		th23_edges = (np.arange(theta_bins) + 0.5) * dtheta
		# compute distance mask
		cx, cy = center
		dx = th12_edges - cx
		dy = th23_edges - cy
		# meshgrid: x across columns, y across rows
		DX, DY = np.meshgrid(dx, dy)
		dist = np.sqrt(DX**2 + DY**2)
		mask = dist <= radius_deg
		return float(hist_arr[mask].sum())

	for path in files:
		try:
			hist, theta_bins, var_range, varname = load_histogram(path)
			if varname_global is None:
				varname_global = varname
		except Exception as e:
			print(f'Failed to load {path}: {e}', file=sys.stderr)
			continue
		base = os.path.basename(path)
		root = os.path.splitext(base)[0]
		outname = root + '.png'
		outpath = os.path.join(outdir, outname)

		# Normalize histogram by sum so probabilities integrate to 1
		arr = hist.copy().astype(float)
		total = arr.sum()
		if total > 0.0:
			arr = arr / total

		# compute Pstar and Procket
		# star at (theta12,theta23) = (120,120), rocket at (180,0)
		pstar = compute_P_in_radius(arr, theta_bins, (120.0, 120.0), args.radius)
		procket = compute_P_in_radius(arr, theta_bins, (180.0, 0.0), args.radius)

		# record var midpoint
		var_mid = 0.5 * (var_range[0] + var_range[1])
		var_mids.append(var_mid)
		pstars.append(pstar)
		prockets.append(procket)

		annotate = f'P_star={pstar:.4g}\nP_rocket={procket:.4g}\nR={args.radius}°'

		try:
			plot_and_save(arr, theta_bins, var_range, varname, outpath, log_scale=args.log, cmap=args.cmap, annotate=annotate)
			print(f'Wrote {outpath} (Pstar={pstar:.4g}, Procket={procket:.4g})')
		except Exception as e:
			# If plotting failed, still continue
			print(f'Failed to plot {outpath}: {e}', file=sys.stderr)
			continue
	# finished creating individual heatmap PNGs

	# If we collected any variable points, make a var vs P plot
	if var_mids:
		# sort by variable
		order = np.argsort(var_mids)
		vars_sorted = np.array(var_mids)[order]
		pstars_a = np.array(pstars)[order]
		prockets_a = np.array(prockets)[order]

		fig, ax = plt.subplots(figsize=(6,4))
		ax.plot(vars_sorted, pstars_a, marker='o', label='P_star (120,120)')
		ax.plot(vars_sorted, prockets_a, marker='s', label='P_rocket (180,0)')
		# friendly x label
		xlabel = varname_global if varname_global is not None else 'var'
		if xlabel.lower().startswith('q'):
			xlabel = 'Q^2 (GeV^2)'
		elif xlabel.lower().startswith('xb'):
			xlabel = 'xB'
		ax.set_xlabel(xlabel)
		ax.set_ylabel('P (sum of bins in circle)')
		ax.set_title(f'P_star and P_rocket vs {xlabel} (radius={args.radius} deg)')
		ax.legend()
		fig.tight_layout()
		out_q2 = os.path.join(outdir, f'P_vs_{varname_global if varname_global else "var"}.png')
		fig.savefig(out_q2, dpi=150)
		plt.close(fig)
		print(f'Wrote {out_q2}')

	return 0




if __name__ == '__main__':
	raise SystemExit(main())

