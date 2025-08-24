#define _PWM_LOGLEVEL_ 3
#include "RP2040_PWM.h"

//creates pwm instance
RP2040_PWM* fan1;
RP2040_PWM* fan2;
RP2040_PWM* fan3;
RP2040_PWM* fan4;
RP2040_PWM* fan5;

float frequency;
float dutyCycle;

void setup()
{
  fan1 = new RP2040_PWM(5, 25000, 20);
  fan2 = new RP2040_PWM(22, 25000, 20);
  fan3 = new RP2040_PWM(7, 25000, 20);
  fan4 = new RP2040_PWM(8, 25000, 20);
  fan5 = new RP2040_PWM(9, 25000, 20);
}

void loop()
{
  frequency = 25000;
  dutyCycle = 35;

  fan1->setPWM(5, frequency, dutyCycle);
  fan2->setPWM(22, frequency, dutyCycle);
  fan3->setPWM(7, frequency, dutyCycle);
  fan4->setPWM(8, frequency, dutyCycle);
  fan5->setPWM(9, frequency, dutyCycle);
}
