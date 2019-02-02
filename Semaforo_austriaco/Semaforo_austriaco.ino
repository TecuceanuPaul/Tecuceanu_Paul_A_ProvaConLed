int rosso=13,giallo=12,verde=11,red=3,yellow=2,green=1;
int durata=1000,durataLampeggi=450,numeroLampeggi=4;
void setup(){
  pinMode(rosso,OUTPUT);
  pinMode(giallo,OUTPUT);
  pinMode(verde,OUTPUT); 
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
}
void loop(){
  digitalWrite(rosso, HIGH); 
  digitalWrite(green, HIGH); 
     delay(durata);
     for(int i=0;i<numeroLampeggi+1;i++)
      {
           digitalWrite(green, HIGH);  
  delay(durataLampeggi);    
      digitalWrite(green, LOW);
        delay(durataLampeggi);    

      }         
 
  digitalWrite(giallo, HIGH);
    digitalWrite(yellow, HIGH);  
    delay (durata);    
  digitalWrite(giallo, LOW); 
   digitalWrite(rosso, LOW); 
    digitalWrite(yellow, LOW);  
      digitalWrite(verde, HIGH);
      digitalWrite(red, HIGH);
  delay(durata);   
      digitalWrite(verde, LOW);
      for(int i=0;i<numeroLampeggi+1;i++)
      { 
           digitalWrite(verde, HIGH);  
  delay(durataLampeggi);    
      digitalWrite(verde, LOW);
        delay(durataLampeggi);    
      }

        digitalWrite(giallo, HIGH);
    digitalWrite(yellow, HIGH);  
    delay (durata);    
  digitalWrite(giallo, LOW);  
    digitalWrite(yellow, LOW);
      digitalWrite(red, LOW); 
  
}
