#include <Servo.h>
Servo sr;
int pos=0;
void setup() {
  Serial.begin(9600);
  sr.attach(4);//PIN DONDE ESTA CONECTADO EL SERVO
  sr.write(0);//POSICION DEL SERVO, 0-180
}

void loop() {
  Serial.println("INGRESE ANGULO");
  while(Serial.available()==0);
  pos= Serial.parseInt();

  if(pos>=0 && pos<=180)
  {
   Serial.println(pos); 
   sr.write(pos);
   delay(3000);
   }
   else
   {
    Serial.println("ERROR");
   }
   
}
