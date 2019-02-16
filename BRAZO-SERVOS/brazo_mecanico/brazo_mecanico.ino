#include<Servo.h>

Servo bg;//base giratoria
Servo hb;//hombro
Servo cd;//codo
Servo mo;//mano
Servo mc;//muneca
Servo pz;//pinza

int valor1,valor2,valor3,valor4;

int pbg=0;// posicion base giratoria
int phb=0;//posicion hombro
int pcd=0;//posicion codo
int pmo=0;//posicion mano
int pmc=0;//posicion muneca
int ppz=0;//posicion pinza

//analogo 1 
int posx= A0;//posx
int posy= A1;//posy
//analogo 2
int posxa= A2;//posx
int posya= A3;//posy

int bt1= A4;// botom1 
int bt2= A5;// botom2

void setup() {
Serial.begin(9600);
bg.attach(3);
bg.write(0);
hb.attach(4);
hb.write(0);
cd.attach(5);
cd.write(0);
mo.attach(6);
mo.write(0);
mc.attach(7);
mc.write(0);
pz.attach(8);
pz.write(0);
}

void loop() {

valor1 = analogRead(posx);
valor2 =analogRead(posy);
valor3 =analogRead(posxa);
valor4 =analogRead(posya); 
base();

delay(3000); 
}


void base(){
  if(valor1>0)
{
pbg=pbg+1;
  }
else if (valor1<0){
 pbg=pbg-1; 
  }
bg.write(pbg);
}

void hombro(){
valor 
}
 
