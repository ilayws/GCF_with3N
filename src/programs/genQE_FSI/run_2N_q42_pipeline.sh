#!/usr/bin/env bash
# 2N (GCF pair) PWIA samples of 12C and 4He at Ebeam = 10.6 GeV with the
# generator-level window Q^2 in [4.1, 4.3] GeV^2 (ps_q42.txt) and
# sigma_CM = 0 (-s 0), then the per-nucleon 12C/4He alpha3N ratio plot.
# 6Li is intentionally absent until its gcfNucleus entry is settled.
#
# genQE attempts exactly the requested number of events and stores only
# weight > 0 ones; ATTEMPTS below is per nucleus, split across JOBS workers.
# The theta_e cut ([11,12] deg) is applied at plot time.
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"
source "$SCRIPT_DIR/../../../setup_env.sh"

EV=events/pwia_q42_2N
JOBS="${JOBS:-70}"
ATTEMPTS=400000000
PY="$SCRIPT_DIR/../genQE_3N/.venv/bin/python"
mkdir -p "$EV"

run_sample() {  # <Z> <N> <output.root>
    local Z=$1 N=$2 out=$3
    [[ -s $out ]] && { echo "SKIP $out (exists)"; return; }
    local parts_dir="${out%.root}.parts"
    mkdir -p "$parts_dir"
    local chunk=$(( (ATTEMPTS + JOBS - 1) / JOBS ))
    local parts=()
    for i in $(seq 0 $((JOBS-1))); do
        local part="$parts_dir/part$i.root"
        parts+=("$part")
        ./build/genQE "$Z" "$N" 10.6 "$part" "$chunk" -s 0 -P ps_q42.txt \
            > "$parts_dir/part$i.log" 2>&1 &
    done
    wait
    for p in "${parts[@]}"; do
        [[ -s $p ]] || { echo "ERROR: missing/empty $p" >&2; exit 1; }
    done
    hadd -f "$out" "${parts[@]}"
    rm -rf "$parts_dir"
    echo "MERGED $out"
}

run_sample 6 6 $EV/pwia_12C.root
run_sample 2 2 $EV/pwia_4He.root
run_sample 3 3 $EV/pwia_6Li.root

"$PY" ../genQE_3N/plotting/overlay_pwia_q42_2N.py

echo "PIPELINE DONE $(date)"
