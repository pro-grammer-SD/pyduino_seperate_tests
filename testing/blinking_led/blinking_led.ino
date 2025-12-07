#include "Arduino.h"


void setup() {
    // Add a 220 ohms resistor. Pair it with an LED. Done!
}
void loop() {
    // Turn the LED on (HIGH is the voltage level)
    digitalWrite(13, HIGH);
    // Wait for 2 seconds (converted to 2000ms by pyduino)
    delay(2000);
    // Turn the LED off by making the voltage LOW
    digitalWrite(13, LOW);
    delay(2000);
}
