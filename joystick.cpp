int Xpin=A0;
int Ypin=A1;
int SPin=2;
int Xval;
int Yval;
int Sval;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(2000000);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(SPin, INPUT);
  digitalWrite(SPin, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  Xval=analogRead(Xpin);
  Yval=analogRead(Ypin);
  Sval=digitalRead(SPin);

  Serial.print("Xpin ");
  Serial.print(Xval);

  Serial.print(" Ypin ");
  Serial.print(Yval);

  Serial.print(" S State ");
  Serial.println(Sval);
  delay(1000);
}
