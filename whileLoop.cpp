int redLED=8;
int yellowLED=12;
int yellowBlink=109;
int redBlink=2;
int second=1000;
int j=10;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
 while(j>=1){
  digitalWrite(redLED, HIGH);
  delay(second);
  digitalWrite(redLED, LOW);
  delay(second);
  Serial.println(j);
  j-=1;

  }

exit(0);
   

}
