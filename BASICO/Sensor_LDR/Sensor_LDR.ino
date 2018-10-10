int LED=4; //PIN DEL LED  
int LDR=0; //PIN DEL LDR     

int luz = 0;       
int valor_sensor = 0;       
int valor_limite = 495;  


void setup() {      
  Serial.begin(9600);    
  pinMode(LED,OUTPUT);
  pinMode(LDR,INPUT);
}

void loop () 
{
  valor_sensor = analogRead(LDR); 
  luz = (5.0 * valor_sensor * 100.0)/1024.0; 
  Serial.print(luz);  
  Serial.println(" Luz");             
  delay(300);                       
  
  if (luz <= valor_limite)   
  {
    digitalWrite (LED, LOW);  
  }
  if (luz > valor_limite)   
  {
    digitalWrite (LED, HIGH); 
  }
}
