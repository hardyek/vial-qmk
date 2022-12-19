#include QMK_KEYBOARD_H

enum user_keycode {
    BT_USB = USER00, 
    KB_RESET, 
    BATT_LEVEL, 
    LOCK_MODE, 
    RGB_Toogle, 
    RGB_Mode_DN, 
    RGB_Mode_UP, 
    RGB_HUE_DN, 
    RGB_HUE_UP, 
    RGB_SAT_DN, 
    RGB_SAT_UP, 
    RGB_LUM_DN, 
    RGB_LUM_UP, 
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = {
    {KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7}, 
    {KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U},
    {KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_NO}, 
    {KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_LCTRL, KC_LALT, KC_LGUI}, 
    {KC_NO, KC_SPACE, KC_NO, KC_NO, KC_RALT, KC_RGUI, KC_NO, KC_RCTRL}, 
    {MO(1), KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT}, 
    {KC_NO, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE, KC_ENTER, KC_NO}, 
    {KC_NO, KC_I, KC_O, KC_P, KC_LBRACKET, KC_RBRACKET, KC_BSPACE, KC_NO}, 
    {KC_GRAVE, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSLASH, KC_NO}

	}, 
  [1] = {
    {KC_GRAVE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7}, 
    {KC_CAPSLOCK, BT_USB, KC_TRNS, BATT_LEVEL, RGB_Toogle, RGB_Mode_UP, KC_TRNS, KC_TRNS}, 
    {KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, RGB_HUE_UP, RGB_SAT_UP, RGB_LUM_UP, KC_NO}, 
    {KC_TRNS, LOCK_MODE, KC_TRNS, KC_CALC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS}, 
    {KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS}, 
    {KC_TRNS, KB_RESET, KC_KP_PLUS, KC_KP_MINUS, KC_END, KC_PGDOWN, KC_DOWN, KC_TRNS}, 
    {KC_NO, KC_KP_SLASH, KC_HOME, KC_PGUP, KC_LEFT, KC_RIGHT, KC_TRNS, KC_NO}, 
    {KC_NO, KC_PSCREEN, KC_SCROLLLOCK, KC_PAUSE, KC_UP, KC_TRNS, KC_TRNS, KC_NO}, 
    {KC_DELETE, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INSERT, KC_NO}
	},
  [2] = {
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }
	}, 
  [3] = {
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }, 
	{_______,_______,_______,_______,_______,_______,_______,_______, }
	},
};
