int led=9;//led 
int pulsor=5;//boton
int in=0; //valor temporal
int estado= 0;//estado actual del pulsor
int old=0; //valor anterior
void setup() {
 pinMode(led,OUTPUT); 
 pinMode(pulsor,INPUT); 
}

void loop() {
 in=digitalRead(pulsor); 
 if( (in==HIGH) && (estado==LOW)){
  estado= estado-1;
  delay(10);
  } 
old=in;
 if(estado==1){
  digitalWrite(led,HIGH);
  } 
  else {
    digitalWrite(led,LOW);
    } 
}
