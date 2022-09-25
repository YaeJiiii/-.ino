#define PIN_LED 7

void setup() {
  pinMode(PIN_LED,OUTPUT); 
}

void loop() {
  
  digitalWrite(PIN_LED,HIGH);   // 
  delay(1000);      // 1초 대기
  digitalWrite(PIN_LED,LOW); 
  delay(1000); 
  
  for (int i = 0; i <=4; i++) {
  
   digitalWrite(PIN_LED, HIGH);
   delay(200);
   digitalWrite(PIN_LED, LOW);
   delay(200);
     }
  while (1) {
    digitalWrite(PIN_LED,1);
    
  }
   
    
    
    }
  
  
