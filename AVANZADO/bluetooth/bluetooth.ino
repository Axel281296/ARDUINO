#include <SoftwareSerial.h>


SoftwareSerial hs(2,3); //TX, RX

char NAME[15]= "HC-06 AS";
char BPS = '4'; 
char psw [5]= "2812";  
 void setup()
{
   hs.begin(9600);
   pinMode(13,OUTPUT);
   digitalWrite(13,HIGH);
   delay(4000);
    digitalWrite(13,LOW);
     
     hs.print("AT");
     delay(1000);
     
     hs.print("AT+NAME");
     hs.print(NAME);
     delay(1000);
    
     hs.print("AT+BAUD");
     hs.print(BPS);
     delay(1000);
   
     hs.print("AT+PIN");
     hs.print(psw);
     delay(1000);
 }

void loop()
{
 digitalWrite(13,!digitalRead(13));
 delay(300);
} 
