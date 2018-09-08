#define TP 2 
#define EP 3
#define LED 5
long du,di;
void setup()
 {
   pinMode(TP,OUTPUT);
   pinMode(EP,INPUT);
   pinMode(LED,OUTPUT);
 }
void loop()
 {
 digitalWrite(TP,LOW);
 delayMicroseconds(2);
 
 digitalWrite(TP,HIGH);
 delayMicroseconds(10);
 digitalWrite(TP,LOW);
 
 du= pulseIn(EP,HIGH);
 di=du/58;
 analogWrite(LED,di);
 
 delay(100);
 }
 
