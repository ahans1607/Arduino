int myNumber;
String msg="Please Enter Your Number:";
int led=9;
int second=1000;
int j;

void setup(){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  }

void loop(){
  Serial.println(msg);
  while (Serial.available() == 0){
    
    }
    
  myNumber=Serial.parseInt();
  Serial.println(myNumber);

  for(j=1; j<=myNumber; j+=1){
    digitalWrite(led, HIGH);
    delay(second);
    digitalWrite(led, LOW);
    delay(second);
    }
  }
