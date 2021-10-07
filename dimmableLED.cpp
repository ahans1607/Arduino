// int potPin=A0;
// int ledPin=6;
// int potVal;
// float ledVal;


// void setup() {
//   // put your setup code here, to run once:
//   pinMode(potPin, INPUT);
//   pinMode(ledPin, OUTPUT);
//   Serial.begin(9600);

// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   potVal=analogRead(potPin);
//   ledVal=((255./1023.)*potVal);

//   analogWrite(ledPin, ledVal);
  
//   Serial.println(ledVal);
//   exit(0);

// }



int analogInput=A0;
int second=1000;
float voltageOutput;
int analogVal;
int whiteLED=6;

void setup() {
  
  pinMode(analogInput, INPUT);
  pinMode(whiteLED, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  analogVal=analogRead(analogInput);
  
  voltageOutput=((5./1023.)*analogVal);
  Serial.println(voltageOutput);

  analogWrite(whiteLED, (255./1023.)*analogVal);
}
