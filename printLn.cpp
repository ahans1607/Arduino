int j=1;
int second(1000);
String myString="j = ";

void setup(){
  Serial.begin(115200);
  }

void loop(){
  Serial.print(myString);
  Serial.println(j);
  j=j+1;
  delay(second);
  }
