


void setup() {
  
  pinMode(13,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(1,OUTPUT);
  
  

}

void loop() {
  ;
  

  digitalWrite(13,HIGH);
  
  delay(1000);

  digitalWrite(13,LOW);
  
  delay(1000);

  
  
  

  for (int brightness =0 ; brightness <=255 ; brightness++ ){
    
    analogWrite(9,brightness);
    digitalWrite(1,LOW);
    
    delay(10);
    
    
  }
  

  for (int brightness =255 ; brightness >=0 ; brightness-- ){
    analogWrite(9,brightness);
    
    delay(10);
    

    
  }
  digitalWrite(1,HIGH);


  


}