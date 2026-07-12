# Source this before building or running the FSI generators on this machine:
#   source setup_env.sh
#
# Sets up ROOT (/opt/root-install), the vendored GENIE tree, and the
# user-local log4cpp install (~/local, built without sudo).

source /opt/root-install/bin/thisroot.sh

export GENIE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)/src/programs/genQE_FSI/Generator-R-3_06_02"
export PATH="$GENIE/bin:$PATH"
export LD_LIBRARY_PATH="$GENIE/lib:$HOME/local/lib${LD_LIBRARY_PATH:+:$LD_LIBRARY_PATH}"
