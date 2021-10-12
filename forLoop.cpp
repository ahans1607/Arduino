int redLED=8;
int yellowLED=12;
int yellowBlink=2;
int redBlink=2;
int second=1000;
int j;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=yellowBlink;j+=1){
    digitalWrite(yellowLED, HIGH);
    delay(second);
    digitalWrite(yellowLED, LOW);
    delay(second);
    }

   for(j=1;j<=redBlink;j+=1){
    digitalWrite(redLED, HIGH);
    delay(second);
    digitalWrite(redLED, LOW);
    delay(second);
    }

}
