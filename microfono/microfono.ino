const int pho=0; 
const int RLED=11; 

int val = 0; 

void setup()
  {
    Serial.begin(9600);
    pinMode (RLED, OUTPUT); 
  }
  
  void loop()
  {
    val = analogRead(pho);
    Serial.println(val);
    display(500);
    
    if ( val > 200)
      {
        digitalWrite(RLED, HIGH);
      }

    else
      {
        digitalWrite(RLED, LOW);
      }
  }
