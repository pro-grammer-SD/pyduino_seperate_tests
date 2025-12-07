#include "CheapStepper.h"
#include "Arduino.h"

CheapStepper stepper(8, 9, 10, 11);

void setup() {
    stepper.setRpm(10);
}
void loop() {
    // clockwise 200 steps
    stepper.moveCW(2000);
    // wait 500ms
    delay(500);
    // counter-clockwise 2000 steps
    stepper.moveCCW(2000);
    delay(500);
}
