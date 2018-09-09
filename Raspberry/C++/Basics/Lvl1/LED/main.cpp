#include <wiringPi.h>
int main() {
  
  int led = 18;
  wiringPiSetupGpio();
  pinMode(led, OUTPUT);
  for (;;) {
    digitalWrite(led,HIGH); delay(1000);
    digitalWrite(led,LOW); delay(1000);
  }
}
