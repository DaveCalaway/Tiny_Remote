/*
  * https://goo.gl/cAxs1T
  *
 * pin out attiny85
 * NC      --+----+-- VCC
 * NC      --|*   |-- NC
 * IRsend  --|    |-- NC
 * GND     --+----+-- NC
*/


#include "tiny_IRremote.h"

IRsend irsend;

void setup(){
}

void loop() {
  for (int i = 0; i < 3; i++) {
    irsend.sendSAMSUNG(0xE0E040BF, 32);
    delay(40);
  }
  delay(1000); //5 second delay between each signal burst
}

