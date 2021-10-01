int analogPin=A3;
int V2=0;
int readVal;
int second=1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(analogPin);
  V2=(5./1023. * readVal);
  Serial.println(V2);
  delay(second);
}
