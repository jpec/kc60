/*
Copyright 2016 Julien Pecqueur <julien@peclu.net>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"

/*
 * Julien's default keymap
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layout 0: Default Layer
     * ,-----------------------------------------------------------.
     * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
     * |-----------------------------------------------------------|
     * |Fn1 |Gui |Alt |        SpaceFn         |Alt |Gui |App |Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        GRV,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, EQL,  BSPC, \
        TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC, BSLS, \
        LCTL, A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT,       ENT,  \
        LSFT, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH,             RSFT, \
        FN1,  LGUI, LALT,             FN0,                          RALT, RGUI, APP,  RCTL),

    /* Layout 1: Function Layer
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |     |Prv|Ply|Nxt|Stp|   |   |PUp|Up |PDn|   |Slk|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |      |Vl-|Mut|Vl+|   |   |Hom|Lef|Dow|Rig|End|   |PEnt    |
     * |-----------------------------------------------------------|
     * |        |Prt|Cut|Cop|Pst|Cal|   |   |   |   |   |CapsLock  |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        ESC,  F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  DEL,  \
        TRNS, MPRV, MPLY, MNXT, MSTP, TRNS, TRNS, PGUP, UP,   PGDN, TRNS, SLCK, PAUS, INS,  \
        TRNS, VOLD, MUTE, VOLU, TRNS, TRNS, HOME, LEFT, DOWN, RGHT, END,  TRNS,       PENT, \
        TRNS, PSCR, FN2,  FN3,  FN4,  CALC, TRNS, TRNS, TRNS, TRNS, TRNS,             CAPS, \
        TRNS, TRNS, TRNS,             TRNS,                         TRNS, TRNS, TRNS, TRNS),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),    /* SpaceFn layout 1 */
    [1] = ACTION_LAYER_MOMENTARY(1),            /* Momentary layout 1 */
    [2] = ACTION_MODS_KEY(MOD_LSFT, KC_DEL),    /* Cut  */
    [3] = ACTION_MODS_KEY(MOD_LCTL, KC_INS),    /* Copy  */
    [4] = ACTION_MODS_KEY(MOD_LSFT, KC_INS),    /* Paste */
};
