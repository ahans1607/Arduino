int tiltPin=2;
int tiltVal;
int yellowLED=7;
int blueLED=4;

void setup(){
  Serial.begin(2000000);
  pinMode(tiltPin,INPUT);
  digitalWrite(tiltPin, HIGH);
  pinMode(yellowLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
  }


void loop(){
  tiltVal=digitalRead(tiltPin);
  Serial.println(tiltVal);

  if(tiltVal==0){
    digitalWrite(yellowLED, LOW);
    digitalWrite(blueLED,HIGH);
     }

  

  if(tiltVal==1){
    tiltVal=digitalRead(tiltPin);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(blueLED, LOW);
    }

  }
