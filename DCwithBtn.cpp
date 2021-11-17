int upBtn=5;
int upVal;

int downBtn=2;
int downVal;

int speedPin=A0;
int dir1=6;
int dir2=7;

int speedVal=255;


void setup() {
  // put your setup code here, to run once:
  
  pinMode(upBtn, INPUT);
  digitalWrite(upBtn, HIGH);
  
  pinMode(downBtn, INPUT);
  digitalWrite(downBtn, HIGH);

  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  
  Serial.begin(2000000);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  upVal=digitalRead(upBtn);
  Serial.print(upVal);
  
  downVal=digitalRead(downBtn);
  Serial.println(downVal);

  if(upVal==0 && downVal==0){
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
    analogWrite(speedPin, speedVal);
    }

  if(upVal==1 && downVal==1){
    analogWrite(speedPin, 0);
    }

}
