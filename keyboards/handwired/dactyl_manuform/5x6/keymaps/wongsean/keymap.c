#include QMK_KEYBOARD_H

enum LAYERS {
    _QWERTY,
    _NAV,
    _SYM,
    _RST
};

// Shortcuts MacOS
#define UNDO LGUI(KC_Z)
#define REDO SGUI(KC_Z)
#define CUT  LGUI(KC_X)
#define COPY LGUI(KC_C)
#define PSTE LGUI(KC_V)

// Word navigation
#define WD_LEFT LALT(KC_LEFT)
#define WD_RGHT LALT(KC_RGHT)

// Layer keys
#define NAV MO(_NAV)
#define SYM MO(_SYM)
#define RST MO(_RST)

// Layer tap keys
#define SYM_SPC LT(_SYM, KC_SPC)
#define NAV_ENT LT(_NAV, KC_ENT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_ESC ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                        KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_PSCR,
        KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                        KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,_______,
        KC_CAPS,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                        KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,_______,
        _______,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,                        KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,_______,
                        KC_LCTL,KC_LALT,                                                        KC_RALT,KC_RCTL,
                                            SYM_SPC,KC_LGUI,                KC_BSPC,NAV_ENT,
                                            KC_LGUI,KC_LSFT,                KC_RSFT,KC_RGUI,
                                            KC_NO  ,KC_LCTL,                KC_RCTL,KC_NO
    ),

    [_NAV] = LAYOUT_5x6(
        KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,                        KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,
        _______,_______,KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,                        KC_HOME,KC_PGDN,KC_PGUP,KC_END ,_______,_______,
        _______,_______,KC_MINS,KC_EQL ,KC_LBRC,KC_RBRC,                        KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,_______,
        _______,_______,_______,_______,_______,_______,                        WD_LEFT,_______,_______,WD_RGHT,_______,_______,
                        _______,_______,                                                        _______,_______,
                                            RST    ,_______,                _______,_______,
                                            _______,_______,                _______,_______,
                                            _______,_______,                _______,_______
    ),

    [_SYM] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,KC_EXLM,KC_AT  ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,_______,
        _______,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                        KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,_______,
        _______,_______,KC_DQUO,KC_QUOT,KC_GRV ,KC_TILD,                        KC_BSLS,KC_PIPE,_______,_______,_______,_______,
                        _______,_______,                                                        _______,_______,
                                            _______,_______,                _______,RST    ,
                                            _______,_______,                _______,_______,
                                            _______,_______,                _______,_______

    ),

    [_RST] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,QK_BOOT,_______,                        _______,QK_BOOT,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                        _______,_______,                                                        _______,_______,
                                            _______,_______,                _______,_______,
                                            _______,_______,                _______,_______,
                                            _______,_______,                _______,_______

    )
};
