#!/usr/bin/python3
import RPi.GPIO as gpio
import time

gpio.setmode(gpio.BCM);
#gpio.setmode(gpio.BOARD);
freq=50
pin=17

# Positions in miliseconds

left =0.75; right =2.5;
middle= (right-left)/2+left;
posList=[left,middle,right,middle];
msPerCycle = 1000/freq;

try:
  gpio.setup(pin,gpio.OUT);
  pwm = gpio.PWM(pin, freq);
  while True:
    for pos in posList:
      dutyCyclePercentage = pos*100/msPerCycle;
      print("Position: " + str(pos));
      print("Duty Cycle: " + str(dutyCyclePercentage) + "%\n")
      pwm.start(dutyCyclePercentage);
      time.sleep(3.0);
except KeyboardInterrupt:
  print("Keyboard interrupt");
finally:
  pwm.stop();
  gpio.cleanup();


