int led1=3;
int led2=4;
int led3=5;
int IT=0;
void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {

  while(Serial.available()==0);
  IT = Serial.read() - '0';
    if (IT==1)
    {
     Serial.println("LEDS ENCENDIDOS");
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    }
    else if(IT == 2)
    {
      Serial.println( "LED1 ENCENDIDO");
      digitalWrite(led1,HIGH);
    }
    else if(IT==3)
    {
      Serial.println("LED2 ENCENDIDO");
      digitalWrite(led2,HIGH);
    }
    else if(IT==4)
       {
       Serial.println("LED3 ENCENDIDO");
       digitalWrite(led3,HIGH);
       }
    else if(IT==10) {
     Serial.println("LED1 APAGADO");
     digitalWrite(led1,LOW);
    }
    else if(IT==20) {
     Serial.println("LED2 APAGADO");
     digitalWrite(led2,LOW);
    }
    else if(IT==30) {
     Serial.println("LED3 APAGADO");
     digitalWrite(led3,LOW);
    }
    else if(IT==0)
     {
      Serial.println("LEDS APAGADOS");
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      }
     
  else {
    Serial.println("SYTAXIS ERROR");
  }
}
