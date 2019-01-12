int rojo=2;
int amar=4;
int verd=7;
void setup() {
 Serial.begin(9600);
 pinMode(rojo,OUTPUT);
 pinMode(amar,OUTPUT);
 pinMode(verd,OUTPUT);
}

void loop() {
 digitalWrite(rojo,HIGH);
 digitalWrite(amar,LOW);
 digitalWrite(verd,LOW);
 delay(100);

 digitalWrite(rojo,LOW);
 digitalWrite(amar,LOW);
 digitalWrite(verd,HIGH);
 delay(100);


 digitalWrite(rojo,LOW);
 digitalWrite(amar,HIGH);
 digitalWrite(verd,LOW);
 delay(50);
}
