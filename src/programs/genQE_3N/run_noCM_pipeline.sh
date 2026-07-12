#!/usr/bin/env bash
# CM-off variant of the v4 pipeline: 20M-event PWIA samples of 12C, 4He, 6Li
# in Q^2 in [4.1, 4.3] GeV^2, theta_e in [11, 12] deg, Ebeam = 10.6 GeV,
# with CM smearing DISABLED (-C 0); then the per-nucleon ratio overlay.
# 20M (not 100M): enough for <~10% errors in the highest-alpha bins, 5x faster.
# Idempotent; run detached inside tmux.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"
source "$SCRIPT_DIR/../../../setup_env.sh"

EV=events/pwia_q42_noCM
PY="$SCRIPT_DIR/.venv/bin/python"
JOBS="${JOBS:-70}"
NEV=20000000
mkdir -p "$EV"

if [[ ! -s $EV/pwia_12C.root ]]; then
    JOBS=$JOBS ./run_3N_parallel.sh $NEV $EV/pwia_12C.root 10.6 1 -- -n -t 11:12 -q 4.1:4.3 -C 0
fi
if [[ ! -s $EV/pwia_4He.root ]]; then
    JOBS=$JOBS ./run_3N_parallel.sh $NEV $EV/pwia_4He.root 10.6 1 -- -A 4 -Z 2 -n -t 11:12 -q 4.1:4.3 -C 0
fi
if [[ ! -s $EV/pwia_6Li.root ]]; then
    JOBS=$JOBS ./run_3N_parallel.sh $NEV $EV/pwia_6Li.root 10.6 1 -- -A 6 -Z 3 -n -t 11:12 -q 4.1:4.3 -C 0
fi

"$PY" plotting/overlay_pwia_q42.py --ev-dir events/pwia_q42_noCM \
    --suffix _noCM --title-tag ', CM off'

echo "PIPELINE DONE $(date)"
