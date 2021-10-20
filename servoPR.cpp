#include <Servo.h>

int servoPin=9;
int servoPos=15;
int photoRes=A0;
int lightVal;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  pinMode(photoRes, INPUT);
  Serial.begin(2000000);
  myServo.attach(servoPin);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(photoRes);
  delay(1000);

  servoPos=((-16./63.)*lightVal + ((16.*780.)/63.));
  
  Serial.println(servoPos);
  myServo.write(servoPos);

}
