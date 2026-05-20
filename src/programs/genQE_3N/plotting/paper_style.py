"""Shared matplotlib styling for PRR paper figures.

Import and call ``apply_style()`` at the top of any plotting script so all
figures share the same fonts, sizes, colormap, and tick conventions.
"""
import matplotlib as mpl

# Perceptually uniform, colorblind-safe, APS-friendly
CMAP = 'viridis'

# Color used for overlays on top of the colormap (lines, contours, regions).
# Solid black reads clearly against both ends of viridis and against the
# white outside-triangle region.
OVERLAY_COLOR = 'k'

# Categorical palette for line plots (Wong, colorblind-safe).
# Use in this order so the same role keeps the same color across figures:
#   Lead, Recoil 1, Recoil 2, extra...
LINE_COLORS = ['#D55E00', '#0072B2', '#009E73', '#CC79A7', '#E69F00']

# PRR column widths in inches (8.6 cm and 17.8 cm).
ONE_COL_IN = 8.6 / 2.54
TWO_COL_IN = 17.8 / 2.54


def figure_size(cols: int = 1, ratio: float = 0.85):
    """Return (width, height) in inches for a single- or two-column figure.

    ``ratio`` is height/width.
    """
    w = ONE_COL_IN if cols == 1 else TWO_COL_IN
    return (w, w * ratio)


def apply_style():
    """Apply rcParams used across all paper figures."""
    mpl.rcParams.update({
        # Fonts
        'font.family': 'serif',
        'font.serif': ['CMU Serif', 'Computer Modern Roman',
                       'Times New Roman', 'DejaVu Serif'],
        'mathtext.fontset': 'cm',
        # Sizes (PRR-friendly defaults)
        'axes.labelsize': 10,
        'axes.titlesize': 10,
        'xtick.labelsize': 8,
        'ytick.labelsize': 8,
        'legend.fontsize': 8,
        'figure.titlesize': 10,
        # Spines / ticks
        'axes.linewidth': 0.8,
        'xtick.direction': 'in',
        'ytick.direction': 'in',
        'xtick.top': True,
        'ytick.right': True,
        'xtick.major.size': 4.0,
        'xtick.minor.size': 2.0,
        'ytick.major.size': 4.0,
        'ytick.minor.size': 2.0,
        'xtick.major.width': 0.7,
        'xtick.minor.width': 0.5,
        'ytick.major.width': 0.7,
        'ytick.minor.width': 0.5,
        'xtick.minor.visible': True,
        'ytick.minor.visible': True,
        # Saving
        'savefig.bbox': 'tight',
        'savefig.pad_inches': 0.02,
        'pdf.fonttype': 42,    # embed Type-1 / Type-42 for editable text
        'ps.fonttype': 42,
    })
