#include QMK_KEYBOARD_H

#define KC_MO1 MO(1)
/*
 * HHKB Layout
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Esc │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │  \  │  `  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ Tab │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │BkSpc│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Ctrl │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │ Fn3 │  '  │▒▒▒▒▒│Enter│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Shift│▒▒▒▒▒│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │▒▒▒▒▒│Shift│ Fn  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│▒▒▒▒▒│ Gui │ Alt │█████│█████│█████│Space│█████│█████│█████│▒▒▒▒▒│ Alt │ Gui │▒▒▒▒▒│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
    LAYOUT_60_hhkb(
        KC_ESC,    KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0, KC_MINS,    KC_EQL, KC_BSLS, KC_GRV, \
        KC_TAB,    KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P, KC_LBRC,    KC_RBRC, KC_BSPC,      \
        KC_LCTL,   KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,      \
        KC_LSFT,   KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_MO1, \
        KC_LALT,   KC_LGUI,                        KC_SPC,                                    KC_RGUI, KC_RALT   ),
    /* 1: HHKB Fn layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ BLT │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │ Ins │ Del │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Caps │     │     │ Up  │     │     │     │     │ Psc │ Slk │ Pus │ Up  │     │     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │Left │Down │Right│     │NP_* │NP_/ │Home │PgUp │Left │Right│▒▒▒▒▒│NPEnt│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │▒▒▒▒▒│     │     │     │     │     │NP_+ │NP_- │ End │PgDwn│Down │▒▒▒▒▒│     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│▒▒▒▒▒│     │     │█████│█████│█████│     │█████│█████│█████│▒▒▒▒▒│     │     │▒▒▒▒▒│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
    LAYOUT_60_hhkb(
       BL_TOGG,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL, \
       KC_CAPS, _______, _______,   KC_UP, _______, _______, _______, _______, KC_PSCR, KC_SCRL, KC_PAUS,   KC_UP, _______, _______, \
       _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_PENT,  \
       _______, BL_TOGG, RGB_TOG, _______, _______, _______, KC_PPLS, KC_PMNS,  KC_END, KC_PGDN, KC_DOWN, _______,   _______,  \
       _______, _______,                   _______,                   _______, _______),
};

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_RED);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
