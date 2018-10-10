int p1= 0;
int l1= 13;
int se;
void setup() {
Serial.begin(9600);  
}

void loop(){
  se = analogRead(p1);
  Serial.println(se);
  delay(10);
}


