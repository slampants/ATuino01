void setup() {
  // put your setup code here, to run once:
  for(int pinNumber = 2 ; pinNumber < 7 ; pinNumber++){
     pinMode(pinNumber,INPUT_PULLUP);
   }
  for(int pinNumber = 9 ; pinNumber < 14 ; pinNumber ++){
    pinMode(pinNumber,OUTPUT);
    digitalWrite(pinNumber,LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int pinNumber = 2 ; pinNumber < 7 ; pinNumber++){
    if(digitalRead(pinNumber) == 1){
      digitalWrite(pinNumber + 7,1);
    }
    else if(digitalRead(pinNumber) == 0){
      digitalWrite(pinNumber + 7,0);
    }
  }
}
