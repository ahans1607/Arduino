int redLED=4;
int buttonPin=12;
int buttonRead;
bool onOff=false;
int ledState=0;
int buttonOld;
int buttonNew=1;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(buttonPin, INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  buttonNew=digitalRead(buttonPin);
  Serial.println(buttonRead);

  if(buttonOld==0 && buttonNew==1){
    if (ledState==0){
      digitalWrite(redLED, HIGH);
      ledState=1;
      }
      else{
        digitalWrite(redLED, LOW);
        ledState=0;
        }
    }
    buttonOld=buttonNew;
}
