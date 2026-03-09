#!/usr/bin/env bash
# run_SRC.sh — wrapper to set GENIE environment then launch SRC_analysis_2N
# Usage: ./run_SRC.sh [nEvents] [doFSI] [model]
#   nEvents  : number of events to generate (default 100000)
#   doFSI    : 1 = FSI on (default), 0 = FSI off
#   model    : "hN" (default) or "hA"

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
GENIE_DIR="$SCRIPT_DIR/Generator-R-3_06_02"

export GENIE="$GENIE_DIR"
export GXMLPATH="$SCRIPT_DIR/config/genie_override:$GENIE_DIR/config/G18_10a:$GENIE_DIR/config"
export GMSGCONF="$SCRIPT_DIR/config/quiet_messenger.xml"

BINARY="$SCRIPT_DIR/build/SRC_analysis_2N"

if [[ ! -x "$BINARY" ]]; then
    echo "ERROR: binary not found at $BINARY — run cmake --build build first"
    exit 1
fi

exec "$BINARY" "${1:-100000}" "${2:-1}" "${3:-hN}"
