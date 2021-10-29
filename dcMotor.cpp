int speedPin=5;
int dirPin1=4;
int dirPin2=3;
int mSpeed=255;

void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  Serial.begin(2000000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dirPin1, HIGH);
  digitalWrite(dirPin2, LOW);
  analogWrite(speedPin, mSpeed);

}
