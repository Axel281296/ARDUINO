
int f=3;//PIN DEL LED 
int IT=0;//VARAIBALE TEMPORAL 
void setup() {
  Serial.begin(9600);
  pinMode(f,OUTPUT);
}

void loop() {
  while(Serial.available()==0);
  IT = Serial.read()- '0';
    
    if(IT == 1)
    {
      Serial.println( "LED ENCENDIDO");
      digitalWrite(f,HIGH);
    }
    else if(IT==0)
    {
      Serial.println("LED APAGADO");
      digitalWrite(f,LOW);
    }
  else {
    Serial.println("SYTAXIS ERROR");
    }
}
