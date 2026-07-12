#!/usr/bin/env bash
# Second 20M-event batch for the kF-dependent samples (same settings as
# run_kF_pipeline.sh), then merge run1+run2 -> 40M-event pwia_*.root.
# hAttempts sums in the merge, so per-attempt normalization stays exact.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"
source "$SCRIPT_DIR/../../../setup_env.sh"

EV=events/pwia_q42_kF
JOBS="${JOBS:-70}"
NEV=20000000

merge_batch() {  # <stem> <extra flags...>
    local stem=$1; shift
    if [[ -s $EV/$stem.root && ! -s $EV/${stem}_run1.root ]]; then
        mv "$EV/$stem.root" "$EV/${stem}_run1.root"
    fi
    if [[ ! -s $EV/${stem}_run2.root ]]; then
        JOBS=$JOBS ./run_3N_parallel.sh $NEV $EV/${stem}_run2.root 10.6 1 -- "$@"
    fi
    hadd -f "$EV/$stem.root" "$EV/${stem}_run1.root" "$EV/${stem}_run2.root"
    echo "COMBINED $EV/$stem.root"
}

merge_batch pwia_12C -n -t 11:12 -q 4.1:4.3 -K 0.220
merge_batch pwia_4He -A 4 -Z 2 -n -t 11:12 -q 4.1:4.3 -K 0.180

echo "PIPELINE DONE $(date)"
