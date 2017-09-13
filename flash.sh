#!/bin/bash

echo "dfu-programmer atmega32u4 erase"
sudo dfu-programmer atmega32u4 erase
echo "dfu-programmer atmega32u4 flash kc60_lufa.hex"
sudo dfu-programmer atmega32u4 flash kc60_lufa.hex
echo "dfu-programmer atmega32u4 reset"
sudo dfu-programmer atmega32u4 reset
echo "done!"
