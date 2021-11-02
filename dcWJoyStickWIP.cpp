int VRxPin = A0;
int VRyPin = A1;
int SwPin = 2;
int SpinVal;
int xAxVal;
int yAxVal;

int speedPin=A2;
int dir1=8;
int dir2=9;

float speedVal;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(2000000);
  
  pinMode(VRxPin, INPUT);
  pinMode(VRyPin, INPUT);
  digitalWrite(SwPin, HIGH);
  pinMode(SwPin, INPUT);

  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  xAxVal=analogRead(VRxPin);
  yAxVal=analogRead(VRyPin);
  SpinVal=digitalRead(SwPin);

  speedVal=((-255./1023.)*yAxVal + 255);
  
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
  
  analogWrite(speedPin, speedVal);

//  Serial.println(yAxVal);
  Serial.println(speedVal);

}
