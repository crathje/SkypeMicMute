# SkypeMicMute
Using a Digistump compatible Arduino board to mute and unmute the microphone in Skype for Business (Windows+F4)

## Board
Intended to run on a [Digistump compatible Arduino board](https://www.aliexpress.com/af/digispark-attiny85.html)

Board manager URL: http://digistump.com/package_digistump_index.json

Details on the library functions: https://github.com/digistump/DigistumpArduino/blob/master/digistump-avr/libraries/DigisparkKeyboard/DigiKeyboard.h

Details on the "keys" of the USB keyboard (10 Keyboard/Keypad Page (0x07)): https://usb.org/sites/default/files/hut1_22.pdf


## Schematic
![badly drawn schematic](SkypeMicMute_schematic.png?raw=true)

## Protoype
![working prototype](SkypeMicMute_prototype.jpg?raw=true)

Protoype (red button for Sykpe, blue button something else). 


## Code

[SkypeMicMute.ino](SkypeMicMute/SkypeMicMute.ino)
