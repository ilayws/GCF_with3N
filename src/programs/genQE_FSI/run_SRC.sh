#!/usr/bin/env bash
# run_SRC.sh — wrapper to set GENIE environment then launch SRC_analysis_2N
# Usage: ./run_SRC.sh [nEvents] [seed]
#   nEvents  : number of events to generate (default 100000)
#   seed     : random seed (default 1)

GENIE_DIR="$HOME/Downloads/Generator-master"
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
OVERRIDE_DIR="$SCRIPT_DIR/config/genie_override"

export GENIE="$GENIE_DIR"
export GXMLPATH="$OVERRIDE_DIR:$GENIE_DIR/config/G18_10a:$GENIE_DIR/config"
export DYLD_LIBRARY_PATH="$GENIE_DIR/lib:/opt/homebrew/lib:/opt/homebrew/opt/libxml2/lib${DYLD_LIBRARY_PATH:+:$DYLD_LIBRARY_PATH}"

BINARY="$SCRIPT_DIR/build/SRC_analysis_2N"

if [[ ! -x "$BINARY" ]]; then
    echo "ERROR: binary not found at $BINARY — run cmake --build build first"
    exit 1
fi

export GMSGCONF="$SCRIPT_DIR/config/quiet_messenger.xml"
export GMSGS="Messenger=ERROR,Rndm=ERROR"

exec "$BINARY" "${1:-100000}" "${2:-1}"
