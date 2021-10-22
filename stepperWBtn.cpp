#include <Stepper.h>
int stepsPerRevolution=2048;
int motSpeed=15; //how many RPMS
int dt=500;
 
int buttonPin=3;
int motDir=1;
int buttonValNew;
int buttonValOld=1;

Stepper myStepper(stepsPerRevolution, 8,10,9,11);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myStepper.setSpeed(motSpeed);

pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
}
 
void loop() {
buttonValNew=digitalRead(buttonPin);
if (buttonValOld==1 && buttonValNew==0){
  motDir=motDir*(-1);
}
myStepper.step(motDir*1);
buttonValOld=buttonValNew;
}
