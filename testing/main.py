from lib.Arduino import *
from lib.CheapStepper import CheapStepper

stepper = CheapStepper(8, 9, 10, 11)

def setup():
    stepper.setRpm(10)

def loop():
    stepper.moveCW(2000)   # clockwise 200 steps
    delay(500)            # wait 500ms
    stepper.moveCCW(2000)  # counter-clockwise 200 steps
    delay(500)
    