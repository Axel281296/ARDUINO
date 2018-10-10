
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

                      
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address
void setup()
{
  Serial.begin(9600);

  lcd.begin(20,4);   
  for(int i = 0; i< 3; i++)
  {
    lcd.backlight();
    delay(250);
    lcd.noBacklight();
    delay(250);
  }
  lcd.backlight(); 


  lcd.setCursor(0,0); 
  lcd.print("Hello, world!");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("HI!YourDuino.com");
  delay(8000);  


  lcd.clear();
  lcd.setCursor(0,0); 
  lcd.print("Use Serial Mon");
  lcd.setCursor(0,1);
  lcd.print("Type to display");  


}


void loop()  
{
  {
    
    if (Serial.available()) {
      
      delay(100);
      
      lcd.clear();
   
      while (Serial.available() > 0) {
        
        lcd.write(Serial.read());
      }
    }
  }

}




