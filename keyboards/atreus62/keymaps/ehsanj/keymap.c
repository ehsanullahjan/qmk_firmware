#include QMK_KEYBOARD_H

#define _______     KC_TRNS
#define XXXXXXX     KC_NO

#define COLEMAK     0
#define QWERTY      1
#define FLAYOUT     2
#define FKEYS       3
#define NKEYS       4
#define MOUSE       5
#define NUMPAD      6
#define FN          7
#define PROGRAM     8

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [COLEMAK] = LAYOUT(
    KC_ESC,             KC_1,         KC_2,        KC_3,             KC_4,             KC_5,                                                  KC_6,            KC_7,             KC_8,             KC_9,     KC_0,     TG(NUMPAD),
    KC_EQL,             KC_Q,         KC_W,        KC_F,             KC_P,             KC_G,                                                  KC_J,            KC_L,             KC_U,             KC_Y,     KC_SCLN,  KC_MINS,
    LT(FKEYS, KC_GRV),  KC_A,         KC_R,        KC_S,             KC_T,             KC_D,                                                  KC_H,            KC_N,             KC_E,             KC_I,     KC_O,     LT(FKEYS, KC_QUOT),
    LSFT_T(KC_DEL),     KC_Z,         KC_X,        KC_C,             KC_V,             KC_B,                                                  KC_K,            KC_M,             KC_COMM,          KC_DOT,   KC_SLSH,  RSFT_T(KC_ESC),
    TG(FLAYOUT),        CW_TOGG,      KC_BSLS,     LCTL_T(KC_LEFT),  LALT_T(KC_RGHT),  LSFT_T(KC_BSPC),  LGUI_T(KC_TAB),   RGUI_T(KC_ENTER),  RSFT_T(KC_SPC),  RALT_T(KC_UP),    RCTL_T(KC_DOWN),  KC_LBRC,  KC_RBRC,  TG(MOUSE)
  ),

  [QWERTY] = LAYOUT(
    _______,            _______,      _______,     _______,          _______,          _______,                                               _______,         _______,          _______,          _______,  _______,  _______,
    _______,            _______,      _______,     KC_E,             KC_R,             KC_T,                                                  KC_Y,            KC_U,             KC_I,             KC_O,     KC_P,     _______,
    _______,            _______,      KC_S,        KC_D,             KC_F,             KC_G,                                                  _______,         KC_J,             KC_K,             KC_L,     KC_SCLN,  _______,
    _______,            _______,      _______,     _______,          _______,          _______,                                               KC_N,            _______,          _______,          _______,  _______,  _______,
    _______,            _______,      _______,     _______,          _______,          _______,          _______,          _______,           _______,         _______,          _______,          _______,  _______,  _______
  ),

  [FLAYOUT] = LAYOUT(
    _______,            KC_F1,        KC_F2,       KC_F3,            KC_F4,            KC_F5,                                                 KC_F6,           KC_F7,            KC_F8,            KC_F9,    KC_F10,   _______,
    _______,            _______,      _______,     _______,          _______,          _______,                                               _______,         _______,          _______,          _______,  _______,  _______,
    LT(NKEYS, KC_GRV),  _______,      _______,     _______,          _______,          _______,                                               _______,         _______,          _______,          _______,  _______,  LT(NKEYS, KC_QUOT),
    _______,            _______,      _______,     _______,          _______,          _______,                                               _______,         _______,          _______,          _______,  _______,  _______,
    _______,            _______,      _______,     _______,          _______,          _______,          _______,          _______,           _______,         _______,          _______,          _______,  _______,  _______
  ),

  [FKEYS] = LAYOUT(
    _______,            KC_F1,        KC_F2,       KC_F3,            KC_F4,            KC_F5,                                                 KC_F6,           KC_F7,            KC_F8,            KC_F9,    KC_F10,   TO(PROGRAM),
    _______,            _______,      KC_MUTE,     KC_VOLD,          KC_VOLU,          _______,                                               _______,         _______,          KC_UP,            _______,  _______,  _______,
    _______,            _______,      KC_MRWD,     KC_MPLY,          KC_MFFD,          _______,                                               _______,         KC_LEFT,          KC_DOWN,          KC_RGHT,  _______,  _______,
    _______,            _______,      _______,     _______,          _______,          _______,                                               _______,         _______,          _______,          _______,  _______,  _______,
    _______,            _______,      _______,     _______,          _______,          _______,          _______,          _______,           _______,         _______,          _______,          KC_F11,   KC_F12,   _______
  ),

  [NKEYS] = LAYOUT(
    _______,            KC_1,         KC_2,        KC_3,             KC_4,             KC_5,                                                  KC_6,            KC_7,             KC_8,             KC_9,     KC_0,     TO(PROGRAM),
    _______,            _______,      KC_MUTE,     KC_VOLD,          KC_VOLU,          _______,                                               _______,         _______,          KC_UP,            _______,  _______,  _______,
    _______,            _______,      KC_MRWD,     KC_MPLY,          KC_MFFD,          _______,                                               _______,         KC_LEFT,          KC_DOWN,          KC_RGHT,  _______,  _______,
    _______,            _______,      _______,     _______,          _______,          _______,                                               _______,         _______,          _______,          _______,  _______,  _______,
    _______,            _______,      _______,     _______,          _______,          _______,          _______,          _______,           _______,         _______,          _______,          KC_F11,   KC_F12,   _______
  ),

  [MOUSE] = LAYOUT(
    _______,            _______,      _______,     _______,          _______,          _______,                                               _______,         _______,          _______,          _______,  _______,  _______,
    _______,            _______,      _______,     KC_WH_U,          _______,          _______,                                               _______,         _______,          KC_MS_U,          _______,  _______,  _______,
    _______,            _______,      KC_WH_L,     KC_WH_D,          KC_WH_R,          _______,                                               _______,         KC_MS_L,          KC_MS_D,          KC_MS_R,  _______,  _______,
    _______,            _______,      _______,     _______,          _______,          _______,                                               _______,         _______,          _______,          _______,  _______,  _______,
    _______,            _______,      _______,     _______,          _______,          KC_ACL0,          KC_BTN1,          KC_BTN2,           KC_BTN1,         _______,          _______,          _______,  _______,  _______
  ),

  [NUMPAD] = LAYOUT(
    _______,            _______,      _______,     _______,          _______,          _______,                                               _______,         _______,          _______,           _______,  _______,  _______,
    _______,            _______,      _______,     KC_UP,            _______,          _______,                                               _______,         KC_P7,            KC_P8,             KC_P9,    KC_PMNS,  _______,
    _______,            _______,      KC_LEFT,     KC_DOWN,          KC_RGHT,          _______,                                               KC_BSPC,         KC_P4,            KC_P5,             KC_P6,    KC_PPLS,  _______,
    _______,            _______,      _______,     _______,          _______,          _______,                                               _______,         KC_P1,            KC_P2,             KC_P3,    KC_PSLS,  _______,
    _______,            _______,      _______,     _______,          _______,          LSFT_T(KC_BSPC),  LGUI_T(KC_TAB),   RGUI_T(KC_ENTER),  RSFT_T(KC_SPC),  RALT_T(KC_PEQL),  RCTL_T(KC_P0),     KC_PDOT,  KC_PAST,  _______
  ),

  [PROGRAM] = LAYOUT(
    XXXXXXX,            TO(COLEMAK),  TO(QWERTY),  XXXXXXX,          XXXXXXX,          EE_CLR,                                                QK_BOOT,         XXXXXXX,          XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,            XXXXXXX,      XXXXXXX,     XXXXXXX,          XXXXXXX,          XXXXXXX,                                               XXXXXXX,         XXXXXXX,          XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,            XXXXXXX,      XXXXXXX,     XXXXXXX,          XXXXXXX,          XXXXXXX,                                               XXXXXXX,         XXXXXXX,          XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,            XXXXXXX,      XXXXXXX,     XXXXXXX,          XXXXXXX,          XXXXXXX,                                               XXXXXXX,         XXXXXXX,          XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,            XXXXXXX,      XXXXXXX,     XXXXXXX,          XXXXXXX,          XXXXXXX,          XXXXXXX,          XXXXXXX,           XXXXXXX,         XXXXXXX,          XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX
  )
};
