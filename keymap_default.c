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
     * |Fn1 |Gui |Alt |        SpaceFn         |Alt |Gui |App |BTN3|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        GRV,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS, EQL,  BSPC, \
        TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    LBRC, RBRC, BSLS, \
        LCTL, A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT,       ENT,  \
        LSFT, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH,             RSFT, \
        FN1,  LGUI, LALT,             FN0,                          RALT, RGUI, APP,  BTN3),

    /* Layout 1: Function Layer
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |     |Prv|Ply|Nxt|   |   |PUp|Hom|Up |End|Psc|Slk|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |Caps  |Vl-|Mut|Vl+|   |   |PDn|Lef|Dow|Rig|   |   |PEnt    |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |Ly0|Ly1|Ly2|Ly3|          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        ESC,  F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  DEL,  \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PGUP, HOME, UP,   END,  PSCR, SLCK, PAUS, INS,  \
        CAPS, VOLD, MUTE, VOLU, TRNS, TRNS, PGDN, LEFT, DOWN, RGHT, TRNS, TRNS,       PENT, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, FN3,  FN4,  FN5,  FN6,              TRNS, \
        TRNS, TRNS, TRNS,             TRNS,                         TRNS, TRNS, TRNS, TRNS),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),    /* SpaceFn layout 1 */
    [1] = ACTION_LAYER_MOMENTARY(1),            /* Momentary layout 1 */
    [3] = ACTION_LAYER_TOGGLE(0),               /* Set layout 0 */
    [4] = ACTION_LAYER_TOGGLE(1),               /* Set layout 1 */
    [5] = ACTION_LAYER_TOGGLE(0),               /* Set layout 2 (not used) */
    [6] = ACTION_LAYER_TOGGLE(0),               /* Set layout 3 (not used) */
};
