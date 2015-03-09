#include "keymap_common.h"

/* mit planck layout
	,-----------------------------------------------------------------------------------------------.
    | bkspc |   '   |   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   |
	|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |  tab  |   ;   |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   | enter |
	|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |   [   |   ]   |   Z   |   X   |   C   |   V   |   B   |   N   |   M   |   ,   |   .   |  / ?  |
	|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |   (   |   )   |  gui  |  del  | shift |     space     |  rctl |  FN0  |  FN1  |  ralt |  esc  |
	`-----------------------------------------------------------------------------------------------'
    ,-----------------------------------------------------------------------------------------------.
	| bkspc | insert|   !   |   @   |   #   |   $   |   %   |   ^   |   &   |   *   |  -/_  |  =/+  |
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |  tab  |  cap  |  down |   up  | right |nxtsong|presong|       |  home |  pgup |   \|  |   `~  |       
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |       |       |       |  down | pause |       |       |       |  end  | pgdown|       |       |
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |volmute|       |  trns |  trns |       |     space     |movrite|       |       |       |printsc|
    `-----------------------------------------------------------------------------------------------'
    ,-----------------------------------------------------------------------------------------------.
    | bkspc |  ent  |  plus |   7   |   8   |   9   |       |       |   F1  |   F2  |   F3  |   F4  |
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |  tab  |       | minus |   4   |   5   |   6   |       |       |   F5  |   F6  |   F7  |   F8  |
    |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |       |       |muliply|   1   |   2   |   3   |       |       |   F9  |  F10  |  F11  |  F12  |
	|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
    |       |       |divide |  dot  |   0   |     space     |       |       |       |       |       |
    `-----------------------------------------------------------------------------------------------'
    TRNS for transparent
    NO for no
*/
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = KEYMAP( 
	    BSPC,   QUOT,      Q,      W,      E,      R,      T,      Y,      U,      I,      O,      P, 
         TAB,   SCLN,      A,      S,      D,      F,      G,      H,      J,      K,      L,    ENT,
        LBRC,   RBRC,      Z,      X,      C,      V,      B,      N,      M,   COMM,    DOT,   SLSH,
         FN3,    FN4,   LGUI, DELETE,   LSFT,            SPC,  RCTRL,    FN0,    FN1,   RALT,   ESC), 

	[1] = KEYMAP( 
	    TRNS,    INS,    FN5,    FN6,    FN7,    FN8,    FN9,   FN10,   FN11,   FN12,   MINS,    EQL,   
	    TRNS,   CAPS,   LEFT,     UP,  RIGHT,   MNXT,   MPRV,     NO,   HOME,   PGUP,   BSLS,    GRV,
	      NO,   SLCK,     NO,   DOWN,     NO,   MPLY,     NO,     NO,    END, PGDOWN,     NO,     NO,
	    MUTE,     NO,   TRNS,   TRNS,   TRNS,           TRNS,   FN20,   TRNS,   TRNS,   TRNS,  PSCR),

	[2] = KEYMAP( 
        TRNS,    ENT,   PPLS,      7,      8,      9,     NO,     NO,     F1,     F2,     F3,     F4,
        TRNS,     NO,   PMNS,      4,      5,      6,     NO,     NO,     F5,     F6,     F7,     F8,
          NO,     NO,   PAST,      1,      2,      3,     NO,     NO,     F9,    F10,    F11,    F12,
          NO,     NO,   PSLS,    DOT,      0,           TRNS,   TRNS,   TRNS,   TRNS,   TRNS,  TRNS),
};

//enum macro_id {
//	MACRO1,
//	MACRO2,
//	MACRO3
//};

const uint16_t PROGMEM fn_actions[] = {

	[0] = ACTION_LAYER_MOMENTARY(1),                   // first layer
	[1] = ACTION_LAYER_MOMENTARY(2),                   // second Fn layer 
	//[2] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_FN22),      //
	[3] = ACTION_MODS_KEY(MOD_LSFT, KC_9),             // (
	[4] = ACTION_MODS_KEY(MOD_LSFT, KC_0),             // )

	[5] = ACTION_MODS_KEY(MOD_LSFT, KC_1),             // !
	[6] = ACTION_MODS_KEY(MOD_LSFT, KC_2),             // @
	[7] = ACTION_MODS_KEY(MOD_LSFT, KC_3),             // #
	[8] = ACTION_MODS_KEY(MOD_LSFT, KC_4),             // $
	[9] = ACTION_MODS_KEY(MOD_LSFT, KC_5),             // %
	[10] = ACTION_MODS_KEY(MOD_LSFT, KC_6),            // ^
	[11] = ACTION_MODS_KEY(MOD_LSFT, KC_7),            // &
	[12] = ACTION_MODS_KEY(MOD_LSFT, KC_8),            // *

	[20] = ACTION_MODS_KEY(MOD_LGUI, KC_RIGHT),        // move windows right

	[21] = exzites_pwm_duty(),
	//[22] = exzites_pwm_init(),

	//[28] = ACTION_BACKLIGHT_DECREASE(),
	//[29] = ACTION_BACKLIGHT_INCREASE(),
	//[30] = ACTION_BACKLIGHT_STEP(),
	//[31] = ACTION_BACKLIGHT_TOGGLE(),

	//[14] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT),      // unused right now
	//[20] = ACTION_MACRO(MACRO1),
	//[21] = ACTION_MACRO(MACRO2),

};	

//const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
//{
//	keyevent_t event = record->event;
//	switch (id) {
//	case MACRO1:
//		return event.pressed ?
//			MACRO( D(LCTRL), T(C), U(LCTRL), END) :
//			MACRO_NONE;
//	case MACRO2:
//		return event.pressed ?
//			MACRO( D(LCTRL), T(V), U(LCTRL), END) :
//			MACRO_NONE;
//	case MACRO3:
//		return event.pressed ?
//			MACRO( D(LCTRL), T(Z), U(LCTRL), END) :
//			MACRO_NONE;
//	}
//	return MACRO_NONE;
//}


	//[14] = ACTION_MACRO(CTRLC),                    //
	//[15] = ACTION_MACRO(CTRLV),                    //
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
