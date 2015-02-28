#include "keymap_common.h"

/*
TRNS for transparent
NO for no
*/

/* mit planck layout
    ,-----------------------------------------------------------------------------------------------.
    | bkspc |   '   |   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   |
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |  tab  |   ;   |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   | enter |
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |   (   |   )   |   Z   |   X   |   C   |   V   |   B   |   N   |   M   |   ,   |   .   |  / ?  |
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |   [   |   ]   |  esc  |  del  | shift |     space     |  rctl |  ralt |  FN0  |  FN1  |       |
    `-----------------------------------------------------------------------------------------------'
    ,-----------------------------------------------------------------------------------------------.
    |   !   |   @   |   #   |   $   |   %   |   ^   |   &   |   *   |  -/_  |  =/+  |   \|  |   `~  |
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |nxtsong|       |  left |  down |   up  | right |       |       |       | insert|  home | pageup|
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |presong|       |       |       |       |       |       |       |       |       |  end  | pagedn|
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |volmute| pause |  trns |  trns |       |     space     |  gui  |       |       |       |printsc|
    `-----------------------------------------------------------------------------------------------'
    ,-----------------------------------------------------------------------------------------------.
    |   7   |   8   |   9   | bkspc |       |       |       |       |   F1  |   F2  |   F3  |   F4  |
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |   4   |   5   |   6   |       |       |       |       |       |   F5  |   F6  |   F7  |   F8  |
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |   1   |   2   |   3   |  plus | multi |       |       |       |   F9  |  F10  |  F11  |  F12  |
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |   0   |  dot  |  ent  | minus | divide|    space      |       |       |       |       |       |
    `-----------------------------------------------------------------------------------------------'
*/
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = KEYMAP( 
	BSPC,   QUOT,      Q,      W,      E,      R,      T,      Y,      U,      I,      O,      P, 
         TAB,   SCLN,      A,      S,      D,      F,      G,      H,      J,      K,      L,    ENT,
         FN3,    FN4,      Z,      X,      C,      V,      B,      N,      M,   COMM,    DOT,   SLSH,
        LBRC,   RBRC,    ESC, DELETE,   LSFT,            SPC,   RCTL,   RALT,    FN0,    FN1,    NO), 

	[1] = KEYMAP( 
	 FN5,    FN6,    FN7,    FN8,    FN9,   FN10,   FN11,   FN12,   MINS,    EQL,   BSLS,    GRV,
	MNXT,     NO,   LEFT,   DOWN,     UP,  RIGHT,     NO,     NO,     NO,    INS,   HOME,   PGUP,
	MPRV,     NO,     NO,     NO,     NO,     NO,     NO,     NO,     NO,     NO,    END, PGDOWN,
	MUTE,   MPLY,   TRNS,   TRNS,   TRNS,            SPC,    LGUI,  TRNS,   TRNS,   TRNS,  PSCR),

	[2] = KEYMAP( 
           7,      8,      9,   BSPC,    NO,      NO,     NO,     NO,     F1,     F2,     F3,     F4,
           4,      5,      6,     NO,    NO,      NO,     NO,     NO,     F5,     F6,     F7,     F8,
           1,      2,      3,   PPLS,   PAST,     NO,     NO,     NO,     F9,    F10,    F11,    F12,
           0,    DOT,    ENT,   PMNS,   PSLS,            SPC,   TRNS,     NO,   TRNS,   TRNS,  TRNS),
};

const uint16_t PROGMEM fn_actions[] = {

	[0] = ACTION_LAYER_MOMENTARY(1),               // first layer
	[1] = ACTION_LAYER_MOMENTARY(2),               // second Fn layer
	//[2] = ACTION_LAYER_TAP_KEY(3, KC_ESC),               // raise Fn layer

	[3] = ACTION_MODS_KEY(MOD_LSFT, KC_9),         // (
	[4] = ACTION_MODS_KEY(MOD_LSFT, KC_0),         // )
	
	[5] = ACTION_MODS_KEY(MOD_LSFT, KC_1),         // !
	[6] = ACTION_MODS_KEY(MOD_LSFT, KC_2),         // @
	[7] = ACTION_MODS_KEY(MOD_LSFT, KC_3),         // #
	[8] = ACTION_MODS_KEY(MOD_LSFT, KC_4),         // $
	[9] = ACTION_MODS_KEY(MOD_LSFT, KC_5),         // %
	[10] = ACTION_MODS_KEY(MOD_LSFT, KC_6),        // ^
	[11] = ACTION_MODS_KEY(MOD_LSFT, KC_7),        // &
	[12] = ACTION_MODS_KEY(MOD_LSFT, KC_8),        // *

};	

	//[13] = ACTION_MODS_KEY(MOD_LSFT, KC_SLASH),    // 
	//[14] = ACTION_MODS_KEY(MOD_LSFT, KC_2),        // 
	//[15] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLASH),   // 
	//[16] = ACTION_MODS_KEY(MOD_LSFT, KC_6),        // 
	//[17] = ACTION_MODS_KEY(MOD_LSFT, KC_8),        // 
	//[18] = ACTION_MODS_KEY(MOD_LSFT, KC_3),        // 
	//[19] = ACTION_MODS_KEY(MOD_LSFT, KC_4),        // 
	//[20] = ACTION_MODS_KEY(MOD_LSFT, KC_7),        // 
	//[21] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRACKET), // 
	//[22] = ACTION_MODS_KEY(MOD_LSFT, KC_9),        // 
	//[23] = ACTION_MODS_KEY(MOD_LSFT, KC_1),        // 
	//[24] = ACTION_MODS_KEY(MOD_LSFT, KC_0),        // 
	//[25] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRACKET), // 
	//[26] = ACTION_MODS_KEY(MOD_LSFT, KC_EQUAL),    // 
	//[27] = ACTION_MODS_KEY(MOD_LSFT, KC_5),        // 
	//[28] = ACTION_MODS_KEY(MOD_LSFT, KC_SLASH),    // 
	//[29] = ACTION_MODS_KEY(MOD_LSFT, KC_2),        // 
	//[30] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLASH),   // 
	//[31] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),     // 
