/***************************************************************************************************
 * Slovenian Colemak variation
 ***************************************************************************************************
 *
 ***************************************************************************************************
 * Base layer:
 ***************************************************************************************************
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | TAB    |  q  Q  |  w  W  |  f  F  |  p  P  |  b  B  |             |  j  J  |  l  L  |  u  U  |  y  Y  |  ;  :  |  =  +  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | EXT1   |  a  A  |  r  R  |  s  S  |  t  T  |  g  G  |             |  m  M  |  n  N  |  e  E  |  i  I  |  o  O  |  '  "  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | Shift  |  z  Z  |  x  X  |  c  C  |  d  D  |  v  V  |             |  k  K  |  h  H  |  ,  <  |  .  >  |  /  ?  | Shift  |
 *  +--------+--------+--------+----+---+----+---+----+---+----+   +----+---+----+---+----+---+----+--------+--------+--------+
 *                                  | Win    | Ctrl   | Space  |   | Enter  | SYM    | L Alt  |
 *                                  +--------+--------+--------+   +--------+--------+--------+
 *
 ***************************************************************************************************
 * Symbols layer:
 ***************************************************************************************************
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | TAB    |  1  !  |  2  @  |  3  #  |  4  $  |  5  %  |             |  6  ^  |  7  &  |  8  *  |  9  (  |  0  )  |  -  _  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | EXT2   |        |        |  š  Š  |        |        |             |        |        |  €  °  |  [  {  |  ]  }  |  `  ~  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | Shift  |  ž  Ž  |        |  č  Č  |        |        |             |        |        |        |        |  \  |  | Shift  |
 *  +--------+--------+--------+----+---+----+---+----+---+----+   +----+---+----+---+----+---+----+--------+--------+--------+
 *                                  | Win    | Ctrl   | Space  |   | Enter  | XXX    | L Alt  |
 *                                  +--------+--------+--------+   +--------+--------+--------+
 *
 ***************************************************************************************************
 * Extend layer 1:
 ***************************************************************************************************
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | TAB    | ESC    | WhUp   | GoBack | GoFwd  |        |             | Home   | PgDn   | PgUp   | End    | Del    | Print  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | XXX    | Back   | WhDown |        |        |        |             | Left   | Down   | Up     | Right  | Back   | ESC    |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | Shift  |        |        |        |        |        |             | Undo   | Redo   |        |        | Del    | Shift  |
 *  +--------+--------+--------+----+---+----+---+----+---+----+   +----+---+----+---+----+---+----+--------+--------+--------+
 *                                  | Win    | Ctrl   | Enter  |   | Enter  | EXT2   | L Alt  |
 *                                  +--------+--------+--------+   +--------+--------+--------+
 *
 ***************************************************************************************************
 * Extend layer 2:
 ***************************************************************************************************
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | TAB    | F1     | F2     | F3     | F4     | F5     |             | F6     | F7     | F8     | F9     | F10    |        |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | XXX    |        |        |        |        |        |             | Vol Mu | Vol Dn | Vol Up | F11    | F12    |        |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | Shift  |        |        |        |        |        |             |        | Bri Dn | Bri Up |        |        | Shift  |
 *  +--------+--------+--------+----+---+----+---+----+---+----+   +----+---+----+---+----+---+----+--------+--------+--------+
 *                                  | Win    | Ctrl   | Enter  |   | Enter  | XXX    | L Alt  |
 *                                  +--------+--------+--------+   +--------+--------+--------+
 *
 ***************************************************************************************************
 * QMK layer:
 ***************************************************************************************************
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | XXX    |        |        |        |        |        |             |        |        |        |        |        |        |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  |        |        |        |        |        | Reset  |             |        | To SI  | To SI  |        |        |        |
 *  |        |        |        |        |        |        |             |        | Linux  | Win    |        |        |        |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  |        |        |        |        |        | Bootl  |             |        |        |        |        |        |        |
 *  +--------+--------+--------+----+---+----+---+----+---+----+   +----+---+----+---+----+---+----+--------+--------+--------+
 *                                  |        |        |        |   |        |        |        |
 *                                  +--------+--------+--------+   +--------+--------+--------+
 *
 * - `To US`: Switch keyboard layout to match US host layout
 * - `To SI Linux`: Switch keyboard layout to match SI host layout, Linux host
 * - `To SI Win`: Switch keyboard layout to match SI host layout, Windows host
 *
 ***************************************************************************************************
 * Notes:
 ***************************************************************************************************
 * - EXT2 layer is accessible when pressing: 'EXT' + 'SYM'
 * - QMK layer is accessible when holding TAB key
 * - Difference between "SI Linux" and "SI Windows" is in how a few special characters
 *   are implemented but for the end use there should be no difference
 *
 *   - `^`
 *   - `\``
 *   - `~`
 *
 * - Default host layout is Linux
 *
 ***************************************************************************************************
 * TODO:
 ***************************************************************************************************
 * - Double tab on SHIFT key toggles CAPS_LOCK
 * - `Reset`: Reset this side of the keyboard
 * - `Bootl`: Reset this side of the keyboard to bootloader mode
 *
 ***************************************************************************************************
 *  Commands:
 ***************************************************************************************************
 * `qmk compile -kb crkbd -km si_colemak_bzgec`
 * `qmk flash -kb crkbd -km si_colemak_bzgec`
 *
 ***************************************************************************************************
 *  Links:
 ***************************************************************************************************
 * https://docs.qmk.fm/#/newbs_building_firmware
 * https://docs.qmk.fm/#/keycodes
 * https://docs.qmk.fm/#/reference_keymap_extras?id=language-specific-keycodes
 * https://imgur.com/a/xnTKcDd
 * https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_slovenian.h
 *
 **************************************************************************************************/

#include QMK_KEYBOARD_H
#include "keymap_slovenian.h"

#define xxxxxxx KC_NO

#define MODS_L_SHIFT_MASK  MOD_BIT(KC_LSFT)
#define MODS_R_SHIFT_MASK  MOD_BIT(KC_RSFT)
#define MODS_SHIFT_MASK    (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT))
#define MODS_CTRL_MASK     (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTRL))
#define MODS_ALT_MASK      (MOD_BIT(KC_LALT) | MOD_BIT(KC_RALT))

#define BASE   0u  // Base layer, host layout: SI, Linux host
#define SYM    1u  // Symbols layer, host layout: SI, Linux host
#define EXT1   2u  // Extend layer 1
#define EXT2   3u  // Extend layer 2
#define L_QMK  4u  // QMK layer

// Go to QMK layer when holding TAB key
// On tab: TAB
// On hold: L_QMK (QMK layer)
#define TAB_L_QMK  LT(L_QMK, KC_TAB)

typedef enum KEYMAP_hostOs_ENUM {
    KEYMAP_hostOs_LIN = 0u,
    KEYMAP_hostOs_WIN = 1u,
} KEYMAP_hostOs_E;

typedef enum SI_COLEMAK_keycodes_ENUM {
  _TO_LIN = SAFE_RANGE,
  _TO_WIN,
  _COMM,  // ','  '<'
  _DOT,   // '.'  '>'
  _SCLN,  // ';'  ':'
  _EQL,   // '='  '+'
  _QUOT,  // '''  '"'
  _SLSH,  // '/'  '?'
  _2,     // '2'  '@'
  _6,     // '6'  '^'
  _7,     // '7'  '&'
  _8,     // '8'  '*'
  _9,     // '9'  '('
  _0,     // '0'  ')'
  _EURO,  // '€'  '°'
  _LBRC,  // '['  '{'
  _RBRC,  // ']'  '}'
  _GRV,   // '`'  '~'
  _BSLS,  // '\'  '|'
} SI_COLEMAK_keycodes_E;


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [BASE] = LAYOUT_split_3x6_3(
        TAB_L_QMK, SI_Q,     SI_W,     SI_F,     SI_P,     SI_B,          SI_J,    SI_L,     SI_U,    SI_Y,  _SCLN,  _EQL,
        MO(EXT1),  SI_A,     SI_R,     SI_S,     SI_T,     SI_G,          SI_M,    SI_N,     SI_E,    SI_I,  SI_O,   _QUOT,
        KC_LSFT,   SI_Z,     SI_X,     SI_C,     SI_D,     SI_V,          SI_K,    SI_H,     _COMM,   _DOT,  _SLSH,  KC_RSFT,
                                       KC_LWIN,  KC_LCTL,  KC_SPC,        KC_ENT,  MO(SYM),  KC_LALT
    ),
    [SYM] = LAYOUT_split_3x6_3(
        _______,  SI_1,     _2,       SI_3,     SI_4,     SI_5,          _6,       _7,       _8,       _9,       _0,       SI_MINS,
        MO(EXT2), xxxxxxx,  xxxxxxx,  SI_SCAR,  xxxxxxx,  xxxxxxx,       xxxxxxx,  xxxxxxx,  _EURO,    _LBRC,    _RBRC,    _GRV,
        _______,  SI_ZCAR,  xxxxxxx,  SI_CCAR,  xxxxxxx,  xxxxxxx,       xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,  _BSLS,    _______,
                                      _______,  _______,  _______,       _______,  xxxxxxx,  _______
    ),
    [EXT1] = LAYOUT_split_3x6_3(
        _______,  KC_ESC,   KC_WH_U,  KC_WBAK,  KC_WFWD,  xxxxxxx,       KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   KC_DEL,   KC_PSCR,
        xxxxxxx,  KC_BSPC,  KC_WH_D,  xxxxxxx,  xxxxxxx,  xxxxxxx,       KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_BSPC,  KC_ESC,
        _______,  xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,       KC_UNDO,  KC_AGIN,  xxxxxxx,  xxxxxxx,  KC_DEL,   _______,
                                      _______,  _______,  KC_ENT,        _______,  MO(EXT2), _______
    ),
    [EXT2] = LAYOUT_split_3x6_3(
        _______,  KC_F1,   KC_F2,    KC_F3,    KC_F4,    KC_F5,         KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   xxxxxxx,
        xxxxxxx,  xxxxxxx, xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,       KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_F11,   KC_F12,   xxxxxxx,
        _______,  xxxxxxx, xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,       xxxxxxx,  KC_BRID,  KC_BRIU,  xxxxxxx,  xxxxxxx,  _______,
                                     _______,  _______,  _______,       _______,  xxxxxxx,  _______
    ),
    [L_QMK] = LAYOUT_split_3x6_3(
        xxxxxxx,  xxxxxxx, xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,       xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,
        xxxxxxx,  xxxxxxx, xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,       xxxxxxx,  _TO_LIN,  _TO_WIN,  xxxxxxx,  xxxxxxx,  xxxxxxx,
        xxxxxxx,  xxxxxxx, xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,       xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,  xxxxxxx,
                                     xxxxxxx,  xxxxxxx,  xxxxxxx,       xxxxxxx,  xxxxxxx,  xxxxxxx
    ),
    // clang-format on
};

static volatile KEYMAP_hostOs_E fs_hostOs = KEYMAP_hostOs_LIN;

static inline bool handle_keycode_changeHostOs(keyrecord_t *record, KEYMAP_hostOs_E inHostOs);
static inline bool handle_keycode_comm(keyrecord_t *record);
static inline bool handle_keycode_dot(keyrecord_t *record);
static inline bool handle_keycode_scln(keyrecord_t *record);
static inline bool handle_keycode_eql(keyrecord_t *record);
static inline bool handle_keycode_quot(keyrecord_t *record);
static inline bool handle_keycode_slsh(keyrecord_t *record);
static inline bool handle_keycode_2(keyrecord_t *record);
static inline bool handle_keycode_6(keyrecord_t *record);
static inline bool handle_keycode_7(keyrecord_t *record);
static inline bool handle_keycode_8(keyrecord_t *record);
static inline bool handle_keycode_9(keyrecord_t *record);
static inline bool handle_keycode_0(keyrecord_t *record);
static inline bool handle_keycode_euro(keyrecord_t *record);
static inline bool handle_keycode_lbrc(keyrecord_t *record);
static inline bool handle_keycode_rbrc(keyrecord_t *record);
static inline bool handle_keycode_grv(keyrecord_t *record);
static inline bool handle_keycode_bsls(keyrecord_t *record);
static void reg_alt_unreg_shift(bool *inPressedWithShift_L, bool *inPressedWithShift_R);
static void unreg_alt_reg_shift(bool *inPressedWithShift_L, bool *inPressedWithShift_R);

// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md#programming-the-behavior-of-any-keycode-idprogramming-the-behavior-of-any-keycode
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case _TO_LIN:
            return handle_keycode_changeHostOs(record, KEYMAP_hostOs_LIN);

        case _TO_WIN:
            return handle_keycode_changeHostOs(record, KEYMAP_hostOs_WIN);

        case _COMM:
            return handle_keycode_comm(record);

        case _DOT:
            return handle_keycode_dot(record);

        case _SCLN:
            return handle_keycode_scln(record);

        case _EQL:
            return handle_keycode_eql(record);

        case _QUOT:
            return handle_keycode_quot(record);

        case _SLSH:
            return handle_keycode_slsh(record);

        case _2:
            return handle_keycode_2(record);

        case _6:
            return handle_keycode_6(record);

        case _7:
            return handle_keycode_7(record);

        case _8:
            return handle_keycode_8(record);

        case _9:
            return handle_keycode_9(record);

        case _0:
            return handle_keycode_0(record);

        case _EURO:
            return handle_keycode_euro(record);

        case _LBRC:
            return handle_keycode_lbrc(record);

        case _RBRC:
            return handle_keycode_rbrc(record);

        case _GRV:
            return handle_keycode_grv(record);

        case _BSLS:
            return handle_keycode_bsls(record);

        default:
            return true; // Process all other keycodes normally
    }
}

static inline bool handle_keycode_changeHostOs(keyrecord_t *record, KEYMAP_hostOs_E inHostOs) {
    if(record->event.pressed) {
        fs_hostOs = inHostOs;
    } else {
        // Key released
    }

    return false; // Skip all further processing of this key
}

// ','  '<'
static inline bool handle_keycode_comm(keyrecord_t *record) {
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '<'
            pressedWithShift = true;
            // Unregister shift ('<' on slovenian keyboard is without shift)
            unregister_code(KC_LSFT);
            register_code(SI_LABK);
        } else {
            // Pressed without shift: ','
            pressedWithShift = false;
            register_code(SI_COMM);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_LABK);
            // Register shift back to default state
            register_code(KC_LSFT);
        } else {
            unregister_code(SI_COMM);
        }
    }

    return false; // Skip all further processing of this key
}

// '.'  '>'
static inline bool handle_keycode_dot(keyrecord_t *record) {
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '>'
            pressedWithShift = true;
            register_code(SI_LABK);
        } else {
            // Pressed without shift: '.'
            pressedWithShift = false;
            register_code(SI_DOT);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_LABK);
        } else {
            unregister_code(SI_DOT);
        }
    }

    return false; // Skip all further processing of this key
}

// ';'  ':'
static inline bool handle_keycode_scln(keyrecord_t *record) {
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: ':'
            pressedWithShift = true;
            register_code(SI_DOT);
        } else {
            // Pressed without shift: ';'
            pressedWithShift = false;
            // Register shift (';' on slovenian keyboard is with shift)
            register_code(KC_LSFT);
            register_code(SI_COMM);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_DOT);
        } else {
            unregister_code(SI_COMM);
            // Unregister shift back to default state
            unregister_code(KC_LSFT);
        }
    }

    return false; // Skip all further processing of this key
}

// '='  '+'
static inline bool handle_keycode_eql(keyrecord_t *record) {
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '+'
            pressedWithShift = true;
            // Unregister shift ('+' on slovenian keyboard is without shift)
            unregister_code(KC_LSFT);
            register_code(SI_PLUS);
        } else {
            // Pressed without shift: '='
            pressedWithShift = false;
            // Register shift ('=' on slovenian keyboard is with shift)
            register_code(KC_LSFT);
            register_code(SI_0);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_PLUS);
            // Register shift back to default state
            register_code(KC_LSFT);
        } else {
            unregister_code(SI_0);
            // Unregister shift back to default state
            unregister_code(KC_LSFT);
        }
    }

    return false; // Skip all further processing of this key
}

// '''  '"'
static inline bool handle_keycode_quot(keyrecord_t *record) {
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '"'
            pressedWithShift = true;
            register_code(SI_2);
        } else {
            // Pressed without shift: '''
            pressedWithShift = false;
            register_code(SI_QUOT);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_2);
        } else {
            unregister_code(SI_QUOT);
        }
    }

    return false; // Skip all further processing of this key
}

// '/'  '?'
static inline bool handle_keycode_slsh(keyrecord_t *record) {
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '?'
            pressedWithShift = true;
            register_code(SI_QUOT);
        } else {
            // Pressed without shift: '/'
            pressedWithShift = false;
            // Register shift ('/' on slovenian keyboard is with shift)
            register_code(KC_LSFT);
            register_code(SI_7);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_QUOT);
        } else {
            unregister_code(SI_7);
            // Unregister shift back to default state
            unregister_code(KC_LSFT);
        }
    }

    return false; // Skip all further processing of this key
}

// '2'  '@'
static inline bool handle_keycode_2(keyrecord_t *record) {
    static bool pressedWithShift_L = false;
    static bool pressedWithShift_R = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '@'
            // Register Right Alt and unregister Shift
            // ('@' on slovenian keyboard is with Right Alt (Alt Gr) and without Shift)
            reg_alt_unreg_shift(&pressedWithShift_L, &pressedWithShift_R);
            register_code(SI_V);
        } else {
            // Pressed without shift: '2'
            pressedWithShift_L = false;
            pressedWithShift_R = false;
            register_code(SI_2);
        }
    } else {
        // Key released
        if((pressedWithShift_L == true) || (pressedWithShift_R == true)) {
            unregister_code(SI_V);

            // Unregister Right Alt back to default state and register pressed Shift
            unreg_alt_reg_shift(&pressedWithShift_L, &pressedWithShift_R);
        } else {
            unregister_code(SI_2);
        }
    }

    return false; // Skip all further processing of this key
}

// '6'  '^'
static inline bool handle_keycode_6(keyrecord_t *record) {
    static bool pressedWithShift_L = false;
    static bool pressedWithShift_R = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '^'

            // Host dependent
            if(fs_hostOs == KEYMAP_hostOs_WIN) {
                // Register Right Alt and unregister Shift
                // ('^' on slovenian keyboard is with Right Alt (Alt Gr) and without Shift)
                reg_alt_unreg_shift(&pressedWithShift_L, &pressedWithShift_R);
            } else {
                pressedWithShift_L = true;
                pressedWithShift_R = true;
                // Register Right Alt
                // ('^' on slovenian keyboard is with Right Alt (Alt Gr) and Shift)
                register_code(KC_RALT);
            }

            register_code(SI_3);
        } else {
            // Pressed without shift: '6'
            pressedWithShift_L = false;
            pressedWithShift_R = false;
            register_code(SI_6);
        }
    } else {
        // Key released
        if((pressedWithShift_L == true) || (pressedWithShift_R == true)) {
            unregister_code(SI_3);

            // Host dependent
            if(fs_hostOs == KEYMAP_hostOs_WIN) {
                // Unregister Right Alt back to default state and register pressed Shift
                unreg_alt_reg_shift(&pressedWithShift_L, &pressedWithShift_R);
            } else {
                // Unregister Right Alt back to default state
                unregister_code(KC_RALT);
            }
        } else {
            unregister_code(SI_6);
        }
    }

    return false; // Skip all further processing of this key
}

// '7'  '&'
static inline bool handle_keycode_7(keyrecord_t *record) {
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '&'
            pressedWithShift = true;
            register_code(SI_6);
        } else {
            // Pressed without shift: '7'
            pressedWithShift = false;
            register_code(SI_7);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_6);
        } else {
            unregister_code(SI_7);
        }
    }

    return false; // Skip all further processing of this key
}

// '8'  '*'
static inline bool handle_keycode_8(keyrecord_t *record) {
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '*'
            pressedWithShift = true;
            register_code(SI_PLUS);
        } else {
            // Pressed without shift: '8'
            pressedWithShift = false;
            register_code(SI_8);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_PLUS);
        } else {
            unregister_code(SI_8);
        }
    }

    return false; // Skip all further processing of this key
}

// '9'  '('
static inline bool handle_keycode_9(keyrecord_t *record) {
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '('
            pressedWithShift = true;
            register_code(SI_8);
        } else {
            // Pressed without shift: '9'
            pressedWithShift = false;
            register_code(SI_9);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_8);
        } else {
            unregister_code(SI_9);
        }
    }

    return false; // Skip all further processing of this key
}

// '0'  ')'
static inline bool handle_keycode_0(keyrecord_t *record) {
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: ')'
            pressedWithShift = true;
            register_code(SI_9);
        } else {
            // Pressed without shift: '0'
            pressedWithShift = false;
            register_code(SI_0);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_9);
        } else {
            unregister_code(SI_0);
        }
    }

    return false; // Skip all further processing of this key
}

// '€'  '°'
static inline bool handle_keycode_euro(keyrecord_t *record) {
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '°'
            pressedWithShift = true;
            // Register Right Alt ('°' on slovenian keyboard is with Right Alt (Alt Gr) and Shift)
            register_code(KC_RALT);
            register_code(SI_5);
        } else {
            // Pressed without shift: '€'
            pressedWithShift = false;
            // Register Right Alt ('€' on slovenian keyboard is with Right Alt (Alt Gr))
            register_code(KC_RALT);
            register_code(SI_E);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_5);
            unregister_code(KC_RALT);
        } else {
            unregister_code(SI_E);
            unregister_code(KC_RALT);
        }
    }

    return false; // Skip all further processing of this key
}

// '['  '{'
static inline bool handle_keycode_lbrc(keyrecord_t *record) {
    static bool pressedWithShift_L = false;
    static bool pressedWithShift_R = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '{'
            // Register Right Alt and unregister Shift
            // ('{' on slovenian keyboard is with Right Alt (Alt Gr) and without Shift)
            reg_alt_unreg_shift(&pressedWithShift_L, &pressedWithShift_R);
            register_code(SI_B);
        } else {
            // Pressed without shift: '['
            pressedWithShift_L = false;
            pressedWithShift_R = false;
            // Register Right Alt ('[' on slovenian keyboard is with Right Alt (Alt Gr))
            register_code(KC_RALT);
            register_code(SI_F);
        }
    } else {
        // Key released
        if((pressedWithShift_L == true) || (pressedWithShift_R == true)) {
            unregister_code(SI_B);

            // Unregister Right Alt back to default state and register pressed Shift
            unreg_alt_reg_shift(&pressedWithShift_L, &pressedWithShift_R);
        } else {
            unregister_code(SI_F);
            // Unregister Right Alt back to default state
            unregister_code(KC_RALT);

        }
    }

    return false; // Skip all further processing of this key
}

// ']'  '}'
static inline bool handle_keycode_rbrc(keyrecord_t *record) {
    static bool pressedWithShift_L = false;
    static bool pressedWithShift_R = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '}'
            // Register Right Alt and unregister Shift
            // ('}' on slovenian keyboard is with Right Alt (Alt Gr) and without Shift)
            reg_alt_unreg_shift(&pressedWithShift_L, &pressedWithShift_R);
            register_code(SI_N);
        } else {
            // Pressed without shift: ']'
            pressedWithShift_L = false;
            pressedWithShift_R = false;
            // Register Right Alt (']' on slovenian keyboard is with Right Alt (Alt Gr))
            register_code(KC_RALT);
            register_code(SI_G);
        }
    } else {
        // Key released
        if((pressedWithShift_L == true) || (pressedWithShift_R == true)) {
            unregister_code(SI_N);

            // Unregister Right Alt back to default state and register pressed Shift
            unreg_alt_reg_shift(&pressedWithShift_L, &pressedWithShift_R);
        } else {
            unregister_code(SI_G);
            // Unregister Right Alt back to default state
            unregister_code(KC_RALT);

        }
    }

    return false; // Skip all further processing of this key
}

// '`'  '~'
static inline bool handle_keycode_grv(keyrecord_t *record) {
    static bool pressedWithShift_L = false;
    static bool pressedWithShift_R = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '~'

            // Host dependent
            if(fs_hostOs == KEYMAP_hostOs_WIN) {
                // Register Right Alt
                // ('~' on slovenian keyboard is with Right Alt (Alt Gr) and without Shift)
                reg_alt_unreg_shift(&pressedWithShift_L, &pressedWithShift_R);
            } else {
                pressedWithShift_L = true;
                pressedWithShift_R = true;

                // Register Right Alt ('~' on slovenian keyboard is with Right Alt (Alt Gr) and Shift)
                register_code(KC_RALT);
            }

            register_code(SI_1);
        } else {
            // Pressed without shift: '`'
            pressedWithShift_L = false;
            pressedWithShift_R = false;
            if(fs_hostOs == KEYMAP_hostOs_WIN) {
                // '`' on slovenian keyboard is without Shift
            } else {
                // '`' on slovenian keyboard is with Shift
                register_code(KC_LSFT);
            }
            // Register Right Alt
            // ('`' on slovenian keyboard is with Right Alt (Alt Gr) and with/without Shift)
            register_code(KC_RALT);
            register_code(SI_7);
        }
    } else {
        // Key released
        if((pressedWithShift_L == true) || (pressedWithShift_R == true)) {
            unregister_code(SI_1);

            // Host dependent
            if(fs_hostOs == KEYMAP_hostOs_WIN) {
                // Unregister Right Alt back to default state and register pressed Shift
                unreg_alt_reg_shift(&pressedWithShift_L, &pressedWithShift_R);
            } else {
                // Unregister Right Alt back to default state
                unregister_code(KC_RALT);
            }
        } else {
            unregister_code(SI_7);
            // Unregister Right Alt and Shift back to default state
            unregister_code(KC_RALT);
            if(fs_hostOs == KEYMAP_hostOs_WIN) {
                // '`' on slovenian keyboard is without Shift
            } else {
                // '`' on slovenian keyboard is with Shift
                register_code(KC_LSFT);
                unregister_code(KC_LSFT);
            }
        }
    }

    return false; // Skip all further processing of this key
}

// '\'  '|'
static inline bool handle_keycode_bsls(keyrecord_t *record) {
    static bool pressedWithShift_L = false;
    static bool pressedWithShift_R = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '|'
            // Register Right Alt and unregister Shift
            // ('|' on slovenian keyboard is with Right Alt (Alt Gr) and without Shift)
            reg_alt_unreg_shift(&pressedWithShift_L, &pressedWithShift_R);
            register_code(SI_W);
        } else {
            // Pressed without shift: '\'
            pressedWithShift_L = false;
            pressedWithShift_R = false;
            // Register Right Alt ('\' on slovenian keyboard is with Right Alt (Alt Gr))
            register_code(KC_RALT);
            register_code(SI_Q);
        }
    } else {
        // Key released
        if((pressedWithShift_L == true) || (pressedWithShift_R == true)) {
            unregister_code(SI_W);

            // Unregister Right Alt back to default state and register pressed Shift
            unreg_alt_reg_shift(&pressedWithShift_L, &pressedWithShift_R);
        } else {
            unregister_code(SI_Q);
            // Unregister Right Alt back to default state
            unregister_code(KC_RALT);

        }
    }

    return false; // Skip all further processing of this key
}

static void reg_alt_unreg_shift(bool *inPressedWithShift_L, bool *inPressedWithShift_R) {
    // Register Right Alt
    register_code(KC_RALT);

    // Unregister specifit Shift
    if(get_mods() & MODS_L_SHIFT_MASK) {
        *inPressedWithShift_L = true;
        unregister_code(KC_LSFT);
    }
    if(get_mods() & MODS_R_SHIFT_MASK) {
        *inPressedWithShift_R = true;
        unregister_code(KC_RSFT);
    }
}

static void unreg_alt_reg_shift(bool *inPressedWithShift_L, bool *inPressedWithShift_R) {
    // Unregister Right Alt back to default state
    unregister_code(KC_RALT);

    if(*inPressedWithShift_L == true) {
        // Register Left Shift back
        register_code(KC_LSFT);
    }
    if(*inPressedWithShift_R == true) {
        // Register Right Shift back
        register_code(KC_RSFT);
    }
}
