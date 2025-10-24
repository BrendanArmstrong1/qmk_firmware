// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

/* clang-format off */
enum ferris_layers {
  _DVORAK,
  _SYMBOL,
  _MATH,
  _SPECIAL,
  _FUNC,
  _GAMING,
  _SYMBOL2,
  _MATH2,
  _SPECIAL2,
  _FUNC2
};

enum ferris_tap_dances {
  TD_Q_ESC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DVORAK] = LAYOUT( /* DVORAK */
        KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,                               KC_F,    KC_G,        KC_C,    KC_R, KC_L,
           KC_A,    KC_O,   KC_E, KC_U, KC_I,                               KC_D,    KC_H,        KC_T,    KC_N, KC_S,
         OSL(2),    KC_Q,   KC_J, KC_K, KC_X,                               KC_B,    KC_M,        KC_W,    KC_V, KC_Z,
               KC_LALT, OSM(MOD_LSFT), MO(1),                             KC_SPC, KC_LCTL, KC_LGUI
  ),

  [_SYMBOL] = LAYOUT( /* [> SYMBOL <] */
     KC_GRV,   KC_LT,   KC_GT, KC_SCLN,  KC_PLUS,          KC_MINS, KC_LBRC,   KC_AT, KC_RBRC, KC_BSPC,
     KC_ESC, KC_SLSH, KC_CIRC, KC_ASTR,  KC_QUES,           KC_ENT, KC_LCBR,  KC_DLR, KC_RCBR, KC_BSLS,
    KC_COLN, KC_UNDS, KC_HASH, KC_DLR,   KC_PIPE,           KC_EQL, KC_LPRN, KC_TILD, KC_RPRN, KC_EXLM,
            MT(MOD_LALT, KC_DEL), OSM(MOD_LSFT), KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_MATH] = LAYOUT( /* [> MATH <] */
            MO(_SPECIAL), KC_COMM,  KC_DOT, KC_SCLN, KC_PLUS,         KC_MINS, KC_1, KC_2, KC_3, KC_BSPC,
     LSFT(KC_INS), KC_SLSH, KC_CIRC, KC_ASTR,  KC_TAB,          KC_ENT, KC_4, KC_5, KC_6,    KC_0,
          KC_TRNS, KC_PERC, KC_HASH, KC_AMPR, KC_PIPE,          KC_EQL, KC_7, KC_8, KC_9, KC_EXLM,
            MT(MOD_LALT, KC_DEL), OSM(MOD_LSFT),  KC_DLR,           KC_TRNS, KC_TRNS,  KC_TRNS
  ),

  [_SPECIAL] = LAYOUT( /* [> SPECIAL <] */
    KC_TRNS, KC_LEFT,    KC_DOWN,        KC_UP, KC_RIGHT,                   KC_DEL, DM_REC1, DM_PLY1, KC_BTN2, KC_WH_U,
      MO(_FUNC),   KC_NO, LCTL(KC_C), LSFT(KC_INS), LCTL(KC_V),                KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN1,
    KC_TRNS,   KC_NO,      KC_NO,   LCTL(KC_A), KC_NO,                     KC_WH_D, DM_REC2, DM_PLY2, KC_WH_R, KC_ACL0,
            KC_PSCR, KC_CAPS, KC_LCTL,                                              KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_FUNC] = LAYOUT( /* [> FUNCTION <] */
    KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, DF(_DVORAK),                  KC_F1,  KC_F2,  KC_F3,  KC_F4, KC_F5,
    KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, DF(_GAMING),                  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10,
    KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                  KC_F11, KC_F12, KC_F13, KC_F14, KC_F15,
            KC_LALT, KC_CAPS, KC_PSCR,                           KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [_GAMING] = LAYOUT( /* [> FUNCTION <] */
             KC_QUOT,       KC_COMM,       KC_DOT,   KC_P,    KC_Y,   KC_F, KC_G, KC_C, KC_R, KC_L,
                KC_A,          KC_O,         KC_E,   KC_U,    KC_I,   KC_D, KC_H, KC_T, KC_N, KC_S,
         OSL(_MATH2),          KC_Q,         KC_J,   KC_K,    KC_X,   KC_B, KC_M, KC_W, KC_V, KC_Z,
                KC_LALT, OSM(MOD_LSFT), MO(_SYMBOL2), KC_SPC, KC_LCTL, KC_LGUI
  ),
  [_SYMBOL2] = LAYOUT( /* [> SYMBOL <] */
        KC_GRV,   KC_LT,   KC_GT,       KC_SCLN,       KC_PLUS, KC_MINS, KC_LBRC,   KC_AT, KC_RBRC, KC_BSPC,
        KC_ESC, KC_LCTL, KC_LSFT, KC_LALT, KC_QUES,  KC_ENT, KC_LCBR, KC_DLR, KC_RCBR, KC_BSLS,
        KC_COLN, KC_UNDS, KC_ENT,        KC_DLR,       KC_PIPE,  KC_EQL, KC_LPRN, KC_TILD, KC_RPRN, KC_EXLM,
        MT(MOD_LALT, KC_DEL), OSM(MOD_LSFT),       KC_TRNS,       KC_TRNS, KC_TRNS,  KC_TRNS
  ),

  [_MATH2] = LAYOUT( /* [> MATH <] */
            MO(_SPECIAL2), KC_COMM,  KC_DOT, KC_SCLN, KC_PLUS,         KC_MINS, KC_1, KC_2, KC_3, KC_BSPC,
     LSFT(KC_INS), KC_SLSH, KC_CIRC, KC_ASTR,  KC_TAB,          KC_ENT, KC_4, KC_5, KC_6,    KC_0,
          KC_TRNS, KC_PERC, KC_HASH, KC_AMPR, KC_PIPE,          KC_EQL, KC_7, KC_8, KC_9, KC_EXLM,
            MT(MOD_LALT, KC_DEL), OSM(MOD_LSFT),  KC_DLR,           KC_TRNS, KC_TRNS,  KC_TRNS
  ),

  [_SPECIAL2] = LAYOUT( /* [> SPECIAL <] */
    KC_TRNS, KC_LEFT,    KC_DOWN,        KC_UP, KC_RIGHT,                   KC_DEL, DM_REC1, DM_PLY1, KC_BTN2, KC_WH_U,
      MO(_FUNC2),   KC_NO, LCTL(KC_C), LSFT(KC_INS), LCTL(KC_V),                KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN1,
    KC_TRNS,   KC_NO,      KC_NO,   LCTL(KC_A), KC_NO,                     KC_WH_D, DM_REC2, DM_PLY2, KC_WH_R, KC_ACL0,
            KC_PSCR, KC_CAPS, KC_LCTL,                                              KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_FUNC2] = LAYOUT( /* [> FUNCTION <] */
    KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, DF(_DVORAK),                  KC_F1,  KC_F2,  KC_F3,  KC_F4, KC_F5,
    KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, DF(_GAMING),                  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10,
    KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                  KC_F11, KC_F12, KC_F13, KC_F14, KC_F15,
            KC_LALT, KC_CAPS, KC_PSCR,                           KC_TRNS, KC_TRNS, KC_TRNS
  )
};
/* clang-format on */
