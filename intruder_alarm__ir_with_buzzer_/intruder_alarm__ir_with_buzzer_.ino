
int IRSensor = 2; 
int buzzer = 13; 


void setup() 
{
 pinMode (IRSensor, INPUT); 
  pinMode (buzzer, OUTPUT); 
Serial.begin(9600);
}
void loop()
{
  
  int statusSensor = digitalRead (IRSensor);
  if (statusSensor == 1)
   { digitalWrite(buzzer, HIGH); 
  }
  else
  {
    digitalWrite(buzzer, LOW); 
  }
Serial.print("ir:");
Serial.println(statusSensor);
}
