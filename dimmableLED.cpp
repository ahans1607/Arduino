int potPin=A0;
int ledPin=6;
int potVal;
float ledVal;


void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  ledVal=((255./1023.)*potVal);

  analogWrite(ledPin, ledVal);
  
  Serial.println(ledVal);
  exit(0);

}
