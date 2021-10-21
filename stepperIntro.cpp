#include <Stepper.h>
int stepsPerRevolution=2048;
int motSpeed=10;
Stepper myStepper(stepsPerRevolution, 8,10,9,11);

void setup() {
  // put your setup code here, to run once:
Serial.begin(2000000);
myStepper.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
myStepper.step(stepsPerRevolution);
delay(500);
myStepper.step(-stepsPerRevolution);
delay(500);
}
