#!/usr/bin/env bash
# test_fsi_integration.sh — Verification test for GENIE FSI integration
#
# Checks:
#   1. Build: cmake + make succeeds
#   2. GENIE libs: correct architecture (arm64) and libxml2 linkage (homebrew)
#   3. Runtime: 1000 events complete without crash
#   4. Physics: non-zero charge exchange, pion production, reasonable efficiency
#   5. Output: histogram files are generated
#   6. RPATH: binary runs without DYLD_LIBRARY_PATH

set -uo pipefail

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
GENIE_DIR="$SCRIPT_DIR/Generator-R-3_06_02"
BUILD_DIR="$SCRIPT_DIR/build"
PASS=0
FAIL=0

pass() { echo "  PASS: $1"; PASS=$((PASS + 1)); }
fail() { echo "  FAIL: $1"; FAIL=$((FAIL + 1)); }

echo "=== GENIE FSI Integration Test ==="
echo ""

# ---------- Test 1: GENIE libs exist and are arm64 ----------
echo "--- Test 1: GENIE library verification ---"

if file "$GENIE_DIR/lib/libGPhHadTransp.dylib" 2>/dev/null | grep -q "arm64"; then
    pass "libGPhHadTransp.dylib is arm64"
else
    fail "libGPhHadTransp.dylib not found or wrong architecture"
fi

if otool -L "$GENIE_DIR/lib/libGFwNum.dylib" 2>/dev/null | grep -q "/opt/homebrew"; then
    pass "libxml2 links to homebrew (not conda)"
else
    fail "libxml2 does not link to homebrew"
fi

# ---------- Test 2: Build ----------
echo ""
echo "--- Test 2: Project build ---"

cd "$BUILD_DIR"
if cmake .. > /dev/null 2>&1 && make -j$(sysctl -n hw.ncpu) > /dev/null 2>&1; then
    pass "cmake + make succeeds"
else
    fail "cmake + make failed"
fi

if [ -x "$BUILD_DIR/SRC_analysis_2N" ]; then
    pass "SRC_analysis_2N binary exists"
else
    fail "SRC_analysis_2N binary not found"
fi

if [ -x "$BUILD_DIR/genQE_FSI" ]; then
    pass "genQE_FSI binary exists"
else
    fail "genQE_FSI binary not found"
fi

# ---------- Test 3: RPATH (no DYLD_LIBRARY_PATH needed) ----------
echo ""
echo "--- Test 3: RPATH linkage ---"

if otool -l "$BUILD_DIR/SRC_analysis_2N" 2>/dev/null | grep -q "Generator-R-3_06_02/lib"; then
    pass "SRC_analysis_2N has GENIE RPATH embedded"
else
    fail "SRC_analysis_2N missing GENIE RPATH"
fi

# ---------- Test 4: Runtime — 1000 events ----------
echo ""
echo "--- Test 4: Runtime (1000 events) ---"

cd "$SCRIPT_DIR"
export GENIE="$GENIE_DIR"
export GXMLPATH="$SCRIPT_DIR/config/genie_override:$GENIE_DIR/config/G18_10a:$GENIE_DIR/config"
export GMSGCONF="$SCRIPT_DIR/config/quiet_messenger.xml"

OUTPUT=$("$BUILD_DIR/SRC_analysis_2N" 1000 42 2>&1)

if echo "$OUTPUT" | grep -q "Accepted (weight>0):.*1000"; then
    pass "1000 events completed successfully"
else
    fail "Did not complete 1000 events"
fi

# ---------- Test 5: Physics checks ----------
echo ""
echo "--- Test 5: Physics validation ---"

# Check charge exchange (should be 2-8% for deuterium)
CX_FRAC=$(echo "$OUTPUT" | grep "Events with any CX:" | grep -oE '[0-9]+\.[0-9]+%' | tr -d '%')
if [ -n "$CX_FRAC" ] && (( $(echo "$CX_FRAC > 1.0" | bc -l) )) && (( $(echo "$CX_FRAC < 15.0" | bc -l) )); then
    pass "Charge exchange rate: ${CX_FRAC}% (expected 2-8%)"
else
    fail "Charge exchange rate out of range: ${CX_FRAC:-missing}%"
fi

# Check pion production (should be 1-10%)
PI_FRAC=$(echo "$OUTPUT" | grep "Events with any pion:" | grep -oE '[0-9]+\.[0-9]+%' | tr -d '%')
if [ -n "$PI_FRAC" ] && (( $(echo "$PI_FRAC > 0.5" | bc -l) )) && (( $(echo "$PI_FRAC < 15.0" | bc -l) )); then
    pass "Pion production rate: ${PI_FRAC}% (expected 1-10%)"
else
    fail "Pion production rate out of range: ${PI_FRAC:-missing}%"
fi

# Check generation efficiency (should be 40-80%)
EFF=$(echo "$OUTPUT" | grep "Gen. efficiency:" | grep -oE '[0-9]+\.[0-9]+%' | tr -d '%')
if [ -n "$EFF" ] && (( $(echo "$EFF > 30.0" | bc -l) )) && (( $(echo "$EFF < 90.0" | bc -l) )); then
    pass "Generation efficiency: ${EFF}% (expected 40-80%)"
else
    fail "Generation efficiency out of range: ${EFF:-missing}%"
fi

# Check that pions include all three species
PI_LINE=$(echo "$OUTPUT" | grep "Total pions:")
TOTAL_PI=$(echo "$PI_LINE" | sed -n 's/.*pi+=\([0-9]*\).*/\1/p')
PI_MINUS=$(echo "$PI_LINE" | sed -n 's/.*pi-=\([0-9]*\).*/\1/p')
PI_ZERO=$(echo "$PI_LINE" | sed -n 's/.*pi0=\([0-9]*\).*/\1/p')
if [ -n "$TOTAL_PI" ] && [ "$TOTAL_PI" -gt 0 ] && [ -n "$PI_MINUS" ] && [ "$PI_MINUS" -gt 0 ] && [ -n "$PI_ZERO" ] && [ "$PI_ZERO" -gt 0 ]; then
    pass "All pion species produced (pi+=$TOTAL_PI, pi-=$PI_MINUS, pi0=$PI_ZERO)"
else
    fail "Missing pion species (pi+=${TOTAL_PI:-?}, pi-=${PI_MINUS:-?}, pi0=${PI_ZERO:-?})"
fi

# Check light-nuclei warning was emitted (deuterium target, A_res=0 or A_res=2)
if echo "$OUTPUT" | grep -q "Warning: GENIE intranuke applied to light residual nucleus"; then
    pass "Light-nuclei warning emitted for deuterium"
else
    fail "Light-nuclei warning not emitted"
fi

# Check FSI mode string
if echo "$OUTPUT" | grep -q "ENABLED (GENIE h[NA] intranuke cascade)"; then
    pass "FSI mode string correct"
else
    fail "FSI mode string incorrect"
fi

# ---------- Test 6: Output files ----------
echo ""
echo "--- Test 6: Output file checks ---"

OUTDIR="$SCRIPT_DIR/analysis_output_2N/txt_files"
for f in hist_theta12_1D.txt hist_xB_Q2.txt hist_theta12_theta23_3body.txt fsi_event_stats.txt; do
    if [ -s "$OUTDIR/$f" ]; then
        pass "$f exists and non-empty"
    else
        fail "$f missing or empty"
    fi
done

# Check fsi_event_stats.txt has expected keys
if grep -q "frac_events_with_any_cx" "$OUTDIR/fsi_event_stats.txt"; then
    pass "FSI stats file has expected keys"
else
    fail "FSI stats file missing expected keys"
fi

# ---------- Test 7: Legacy files removed ----------
echo ""
echo "--- Test 7: Legacy file removal ---"

for f in INukeNNData.cc INukeNNData.hh SimpleFSIHandler.cc SimpleFSIHandler.hh; do
    if [ ! -f "$SCRIPT_DIR/$f" ]; then
        pass "$f removed"
    else
        fail "$f still exists"
    fi
done

# ---------- Test 8: No USE_GENIE_FSI references remain ----------
echo ""
echo "--- Test 8: Clean preprocessor guards ---"

if ! grep -rq "USE_GENIE_FSI" "$SCRIPT_DIR/QEGeneratorFSI.cc" "$SCRIPT_DIR/QEGeneratorFSI.hh" "$SCRIPT_DIR/CMakeLists.txt" "$SCRIPT_DIR/analysis/SRC_analysis_2N.cpp" 2>/dev/null; then
    pass "No USE_GENIE_FSI references in source files"
else
    fail "USE_GENIE_FSI still referenced"
fi

if ! grep -rq "INukeNNData" "$SCRIPT_DIR/QEGeneratorFSI.cc" "$SCRIPT_DIR/QEGeneratorFSI.hh" "$SCRIPT_DIR/CMakeLists.txt" "$SCRIPT_DIR/analysis/SRC_analysis_2N.cpp" 2>/dev/null; then
    pass "No INukeNNData references in source files"
else
    fail "INukeNNData still referenced"
fi

# ---------- Summary ----------
echo ""
echo "==============================="
echo "  Results: $PASS passed, $FAIL failed"
echo "==============================="

if [ "$FAIL" -eq 0 ]; then
    echo "  All tests passed!"
    exit 0
else
    echo "  Some tests failed."
    exit 1
fi
