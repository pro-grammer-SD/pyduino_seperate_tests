from lib.Arduino import *
import time

def setup():
    pass # Add a 220 ohms resistor. Pair it with an LED. Done!

def loop():
    digitalWrite(13, HIGH) # Turn the LED on (HIGH is the voltage level)
    time.sleep(2)            # Wait for 2 seconds (converted to 2000ms by pyduino)
    digitalWrite(13, LOW)  # Turn the LED off by making the voltage LOW
    time.sleep(2)
    