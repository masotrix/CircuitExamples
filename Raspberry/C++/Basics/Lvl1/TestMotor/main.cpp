#include <wiringPi.h>
#include <stdio.h>

int main (void)
{
  int pin = 17;
  printf ("Raspberry Pi wiringPi test program\n");
  wiringPiSetupGpio();
  pinMode (pin, PWM_OUTPUT) ;
  pwmSetMode (PWM_MODE_MS);
  pwmSetRange (2000);
  pwmSetClock (192);
  pwmWrite(pin,150);
  delay(1000);
  pwmWrite(pin,200);
}
