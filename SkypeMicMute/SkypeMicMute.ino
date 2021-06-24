/* 
 Intended to run on a Digispark with 16.5MHz
 See: https://github.com/crathje/SkypeMicMute
 Board manager URL: http://digistump.com/package_digistump_index.json
 Details on the library functions: https://github.com/digistump/DigistumpArduino/blob/master/digistump-avr/libraries/DigisparkKeyboard/DigiKeyboard.h
 Details on the "keys" of the USB keyboard (10 Keyboard/Keypad Page (0x07)): https://usb.org/sites/default/files/hut1_22.pdf
*/

#include "DigiKeyboard.h"

// Pins on the board
#define PIN_KEY_B0 0 // MOSI
#define PIN_KEY_B1 1 // MISO
#define PIN_KEY_B2 2 // SCK/ADC1
//#define PIN_KEY_B3 3 // USB+
//#define PIN_KEY_B4 4 // USB-
#define PIN_KEY_B5 5 // NRES


void setup() {
  pinMode(PIN_KEY_B0, INPUT_PULLUP); // use internal pullup
}

void loop() {
  if (!digitalRead(PIN_KEY_B0)) {
    DigiKeyboard.sendKeyStroke(0); // advised by the library to handle some cases where the first keypress is lost
    DigiKeyboard.sendKeyStroke(KEY_F4, MOD_GUI_LEFT); //  (WINDOWS+D)
    DigiKeyboard.delay(250); // lazy debounce
  }
  DigiKeyboard.update(); // handle USB stuff
}
