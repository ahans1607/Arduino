 #include <LiquidCrystal.h>
 int rs=7;
 int en=8;
 int d4=9;
 int d5=10;
 int d6=11;
 int d7=12;

String msg="Please Enter Your Name:";
String inputMsg;

 

 LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
 
 
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0){
    lcd.setCursor(0,0);
    lcd.print("Enter Name");
    }
    
  inputMsg=Serial.readString();

//  while(inputMsg == 0){
//      lcd.setCursor(0,0);
//      lcd.print("What is your name?");
//    }
    
  lcd.clear();  
  lcd.setCursor(0,0);
  lcd.print("Hello "+inputMsg);
  delay(5000);
  lcd.clear();
  inputMsg="";
}
