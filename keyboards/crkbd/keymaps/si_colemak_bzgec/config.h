#pragma once


/***************************************************************************************************
 * Select hand configuration
 **************************************************************************************************/
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

/***************************************************************************************************
 * Unknown
 **************************************************************************************************/
// How long before a key press becomes a hold
//#define TAPPING_TERM 100

// The delay when reading the value of the pin (5 is default)
// #define DEBOUNCE 5

// Sets the USB polling rate in milliseconds for the keyboard, mouse, and shared (NKRO/media keys) interfaces
// #define USB_POLLING_INTERVAL_MS 10


// Force a key release to be evaluated using the current layer stack instead of remembering
// which layer it came from (used for advanced cases)
// #define STRICT_LAYER_RELEASE
// 1. Press move to layer 1
// 2. Press Shift
// 3. Press some key
// 4. Release Shift
// 5. Release move to layer 1
// 6. Release some key
// The order of 1/2 and 5/6 step doesn't matter

//#define USE_SERIAL_PD2
//#define OLED_DISABLE_TIMEOUT
//#define TAPPING_TERM_PER_KEY

//  comment out unnecessary layouts
//#define ENABLE_QWERTY
//#define ENABLE_COLEMAK
//#define ENABLE_DVORAK
//#define ENABLE_WORKMAN

// #ifdef RGBLIGHT_ENABLE
//     #define RGBLIGHT_EFFECT_BREATHING
//     #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//     #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//     #define RGBLIGHT_EFFECT_SNAKE
//     #define RGBLIGHT_EFFECT_KNIGHT
//     #define RGBLIGHT_EFFECT_CHRISTMAS
//     #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//     #define RGBLIGHT_EFFECT_RGB_TEST
//     #define RGBLIGHT_EFFECT_ALTERNATING
//     #define RGBLIGHT_EFFECT_TWINKLE
//     #define RGBLIGHT_LIMIT_VAL 120
//     #define RGBLIGHT_HUE_STEP 10
//     #define RGBLIGHT_SAT_STEP 17
//     #define RGBLIGHT_VAL_STEP 17
// #endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
