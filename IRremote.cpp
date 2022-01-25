#include <IRremote.h>
int  IRpin = 5;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(IRpin, ENABLE_LED_FEEDBACK);  

}

void loop() {
  // put your main code here, to run repeatedly:

  if(IrReceiver.decode()){
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
    delay(500);
    IrReceiver.resume();
    }

}
