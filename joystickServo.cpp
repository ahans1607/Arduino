#include <Servo.h>
Servo Xservo;
Servo Yservo;

int Xpin=A0;
int Ypin=A1;
int SPin=2;
int xServoPin=10;
int yServoPin=9;
int buzzer=7;
int WVx;
int WVy;
int Xval;
int Yval;
int Sval;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(2000000);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(SPin, INPUT);
  pinMode(xServoPin, OUTPUT);
  pinMode(yServoPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(SPin, HIGH);
  Xservo.attach(xServoPin);
  Yservo.attach(yServoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Xval=analogRead(Xpin);
  WVx=(180./1023.)*Xval;
  Yval=analogRead(Ypin);
  WVy=(180./1023.)*Yval;
  Sval=digitalRead(SPin);

  Xservo.write(WVx);
  Yservo.write(WVy);


  if(Sval==0){
    digitalWrite(buzzer, HIGH);
    delay(1000);
    }

  digitalWrite(buzzer,LOW);
//  delay(250);


  Serial.print("Xpin ");
  Serial.print(Xval);

  Serial.print(" Ypin ");
  Serial.print(Yval);

  Serial.print(" S State ");
  Serial.println(Sval);

}
