int photoPin=A0;
int photoVal;
int second=1000;

int beeper=6;
float delayTone;

void setup() {
  // put your setup code here, to run once:
  pinMode(photoPin, INPUT);
  pinMode(beeper, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal=analogRead(photoPin);
  Serial.println(photoVal);

  delayTone=(((9940./1023.)*photoVal) + 60);

  digitalWrite(beeper, HIGH);
  delayMicroseconds(delayTone);
  digitalWrite(beeper, LOW);
  delayMicroseconds(delayTone);

}
