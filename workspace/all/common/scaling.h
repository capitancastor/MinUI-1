#ifndef __SCALING_H__
#define __SCALING_H__

// Scaling mode enumeration
enum {
    SCALING_NORMAL = 0,    // Normal (no special scaling)
    SCALING_ASPECT,        // Maintain aspect ratio
    SCALING_FULLSCREEN,    // Fill the screen
    SCALING_NATIVE,        // Show at original/native resolution
    SCALING_SCALE2X,       // Use Scale2x algorithm
    SCALING_COUNT          // Total number of scaling modes
};

// Sharpness modes
enum {
    SHARPNESS_SOFT = 0,   // Soft/bilinear filtering
    SHARPNESS_CRISP,       // Crisp/nearest-neighbor
    SHARPNESS_COUNT        // Total number of sharpness modes
};

// Display effects
enum {
    EFFECT_NONE = 0,
    EFFECT_GRID,
    EFFECT_LINE,
    EFFECT_COUNT
};

#endif // __SCALING_H__