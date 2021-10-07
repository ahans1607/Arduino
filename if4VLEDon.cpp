int myPin=A0;
int ledPin=9;
int readVal;
float V2;
int second=1000;

void setup(){
  Serial.begin(9600);
  pinMode(myPin, INPUT);
  pinMode(ledPin, OUTPUT);
  }

void loop(){
  readVal=analogRead(myPin);
  V2=((5./1023.) * readVal);
  Serial.print("Potentiometer Voltage is ");
  Serial.println(V2);
  
  if(V2 > 4.0){
    digitalWrite(ledPin, HIGH);
    };
   if(V2 < 4.0){
    digitalWrite(ledPin, LOW);
    };
    
  delay(second);
  }
