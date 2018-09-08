int LED=9;
int linea_1=0;
int linea_2=0;
void setup()
{
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  linea_1=analogRead(A0);
  linea_2=analogRead(A1);
  Serial.println(linea_1);
  Serial.println(linea_2);
  if (linea_1 < 30  || linea_2 > 30)
  {
    digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
    }
 delay(100);
}
