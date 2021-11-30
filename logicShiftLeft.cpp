int latchPin=11;
int clockPin=9;
int dataPin=12;

byte LED=0b01010101;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LED);
  digitalWrite(latchPin, HIGH);

  LED=LED*2;
  
  delay(500);

}
