#!/usr/bin/env bash
# Nucleus-dependent-kF variant of the v4 pipeline: 20M-event PWIA samples of
# 12C and 4He (no 6Li) in Q^2 in [4.1, 4.3] GeV^2, theta_e in [11, 12] deg,
# Ebeam = 10.6 GeV, with per-nucleus Fermi momentum via -K:
#   kF(4He) = 0.180 GeV/c, kF(12C) = 0.220 GeV/c
# -K sets BOTH the initial-state internal-momentum cut (k > kF) and
# sigma_CM = sqrt(3/5) * kF. Then the per-nucleon 12C/4He ratio plot.
# Idempotent; run detached inside tmux.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"
source "$SCRIPT_DIR/../../../setup_env.sh"

EV=events/pwia_q42_kF
PY="$SCRIPT_DIR/.venv/bin/python"
JOBS="${JOBS:-70}"
NEV=20000000
mkdir -p "$EV"

if [[ ! -s $EV/pwia_12C.root ]]; then
    JOBS=$JOBS ./run_3N_parallel.sh $NEV $EV/pwia_12C.root 10.6 1 -- -n -t 11:12 -q 4.1:4.3 -K 0.220
fi
if [[ ! -s $EV/pwia_4He.root ]]; then
    JOBS=$JOBS ./run_3N_parallel.sh $NEV $EV/pwia_4He.root 10.6 1 -- -A 4 -Z 2 -n -t 11:12 -q 4.1:4.3 -K 0.180
fi

"$PY" plotting/overlay_pwia_q42.py --ev-dir events/pwia_q42_kF \
    --suffix _kF --title-tag ', $\sigma_{CM}{=}\sqrt{3/5}\,k_F$, $k{>}k_F$'

echo "PIPELINE DONE $(date)"
