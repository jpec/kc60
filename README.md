KC60 keyboard firmware
======================
DIY compact keyboard by Massdrop.

## KC60 Resources
- [Massdrop page](https://www.massdrop.com/buy/kc60-mechanical-keyboard)


## Build
Move to this directory then just run `make` like:

    $ git submodule update tmk_core
    $ make

Use `make -f Makefile.pjrc` if you want to use PJRC stack but I find no reason to do so now.

## Program the keyboard
Press the button on the back of the keyboard and execute:

    $ ./flash.sh

And replug your keyboard.

## Keymap
Several version of keymap are available in advance but you are recommended to define your favorite layout yourself. To define your own keymap create file named `keymap_<name>.c` and see keymap document(you can find in top README.md) and existent keymap files.

To build firmware binary hex file with a certain keymap just do `make` with `KEYMAP` option like:

    $ make KEYMAP=<name>

### List of keymaps

[keymap_default.c](keymap_default.c) is a keymap designed by Julien Pecqueur.

[keymap_spacefn.c](keymap_spacefn.c) is a SpaceFn keymap designed by Julien Pecqueur.
