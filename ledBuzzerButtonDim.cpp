int button1=8;
int button2=9;
int buzzPin=6;
int buttonVal1;
int buttonVal2;
int whiteLED=3;
int ledBright=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(whiteLED, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1=digitalRead(button1);
  buttonVal2=digitalRead(button2);

 Serial.print("Button 1 = ");
 Serial.print(buttonVal1);
 Serial.print(", ");
 Serial.print("Button 2 = ");
 Serial.println(buttonVal2);
 
 if(buttonVal1==0){
  ledBright+=5;
  Serial.print(ledBright);
  }

 if(buttonVal2==0){
  ledBright-=5;
   Serial.print(ledBright);
  }

 if(ledBright>255){
  ledBright=255;
  digitalWrite(buzzPin, HIGH);
  delay(500);
  digitalWrite(buzzPin, LOW);
  }

 if(ledBright<0){
  ledBright=0;
  digitalWrite(buzzPin, HIGH);
  delay(500);
  digitalWrite(buzzPin, LOW);
  }

 analogWrite(whiteLED, ledBright);
}
