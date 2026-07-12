#!/usr/bin/env bash
# Third batch for the kF-dependent samples: 40M more events each for 12C and
# 4He (same -K settings), then merge ALL run batches -> 80M-event pwia_*.root.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"
source "$SCRIPT_DIR/../../../setup_env.sh"

EV=events/pwia_q42_kF
JOBS="${JOBS:-280}"
NEV=40000000

merge_batch() {  # <stem> <extra flags...>
    local stem=$1; shift
    if [[ ! -s $EV/${stem}_run3.root ]]; then
        JOBS=$JOBS ./run_3N_parallel.sh $NEV $EV/${stem}_run3.root 10.6 1 -- "$@"
    fi
    hadd -f "$EV/$stem.root" "$EV/${stem}"_run*.root
    echo "COMBINED $EV/$stem.root"
}

merge_batch pwia_12C -n -t 11:12 -q 4.1:4.3 -K 0.220
merge_batch pwia_4He -A 4 -Z 2 -n -t 11:12 -q 4.1:4.3 -K 0.180

echo "PIPELINE DONE $(date)"
