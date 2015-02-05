/*	mit planck layout

	Seans Boss Template
0     = main    layer
1     = second layer
2     = thrid  layer
     ,-----------------------------------------------------------------------------------------------.
0    | bkspc |   "   |   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   |
1    |   !   |   @   |   #   |   $   |   %   |   ^   |   &   |   *   |   (   |   )   |   -   |   =   |
2    |   7   |   8   |   9   | bkspc |       |       |       |       |       |   F1  |   F2  |   F3  |
     |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
0    |  tab  |   ;   |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |  ent  |
1    |       |       |  lft  |  Dwn  |   Up  | Right |       |       |       |       |       |       |
2    |   4   |   5   |   6   |       |       |       |       |       |       |   F4  |   F5  |   F6  |
     |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
0    |       |       |   Z   |   X   |   C   |   V   |   B   |   N   |   M   |   ,   |   .   |   /   |
1    |       |       |       |       |       |       |       |       |       |       |       |       |
2    |   1   |   2   |   3   |   +   |   *   |       |       |       |       |   F7  |   F8  |   F9  |
     |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
0    | Lbrac | Rbrac |       |       | Shift |     space     |       |  FN0  |       | FNNum | rctrl |
1    |       |       |       |       |       |     space     |       |       |Windows|       |       |
2    |   0   |  Dot  |  Ent  |   -   |       |     space     |       |       |  F10  |  F11  |  F12  |
     `-----------------------------------------------------------------------------------------------'
*/

/*
KEYS I NEED
~`
esc
divide
printscreen
insert
page up/down
home/end
*/

#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = KEYMAP( /* Main Layer */
         BSPS,    FN3,      Q,      W,      E,      R,      T,      Y,      U,      I,      O,      P, 
          TAB,   SCLN,      A,      S,      D,      F,      G,      H,      J,      K,      L,    ENT,
             ,       ,      Z,      X,      C,      V,      B,      N,      M,   COMM,    DOT,   SLSH,
         LBRC,   RBRC,       ,       ,   LSFT,           SPC,       ,       ,    FN0,    FN1,  RCTL), 

	[1] = KEYMAP( /* First Mod Layer */
	      FN4,    FN5,    FN6,    FN7,    FN8,    FN9,   FN10,   FN11,   Fn12,   FN13,   MINS,  EQUAL,
	         ,       ,   LEFT,   DOWN,     UP,  RIGHT,       ,       ,       ,       ,       ,       ,
	         ,       ,       ,       ,       ,       ,       ,       ,       ,       ,       ,       ,
	         ,       ,       ,       ,       ,            SPC,       ,       ,   LGUI,       ,      ),

	[2] = KEYMAP( /* Num/Fn */
            7,      8,      9,   BSPS,       ,       ,       ,       ,       ,     F1,     F2,     F3,
            4,      5,      6,       ,       ,       ,       ,       ,       ,     F4,     F5,     F6,
            1,      2,      3,   PPLS,   Past,       ,       ,       ,       ,     F7,     F8,     F9,
            0,    DOT,    ENT,   PMNS,       ,            SPC,       ,       ,    F10,    F11,   F12),
};

const uint16_t PROGMEM fn_actions[] = {
	// Layers
	[0] = ACTION_LAYER_MOMENTARY(1),               // Main Layer
	[1] = ACTION_LAYER_MOMENTARY(2),               // Symbol Layer / Arrows
	[2] = ACTION_LAYER_MOMENTARY(3),               // 
	// First layer
	[3] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),      // "
	// Macros Symbol Layer 
	[4] = ACTION_MODS_KEY(MOD_LSFT, KC_1),         // !
	[5] = ACTION_MODS_KEY(MOD_LSFT, KC_2),         // @
	[6] = ACTION_MODS_KEY(MOD_LSFT, KC_3),         // #
	[7] = ACTION_MODS_KEY(MOD_LSFT, KC_4),         // $
	[8] = ACTION_MODS_KEY(MOD_LSFT, KC_5),         // %
	[9] = ACTION_MODS_KEY(MOD_LSFT, KC_6),         // ^
	[10] = ACTION_MODS_KEY(MOD_LSFT, KC_7),        // &
	[11] = ACTION_MODS_KEY(MOD_LSFT, KC_8),        // *
	[12] = ACTION_MODS_KEY(MOD_LSFT, KC_9),        // (
	[13] = ACTION_MODS_KEY(MOD_LSFT, KC_0),		   // )

	[14] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),     // 
	[15] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLASH),   // 
	[16] = ACTION_MODS_KEY(MOD_LSFT, KC_6),        // 
	[17] = ACTION_MODS_KEY(MOD_LSFT, KC_8),        // 
	[18] = ACTION_MODS_KEY(MOD_LSFT, KC_3),        // 
	[19] = ACTION_MODS_KEY(MOD_LSFT, KC_4),        // 
	[20] = ACTION_MODS_KEY(MOD_LSFT, KC_7),        // 
	[21] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRACKET), // 
	[22] = ACTION_MODS_KEY(MOD_LSFT, KC_9),        // 
	[23] = ACTION_MODS_KEY(MOD_LSFT, KC_1),        // 
	[24] = ACTION_MODS_KEY(MOD_LSFT, KC_0),        // 
	[25] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRACKET), // 
	[26] = ACTION_MODS_KEY(MOD_LSFT, KC_EQUAL),    // 
	[27] = ACTION_MODS_KEY(MOD_LSFT, KC_5),        // 
	[28] = ACTION_MODS_KEY(MOD_LSFT, KC_SLASH),    // 
	[29] = ACTION_MODS_KEY(MOD_LSFT, KC_2),        // 
	[30] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLASH),   // 
	[31] = ACTION_MODS_KEY(MOD_LSFT, KC_6),        // 
};


/*
Blanck Templates
     ,-----------------------------------------------------------------------------------------------.
1    |       |       |       |       |       |       |       |       |       |       |       |       |
2    |       |       |       |       |       |       |       |       |       |       |       |       |
3    |       |       |       |       |       |       |       |       |       |       |       |       |
     |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
1    |       |       |       |       |       |       |       |       |       |       |       |       |
2    |       |       |       |       |       |       |       |       |       |       |       |       |
3    |       |       |       |       |       |       |       |       |       |       |       |       |
     |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
1    |       |       |       |       |       |       |       |       |       |       |       |       |
2    |       |       |       |       |       |       |       |       |       |       |       |       |
3    |       |       |       |       |       |       |       |       |       |       |       |       |
     |-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
1	 |       |       |       |       |       |       |       |       |       |       |       |       |
2	 |       |       |       |       |       |       |       |       |       |       |       |       |
2	 |       |       |       |       |       |       |       |       |       |       |       |       |
     `-----------------------------------------------------------------------------------------------'

[0] = KEYMAP(
	         ,       ,       ,       ,       ,       ,       ,       ,       ,       ,       ,       ,
	         ,       ,       ,       ,       ,       ,       ,       ,       ,       ,       ,       ,
	         ,       ,       ,       ,       ,       ,       ,       ,       ,       ,       ,       ,
 	         ,       ,       ,       ,       ,            SPC,       ,       ,       ,       ,      ),
*/
