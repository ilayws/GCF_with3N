#!/usr/bin/env bash
# 2N PWIA 12C/4He with nucleus-dependent kF (same values as the 3N kF run):
#   kF(4He) = 0.180 GeV/c -> sigma_CM = sqrt(2/5)*kF = 0.113842, pRel > 0.180
#   kF(12C) = 0.220 GeV/c -> sigma_CM = sqrt(2/5)*kF = 0.139141, pRel > 0.220
# CM motion ON (via -s), pair-relative-momentum cut via -k AND the sampled
# pRel range lower bound in the per-nucleus phase-space file (the default
# pRelmin = 0.2 would otherwise never sample [0.18, 0.2) for 4He).
# Q^2 in [4.1, 4.3] GeV^2 at generation; theta_e cut applied at plot time.
# ~36M attempts -> ~30M stored events per nucleus (84% fill efficiency).
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"
source "$SCRIPT_DIR/../../../setup_env.sh"

EV=events/pwia_q42_2N_kF
JOBS="${JOBS:-280}"
ATTEMPTS=36000000
PY="$SCRIPT_DIR/../genQE_3N/.venv/bin/python"
mkdir -p "$EV"

run_sample() {  # <Z> <N> <output.root> <extra flags...>
    local Z=$1 N=$2 out=$3; shift 3
    [[ -s $out ]] && { echo "SKIP $out (exists)"; return; }
    local parts_dir="${out%.root}.parts"
    mkdir -p "$parts_dir"
    local chunk=$(( (ATTEMPTS + JOBS - 1) / JOBS ))
    local parts=()
    for i in $(seq 0 $((JOBS-1))); do
        local part="$parts_dir/part$i.root"
        parts+=("$part")
        ./build/genQE "$Z" "$N" 10.6 "$part" "$chunk" "$@" \
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

run_sample 6 6 $EV/pwia_12C.root -s 0.139141 -k 0.220 -P ps_q42_kF12C.txt
run_sample 2 2 $EV/pwia_4He.root -s 0.113842 -k 0.180 -P ps_q42_kF4He.txt

"$PY" ../genQE_3N/plotting/overlay_pwia_q42_2N.py \
    --ev-dir ../genQE_FSI/events/pwia_q42_2N_kF --suffix _kF \
    --title-tag ', $\sigma_{CM}{=}\sqrt{2/5}\,k_F$, $p_{rel}{>}k_F$'

echo "PIPELINE DONE $(date)"
