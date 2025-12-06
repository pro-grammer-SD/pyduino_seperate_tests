#include "CheapStepper.h"
#include "Arduino.h"

CheapStepper stepper(8, 9, 10, 11);

void setup() {
    stepper.setRpm(10);
}
void loop() {
    stepper.moveCW(2000);
    delay(500);
    stepper.moveCCW(2000);
    delay(500);
}