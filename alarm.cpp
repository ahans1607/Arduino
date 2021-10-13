int beeper=9;
int oneMilliSecond=1;
int twoMilliSecond=2;
int j;

void setup() {
  // put your setup code here, to run once:
  pinMode(beeper, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=100;j+=1){
      digitalWrite(beeper, HIGH);
      delay(oneMilliSecond);
      digitalWrite(beeper, LOW);
      delay(oneMilliSecond);
    }
    
  for(j=1;j<=100;j+=1){
      digitalWrite(beeper, HIGH);
      delay(twoMilliSecond);
      digitalWrite(beeper, LOW);
      delay(twoMilliSecond);
    }
    exit(0);

}
