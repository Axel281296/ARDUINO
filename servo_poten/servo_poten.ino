#include<Servo.h>
int pote= A1;
int valor;
Servo servo1;
void setup() {
Serial.begin(9600);
servo1.attach(3);
servo1.write(0);
}

void loop() {
valor=analogRead(pote);
valor=map(valor, 0 ,1023, 0, 180);//cambia de analogico a grados
servo1.write(valor);
delay(30);
}
