int led1=4; //conectar en el pin 4 
void setup() {
  pinMode(led1, OUTPUT);
}


void loop() {
  digitalWrite(led1, HIGH);  //encender led 
  //delay(1000);            // espera de tiempo
  //digitalWrite(led1, LOW);  //apagar led   
  //delay(1000);                       
}
