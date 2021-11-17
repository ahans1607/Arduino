int yellowLED=9;
int incomingA0=A0;
int potVal;
int second=1000;
float volts;

void setup() {
  // put your setup code here, to run once:
  pinMode(yellowLED,OUTPUT);
  pinMode(incomingA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(incomingA0);
  volts=((5./1023.)*potVal);
  Serial.println(volts);
  delay(second);

  while(volts > 4){
    digitalWrite(yellowLED, HIGH);
    potVal=analogRead(incomingA0);
    volts=((5./1023.)*potVal);
    Serial.println(volts);
    delay(second);

    }
   digitalWrite(yellowLED,LOW);
}
