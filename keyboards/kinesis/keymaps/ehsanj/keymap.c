#include QMK_KEYBOARD_H

#define COLEMAK     0
#define QWERTY      1
#define FKEYS       2
#define MOUSE       3
#define NUMPAD      4
#define FN          5
#define PROGRAM     6

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [COLEMAK] = LAYOUT(
        // left hand
        KC_ESC,             KC_F1,                  KC_F2,                  KC_F3,              KC_F4,                  KC_F5,              KC_F6,      KC_F7,      KC_F8,
        TG(FKEYS),          KC_1,                   KC_2,                   KC_3,               KC_4,                   KC_5,
        KC_EQL,             KC_Q,                   KC_W,                   KC_F,               KC_P,                   KC_G,
        KC_GRV,             KC_A,                   KC_R,                   KC_S,               KC_T,                   KC_D,
        LSFT_T(KC_CAPS),    KC_Z,                   KC_X,                   KC_C,               KC_V,                   KC_B,
                            LSFT(LGUI(KC_LBRC)),    LSFT(LGUI(KC_RBRC)),    LALT_T(KC_LEFT),    LGUI_T(KC_RGHT),
        // left thumb
                                                    LGUI_T(KC_DEL),         LALT_T(KC_F11),
                                                                            LCTL_T(KC_HOME),
                            LSFT_T(KC_BSPC),        LT(NUMPAD,KC_TAB),      LT(FN,KC_END),

        // right hand
        KC_F9,              KC_F10,                 KC_F11,                 KC_F12,             KC_PSCR,                KC_SLCK,            KC_PAUS,    TG(NUMPAD), MO(PROGRAM),
        KC_6,               KC_7,                   KC_8,                   KC_9,               KC_0,                   TG(MOUSE),
        KC_J,               KC_L,                   KC_U,                   KC_Y,               KC_SCLN,                KC_MINS,
        KC_H,               KC_N,                   KC_E,                   KC_I,               KC_O,                   KC_QUOT,
        KC_K,               KC_M,                   KC_COMM,                KC_DOT,             KC_SLSH,                RSFT_T(KC_BSLS),
                            RGUI_T(KC_UP),          RALT_T(KC_DOWN),        KC_LBRC,            KC_RBRC,
        // right thumb
                                                    RALT_T(KC_F12),         RGUI_T(KC_ESC),
                                                    RCTL_T(KC_PGUP),
                                                    LT(FN,KC_PGDN),         LT(NUMPAD,KC_ENT),  RSFT_T(KC_SPC)
    ),

    [QWERTY] = LAYOUT(
        // left hand
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,            KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_E,               KC_R,                   KC_T,
        KC_TRNS,            KC_TRNS,                KC_S,                   KC_D,               KC_F,                   KC_G,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
                            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,
        // left thumb
                                                    KC_TRNS,                KC_TRNS,
                                                                            KC_TRNS,
                            KC_TRNS,                KC_TRNS,                KC_TRNS,

        // right hand
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,            KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_Y,               KC_U,                   KC_I,                   KC_O,               KC_P,                   KC_TRNS,
        KC_TRNS,            KC_J,                   KC_K,                   KC_L,               KC_SCLN,                KC_TRNS,
        KC_N,               KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
                            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,
        // right thumb
                                                    KC_TRNS,                KC_TRNS,
                                                    KC_TRNS,
                                                    KC_TRNS,                KC_TRNS,            KC_TRNS
    ),

    [FKEYS] = LAYOUT(
        // left hand
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,            KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,            KC_F1,                  KC_F2,                  KC_F3,              KC_F4,                  KC_F5,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
                            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,
        // left thumb
                                                    KC_TRNS,                KC_TRNS,
                                                                            KC_TRNS,
                            KC_TRNS,                KC_TRNS,                KC_TRNS,

        // right hand
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,            KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_F6,              KC_F7,                  KC_F8,                  KC_F9,              KC_F10,                 KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
                            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,
        // right thumb
                                                    KC_TRNS,                KC_TRNS,
                                                    KC_TRNS,
                                                    KC_TRNS,                KC_TRNS,            KC_TRNS
    ),

    [MOUSE] = LAYOUT(
        // left hand
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,           KC_TRNS,     KC_TRNS,    KC_TRNS,
        TO(FKEYS),          KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_WH_U,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_WH_L,                KC_WH_D,            KC_WH_R,                KC_TRNS,
        KC_LSFT,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
                            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,
        // left thumb
                                                    KC_TRNS,                KC_TRNS,
                                                                            KC_TRNS,
                            KC_ACL1,                KC_ACL0,                KC_TRNS,

        // right hand
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,            KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_MS_U,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_MS_L,                KC_MS_D,                KC_MS_R,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_RSFT,
                            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,
        // right thumb
                                                    KC_TRNS,                KC_TRNS,
                                                    KC_TRNS,
                                                    KC_TRNS,                KC_BTN2,            KC_BTN1
    ),

    [NUMPAD] = LAYOUT(
        // left hand
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,            KC_TRNS,    KC_TRNS,    KC_TRNS,
        TO(FKEYS),          KC_F1,                  KC_F2,                  KC_F3,              KC_F4,                  KC_F5,
        KC_TRNS,            KC_TRNS,                LSFT(LGUI(KC_LBRC)),    KC_UP,              LSFT(LGUI(KC_RBRC)),    KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_LEFT,                KC_DOWN,            KC_RGHT,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
                            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,
        // left thumb
                                                    KC_TRNS,                KC_TRNS,
                                                                            KC_TRNS,
                            LSFT_T(KC_BSPC),        LT(NUMPAD,KC_TAB),      KC_TRNS,

        // right hand
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,            KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_F6,              KC_F7,                  KC_F8,                  KC_F9,              KC_F10,                 TO(MOUSE),
        KC_NLCK,            KC_P7,                  KC_P8,                  KC_P9,              KC_PMNS,                KC_TRNS,
        KC_BSPC,            KC_P4,                  KC_P5,                  KC_P6,              KC_PPLS,                KC_TRNS,
        KC_TRNS,            KC_P1,                  KC_P2,                  KC_P3,              KC_PSLS,                KC_TRNS,
                            KC_PEQL,                KC_P0,                  KC_PDOT,            KC_PAST,
        // right thumb
                                                    KC_TRNS,                KC_TRNS,
                                                    KC_TRNS,
                                                    KC_TRNS,                LT(NUMPAD,KC_ENT),  RSFT_T(KC_SPC)
    ),

    [FN] = LAYOUT(
        // left hand
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,            KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,            KC_EXLM,                KC_AT,                  KC_HASH,            KC_DLR,                 KC_PERC,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_GRV,             KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_LSFT,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
                            KC_TRNS,                KC_TRNS,                KC_LEFT,            KC_RGHT,
        // left thumb
                                                    KC_DEL,                 KC_LALT,
                                                                            KC_LCTL,
                            KC_BSPC,                KC_TAB,                 KC_TRNS,

        // right hand
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_MUTE,                KC_VOLD,            KC_VOLU,    KC_TRNS,    KC_TRNS,
        KC_CIRC,            KC_AMPR,                KC_ASTR,                KC_LPRN,            KC_RPRN,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_TRNS,
        KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,                KC_BSLS,
                            KC_UP,                  KC_DOWN,                KC_TRNS,            KC_TRNS,
        // right thumb
                                                    KC_RALT,                KC_LGUI,
                                                    KC_RCTL,
                                                    KC_TRNS,                KC_ENT,             KC_SPC
    ),

    [PROGRAM] = LAYOUT(
        // left hand
        TO(COLEMAK),        KC_NO,                  KC_NO,                  TO(QWERTY),         KC_NO,                  KC_NO,              KC_NO,      KC_NO,      EEP_RST,
        KC_NO,              KC_NO,                  KC_NO,                  KC_NO,              KC_NO,                  KC_NO,
        KC_NO,              KC_NO,                  KC_NO,                  KC_NO,              KC_NO,                  KC_NO,
        KC_NO,              KC_NO,                  KC_NO,                  KC_NO,              KC_NO,                  KC_NO,
        KC_NO,              KC_NO,                  KC_NO,                  KC_NO,              KC_NO,                  KC_NO,
                            KC_NO,                  KC_NO,                  KC_NO,              KC_NO,
        // left thumb
                                                    KC_NO,                  KC_NO,
                                                                            KC_NO,
                            KC_NO,                  KC_NO,                  KC_NO,

        // right hand
        RESET,              KC_NO,                  KC_NO,                  KC_NO,              KC_NO,                  KC_NO,              KC_NO,      KC_NO,      KC_NO,
        KC_NO,              KC_NO,                  KC_NO,                  KC_NO,              KC_NO,                  KC_NO,
        KC_NO,              KC_NO,                  KC_NO,                  KC_NO,              KC_NO,                  KC_NO,
        KC_NO,              KC_NO,                  KC_NO,                  KC_NO,              KC_NO,                  KC_NO,
        KC_NO,              KC_NO,                  KC_NO,                  KC_NO,              KC_NO,                  KC_NO,
                            KC_NO,                  KC_NO,                  KC_NO,              KC_NO,
        // right thumb
                                                    KC_NO,                  KC_NO,
                                                    KC_NO,
                                                    KC_NO,                  KC_NO,              KC_NO
    )
};
