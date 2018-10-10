int timer =1000;
int matriz [3]={2,4,6};
int cont=3;
void setup() {
  for(int pin=0;pin<cont;pin++)
  pinMode(matriz[pin],OUTPUT);
}

void loop() {
 for(int pin=0;pin<cont;pin++)
 {
   digitalWrite(matriz[pin],HIGH);
   delay(timer);
   digitalWrite(matriz[pin],LOW);
 }
 
} 
