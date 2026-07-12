#!/usr/bin/env bash
# v4 pipeline: 100M-event PWIA samples of 12C, 4He, 6Li generated ONLY in
# Q^2 in [4.1, 4.3] GeV^2 (generator -q flag), theta_e in [11, 12] deg,
# Ebeam = 10.6 GeV; then the 12C/4He + 6Li/4He alpha3N ratio overlay.
# Idempotent: samples whose merged file already exists are skipped.
# Designed to run detached inside tmux:
#   tmux new-session -d -s gen3Nv4 ./run_v4_pipeline.sh
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"
source "$SCRIPT_DIR/../../../setup_env.sh"

EV=events/pwia_q42
PY="$SCRIPT_DIR/.venv/bin/python"
JOBS="${JOBS:-70}"
mkdir -p "$EV"

# --- 1. Generation (skip any sample whose merged file already exists) -------
if [[ ! -s $EV/pwia_12C.root ]]; then
    JOBS=$JOBS ./run_3N_parallel.sh 100000000 $EV/pwia_12C.root 10.6 1 -- -n -t 11:12 -q 4.1:4.3
fi
if [[ ! -s $EV/pwia_4He.root ]]; then
    JOBS=$JOBS ./run_3N_parallel.sh 100000000 $EV/pwia_4He.root 10.6 1 -- -A 4 -Z 2 -n -t 11:12 -q 4.1:4.3
fi
if [[ ! -s $EV/pwia_6Li.root ]]; then
    JOBS=$JOBS ./run_3N_parallel.sh 100000000 $EV/pwia_6Li.root 10.6 1 -- -A 6 -Z 3 -n -t 11:12 -q 4.1:4.3
fi

# --- 2. Plot -----------------------------------------------------------------
"$PY" plotting/overlay_pwia_q42.py

echo "PIPELINE DONE $(date)"
