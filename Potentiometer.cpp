int readA2=A0;
int readVal;
float V2;
int second=1000;

void setup(){
  pinMode(readA2, INPUT);
  Serial.begin(9600);
  }

void loop(){
  readVal=analogRead(readA2);
  V2=((5./1023.) * readVal);
  Serial.println(V2);
  delay(second);
  }
