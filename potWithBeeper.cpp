int potVal=A0;
int beeper=9;
int second=1000;

float volts;


void setup() {
  // put your setup code here, to run once:
  pinMode(beeper, OUTPUT);
  pinMode(potVal, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  volts=((5./1023.)*analogRead(potVal));
  Serial.println(volts);
  delay(second);

  if(volts>4){
    digitalWrite(beeper, HIGH);
    delay(2000);
    }

    digitalWrite(beeper, LOW);
}
