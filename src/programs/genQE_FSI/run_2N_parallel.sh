#!/usr/bin/env bash
#
# run_2N_parallel.sh — generate SRC_analysis_2N events across many cores, then merge.
#
# Orchestration wrapper mirroring genQE_3N/run_3N_parallel.sh: launches several
# independent `SRC_analysis_2N` processes (each generating a slice of the
# requested number of successful events) and merges their ROOT files with
# `hadd`. Each worker auto-seeds its own RNG (TRandom3(0)); launches are
# staggered 1 s apart so the auto-seeds differ.
#
# Usage:
#   ./run_2N_parallel.sh [TOTAL] [OUTPUT] [DOFSI] [MODEL] [SIGCM] [WFMODE] [EBEAM] [FGMODE] [KF] [FSIINDEP]
#
#   TOTAL    total number of successful events        (default 1000000)
#   OUTPUT   merged output .root file                 (default events/misc/events_2N.root)
#   DOFSI    1 = FSI on, 0 = off                      (default 1)
#   MODEL    hN or hA                                 (default hN)
#   SIGCM    sigma_CM in GeV/c                        (default 0.150)
#   WFMODE   0=AV18 full, 2=SRC-only, 4=MF 1N         (default 0)
#   EBEAM    beam energy in GeV                       (default 5.01)
#   FGMODE   global or local (wf_mode 4 only)         (default global)
#   KF       Fermi momentum in GeV/c                  (default 0.25)
#   FSIINDEP 1 = independent per-nucleon FSI          (default 0 = shared remnant)
#
# Environment overrides:
#   JOBS=N    number of parallel workers   (default: all cores)
#   FORCE=1   overwrite a non-empty OUTPUT
#   RETRIES=N crash-retry rounds           (default 2)
#
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

TOTAL="${1:-1000000}"
OUTPUT="${2:-events/misc/events_2N.root}"
DOFSI="${3:-1}"
MODEL="${4:-hN}"
SIGCM="${5:-0.150}"
WFMODE="${6:-0}"
EBEAM="${7:-5.01}"
FGMODE="${8:-global}"
KF="${9:-0.25}"
FSIINDEP="${10:-0}"
FORCE="${FORCE:-0}"

BINARY="$SCRIPT_DIR/build/SRC_analysis_2N"
if [[ ! -x "$BINARY" ]]; then
    echo "ERROR: binary not found at $BINARY — run cmake --build build first" >&2
    exit 1
fi

HADD="$(command -v hadd || true)"
if [[ -z "$HADD" ]] && command -v root-config >/dev/null 2>&1; then
    HADD="$(root-config --bindir)/hadd"
fi
if [[ -z "$HADD" || ! -x "$HADD" ]]; then
    echo "ERROR: hadd not found (need ROOT in PATH)" >&2
    exit 1
fi

if ! [[ "$TOTAL" =~ ^[0-9]+$ ]] || [[ "$TOTAL" -le 0 ]]; then
    echo "ERROR: TOTAL must be a positive integer (got '$TOTAL')" >&2
    exit 1
fi

if [[ -s "$OUTPUT" && "$FORCE" != "1" ]]; then
    echo "ERROR: $OUTPUT already exists and is non-empty. Set FORCE=1 to overwrite." >&2
    exit 1
fi

# GENIE environment (mirror run_SRC.sh)
GENIE_DIR="$SCRIPT_DIR/Generator-R-3_06_02"
export GENIE="$GENIE_DIR"
export GXMLPATH="$SCRIPT_DIR/config/genie_override:$GENIE_DIR/config/G18_10a:$GENIE_DIR/config"
export GMSGCONF="$SCRIPT_DIR/config/quiet_messenger.xml"

JOBS="${JOBS:-$(nproc)}"
[[ "$JOBS" -gt "$TOTAL" ]] && JOBS="$TOTAL"

base=$(( TOTAL / JOBS ))
rem=$(( TOTAL % JOBS ))

mkdir -p "$(dirname "$OUTPUT")"
OUT_DIR="$(cd "$(dirname "$OUTPUT")" && pwd)"
OUT_BASE="$(basename "${OUTPUT%.root}")"
PARTS_DIR="$OUT_DIR/parts_${OUT_BASE}_$$"
mkdir -p "$PARTS_DIR"

echo "=================================================================="
echo " Parallel SRC_analysis_2N generation"
echo "   total events : $TOTAL  (successful)"
echo "   workers      : $JOBS  (each ~$base events; first $rem get +1)"
echo "   output       : $OUTPUT"
echo "   doFSI/model  : $DOFSI / $MODEL  (indep=$FSIINDEP)"
echo "   sigmaCM / kF : $SIGCM / $KF GeV/c"
echo "   wf_mode/fg   : $WFMODE / $FGMODE"
echo "   Ebeam        : $EBEAM GeV"
echo "   parts dir    : $PARTS_DIR"
echo "=================================================================="

declare -a PIDS PARTS SIZES
for (( i=0; i<JOBS; i++ )); do
    n=$base
    (( i < rem )) && n=$(( n + 1 ))
    PARTS+=("$(printf "%s/%s.part%03d.root" "$PARTS_DIR" "$OUT_BASE" "$i")")
    SIZES+=("$n")
done

launch_chunk() {
    local idx="$1" label="${2:-launched}"
    local part="${PARTS[$idx]}" log="${PARTS[$idx]%.root}.log" n="${SIZES[$idx]}"
    "$BINARY" "$n" "$DOFSI" "$MODEL" "$part" "$SIGCM" "$WFMODE" "$EBEAM" "$FGMODE" "$KF" "$FSIINDEP" >"$log" 2>&1 &
    PIDS[$idx]=$!
    echo "  $label worker $idx  pid=${PIDS[$idx]}  events=$n  -> $(basename "$part")"
    sleep 1   # stagger => distinct TRandom3(0) auto-seeds
}

wait_and_collect() {
    failed=()
    local idx rc
    for idx in "$@"; do
        if wait "${PIDS[$idx]}"; then
            echo "  worker $idx done ok"
        else
            rc=$?
            echo "  ERROR: worker $idx (pid ${PIDS[$idx]}) exited $rc — see ${PARTS[$idx]%.root}.log" >&2
            failed+=("$idx")
        fi
    done
}

MAX_RETRIES="${RETRIES:-2}"
declare -a failed

for (( i=0; i<JOBS; i++ )); do launch_chunk "$i"; done
echo "Waiting for $JOBS workers..."
wait_and_collect $(seq 0 $((JOBS-1)))

attempt=0
while [[ ${#failed[@]} -gt 0 && $attempt -lt $MAX_RETRIES ]]; do
    attempt=$(( attempt + 1 ))
    retry=("${failed[@]}")
    echo "Retry round $attempt/$MAX_RETRIES for ${#retry[@]} crashed worker(s): ${retry[*]}"
    for idx in "${retry[@]}"; do launch_chunk "$idx" "retry-launched"; done
    wait_and_collect "${retry[@]}"
done

if [[ ${#failed[@]} -gt 0 ]]; then
    echo "ERROR: worker(s) ${failed[*]} still failing after $MAX_RETRIES retries;" \
         "NOT merging. Part files kept in $PARTS_DIR" >&2
    exit 1
fi

echo "Merging ${#PARTS[@]} files with hadd -> $OUTPUT"
"$HADD" -f "$OUTPUT" "${PARTS[@]}" > "$PARTS_DIR/hadd.log" 2>&1 || {
    echo "ERROR: hadd failed — see $PARTS_DIR/hadd.log" >&2; exit 1; }

# Entry-count check (use genQE_FSI venv if present).
PYBIN=""
[[ -x "$SCRIPT_DIR/.venv/bin/python" ]] && PYBIN="$SCRIPT_DIR/.venv/bin/python"
if [[ -n "$PYBIN" ]]; then
    "$PYBIN" - "$OUTPUT" "$TOTAL" <<'PY'
import sys, uproot
path, total = sys.argv[1], int(sys.argv[2])
n = uproot.open(path)["events"].num_entries
print(f"merged 'events' entries: {n}  (expected {total})")
sys.exit(0 if n == total else 3)
PY
    if [[ $? -ne 0 ]]; then
        echo "WARNING: merged entry count does not match expected $TOTAL" >&2
    fi
else
    echo "(skipping entry-count check: no .venv python found)"
fi

rm -rf "$PARTS_DIR"
echo "Done. Output: $OUTPUT"
