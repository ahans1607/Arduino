int beeper=9;
int potVal;
int potPin=A0;
float toneVal;

void setup() {
  pinMode(beeper, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  potVal=analogRead(potPin);
  toneVal=((9940./1023.)*potVal + 60);

  Serial.println(toneVal);

  digitalWrite(beeper, HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(beeper, LOW);
  delayMicroseconds(toneVal);

  exit(0);
  
}
