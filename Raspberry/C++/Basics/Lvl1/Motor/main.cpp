#include <wiringPi.h>
#include <iostream>
using namespace std;
int main() {

// NOT WORKING!
  
  int signal = 17;
  cout << "PWM test program\n";

  if (wiringPiSetupGpio() == -1) return(1);
  pinMode(signal, PWM_OUTPUT);
  for (;;) {
    
    for (int inten=0; inten<1024; ++inten) {
      pwmWrite(signal, inten);
      delay(1);
    }
    for (int inten=1023; inten>=0; --inten) {
      pwmWrite(signal, inten);
      delay(1);
    }
  }
}
