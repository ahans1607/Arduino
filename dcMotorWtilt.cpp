int EN1=11;
int IN1=10;
int IN2=9;
int motSpeed;

int tiltPin=46;
int tiltVal;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(2000000);
  pinMode(EN1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(tiltPin, INPUT);
  digitalWrite(tiltPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
 

  tiltVal=digitalRead(tiltPin);
  Serial.println(tiltVal);

  if(tiltVal==0){
    motSpeed=255;
     analogWrite(EN1, motSpeed);
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, HIGH);
    }

  if(tiltVal==1){
    motSpeed=0;
     analogWrite(EN1, motSpeed);
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, LOW);
    }
}
