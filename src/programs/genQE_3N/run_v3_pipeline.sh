#!/usr/bin/env bash
# One-shot pipeline for the v3 (fixed-generator) samples: generates the 12C
# hN-FSI sample if missing, then remakes all alpha3N plots. Designed to run
# detached inside tmux so it survives SSH disconnects:
#   tmux new-session -d -s gen3N ./run_v3_pipeline.sh
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"
source "$SCRIPT_DIR/../../../setup_env.sh"

EV=events/new_fsi_v3
PLOTS=analysis/Plots
PY="$SCRIPT_DIR/.venv/bin/python"

# --- 1. Generation (skip any sample whose merged file already exists) -------
if [[ ! -s $EV/pwia_12C_106.root ]]; then
    JOBS=50 ./run_3N_parallel.sh 100000000 $EV/pwia_12C_106.root 10.6 1 -- -n -t 11:12
fi
if [[ ! -s $EV/pwia_4He_106.root ]]; then
    JOBS=50 ./run_3N_parallel.sh 100000000 $EV/pwia_4He_106.root 10.6 1 -- -A 4 -Z 2 -n -t 11:12
fi
if [[ ! -s $EV/fsi_hN_106.root ]]; then
    JOBS=100 ./run_3N_parallel.sh 100000000 $EV/fsi_hN_106.root 10.6 1 -- -t 11:12
fi

# --- 2. Plots ----------------------------------------------------------------
"$PY" plotting/plot_alpha3N_ratio.py \
    --input-num $EV/fsi_hN_106.root --input-den $EV/pwia_4He_106.root \
    --ebeam 10.6 --Q2-min 4.1 --Q2-max 4.3 --w-max 1e-8 \
    --output $PLOTS/alpha3N_ratio_12C_4He_106_Q2_4p1-4p3_v3.pdf

"$PY" plotting/plot_alpha3N_ratio.py \
    --input-num $EV/pwia_12C_106.root --input-den $EV/pwia_4He_106.root \
    --label-num '$^{12}$C, 3N PWIA' \
    --ebeam 10.6 --Q2-min 4.1 --Q2-max 4.3 --w-max 1e-8 \
    --output $PLOTS/alpha3N_ratio_12C_4He_106_Q2_4p1-4p3_noFSI_v3.pdf

"$PY" plotting/overlay_fsi_vs_pwia.py

echo "PIPELINE DONE $(date)"
