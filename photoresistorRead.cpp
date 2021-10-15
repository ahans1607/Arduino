int photoRes=A0;
int lightVal;
int second=1000;

void setup() {
  pinMode(photoRes, INPUT);
  Serial.begin(9600);
}

void loop() {
  lightVal=analogRead(photoRes);
  Serial.println(lightVal);
  delay(second); 
}
