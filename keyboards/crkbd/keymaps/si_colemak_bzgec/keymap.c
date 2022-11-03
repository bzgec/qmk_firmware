/***************************************************************************************************
 * Slovenian Colemak variation
 ***************************************************************************************************
 *
 ***************************************************************************************************
 *  Layer 0:
 ***************************************************************************************************
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  |  TAB   |  q  Q  |  w  W  |  f  F  |  p  P  |  b  B  |             |  j  J  |  l  L  |  u  U  |  y  Y  |  ;  :  |  =  +  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  |  MO(2) |  a  A  |  r  R  |  s  S  |  t  T  |  g  G  |             |  m  M  |  n  N  |  e  E  |  i  I  |  o  O  |  '  "  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | Shift  |  z  Z  |  x  X  |  c  C  |  d  D  |  v  V  |             |  k  K  |  h  H  |  ,  <  |  .  >  |  /  ?  | Shift  |
 *  +--------+--------+--------+----+---+----+---+----+---+----+   +----+---+----+---+----+---+----+--------+--------+--------+
 *                                  |  Win   |  Ctrl  | Space  |   | Enter  | MO(1)  | Alt    |
 *                                  +--------+--------+--------+   +--------+--------+--------+
 *
 ***************************************************************************************************
 *  Layer 1:
 ***************************************************************************************************
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  |  TAB   |  1  !  |  2  @  |  3  #  |  4  $  |  5  %  |             |  6  ^  |  7  &  |  8  *  |  9  (  |  0  )  |  -  _  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  |  MO(2) |        |        |  š  Š  |        |        |             |        |        |  €  °  |  [  {  |  ]  }  |  `  ~  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | Shift  |  ž  Ž  |        |  č  Č  |        |        |             |        |        |        |        |  \  |  | Shift  |
 *  +--------+--------+--------+----+---+----+---+----+---+----+   +----+---+----+---+----+---+----+--------+--------+--------+
 *                                  |  Win   |  Ctrl  | Space  |   | Enter  | MO(1)  | Alt    |
 *                                  +--------+--------+--------+   +--------+--------+--------+
 *
 ***************************************************************************************************
 *  Layer 2:
 ***************************************************************************************************
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  |  TAB   |  ESC   |  WhUp  | GoBack |  GoFwd |        |             |  Home  |  PgDn  |  PgUp  |  End   |  Del   | Print  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  |  MO(2) |  Back  | WhDown | Shift  |  Ctrl  |  Alt   |             |  Left  |  Down  |  Up    | Right  |  Back  |  ESC   |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  |  Shift |        |  Cut   |  Copy  |        | Paste  |             |  Undo  |  Redo  |        |        |        |  Shift |
 *  +--------+--------+--------+----+---+----+---+----+---+----+   +----+---+----+---+----+---+----+--------+--------+--------+
 *                                  |  Win   |  Ctrl  |  Space |   | Enter  | MO(1)  | Alt    |
 *                                  +--------+--------+--------+   +--------+--------+--------+
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

#define MODS_L_SHIFT_MASK  MOD_BIT(KC_LSHIFT)
#define MODS_R_SHIFT_MASK  MOD_BIT(KC_RSHIFT)
#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))
#define MODS_CTRL_MASK   (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTRL))
#define MODS_ALT_MASK    (MOD_BIT(KC_LALT) | MOD_BIT(KC_RALT))

typedef enum SI_COLEMAK_keycodes_ENUM {
  _COMM = SAFE_RANGE,  // ','  '<'
  _DOT,                // '.'  '>'
  _SCLN,               // ';'  ':'
  _EQL,                // '='  '+'
  _QUOT,               // '''  '"'
  _SLSH,               // '/'  '?'
  _2,                  // '2'  '@'
  _6,                  // '6'  '^'
  _7,                  // '7'  '&'
  _8,                  // '8'  '*'
  _9,                  // '9'  '('
  _0,                  // '0'  ')'
  _EURO,               // '€'  '°'
  _LBRC,               // '['  '{'
  _RBRC,               // ']'  '}'
  _GRV,                // '`'  '~'
  _BSLS,               // '\'  '|'
} SI_COLEMAK_keycodes_E;


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,   SI_Q,     SI_W,     SI_F,     SI_P,     SI_B,          SI_J,     SI_L,     SI_U,     SI_Y,     _SCLN,    _EQL,
        MO(2),    SI_A,     SI_R,     SI_S,     SI_T,     SI_G,          SI_M,     SI_N,     SI_E,     SI_I,     SI_O,     _QUOT,
        KC_LSFT,  SI_Z,     SI_X,     SI_C,     SI_D,     SI_V,          SI_K,     SI_H,     _COMM,    _DOT,     _SLSH,    KC_RSFT,
                                      KC_LWIN,  KC_LCTL,  KC_SPC,        KC_ENT,   MO(1),    KC_RALT
    ),
    [1] = LAYOUT_split_3x6_3(
        _______,  SI_1,     _2,       SI_3,     SI_4,     SI_5,          _6,       _7,       _8,       _9,       _0,       SI_MINS,
        _______,  KC_NO,    KC_NO,    SI_SCAR,  KC_NO,    KC_NO,         KC_NO,    KC_NO,    _EURO,    _LBRC,    _RBRC,    _GRV,
        _______,  SI_ZCAR,  KC_NO,    SI_CCAR,  KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    _BSLS,    _______,
                                      _______,  _______,  _______,       _______,  _______,  _______
    ),
    [2] = LAYOUT_split_3x6_3(
        _______,  KC_ESC,   KC_WH_U,  KC_WBAK,  KC_WFWD,  KC_NO,         KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   KC_DEL,   KC_PSCR,
        _______,  KC_BSPC,  KC_WH_D,  KC_LSFT,  KC_LCTL,  KC_LALT,       KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_BSPC,  KC_ESC,
        _______,  KC_NO,    KC_CUT,   KC_COPY,  KC_NO,    KC_PSTE,       KC_UNDO,  KC_AGIN,  KC_NO,    KC_NO,    KC_NO,    _______,
                                      _______,  _______,  KC_ENT,        KC_ENT,   _______,  _______
    ),
    // clang-format on
};

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
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '^'
            pressedWithShift = true;
            // Register Right Alt ('^' on slovenian keyboard is with Right Alt (Alt Gr) and Shift)
            register_code(KC_RALT);
            register_code(SI_3);
        } else {
            // Pressed without shift: '6'
            pressedWithShift = false;
            register_code(SI_6);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_3);
            // Unregister Right Alt back to default state
            unregister_code(KC_RALT);
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
    static bool pressedWithShift = false;

    if(record->event.pressed) {
        // Key pressed
        if(get_mods() & MODS_SHIFT_MASK ) {
            // Pressed with shift: '~'
            pressedWithShift = true;
            // Register Right Alt ('~' on slovenian keyboard is with Right Alt (Alt Gr) and Shift)
            register_code(KC_RALT);
            register_code(SI_1);
        } else {
            // Pressed without shift: '`'
            pressedWithShift = false;
            // Register Right Alt ('`' on slovenian keyboard is with Right Alt (Alt Gr) and Shift)
            register_code(KC_LSFT);
            register_code(KC_RALT);
            register_code(SI_7);
        }
    } else {
        // Key released
        if(pressedWithShift == true) {
            unregister_code(SI_1);
            // Unregister Right Alt back to default state
            unregister_code(KC_RALT);
        } else {
            unregister_code(SI_7);
            // Unregister Right Alt and Shift back to default state
            unregister_code(KC_RALT);
            unregister_code(KC_LSFT);
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
