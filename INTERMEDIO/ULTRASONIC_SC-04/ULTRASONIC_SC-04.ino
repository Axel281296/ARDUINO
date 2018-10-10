int TP=2;// PIN 2 AL TRIG  
int EP=3;// PIN 3 AL ECHO

long du,di;
void setup()
 {
   pinMode(TP,OUTPUT);
   pinMode(EP,INPUT);
  
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
 Serial.println(di);
 
 delay(100);
 }
 
