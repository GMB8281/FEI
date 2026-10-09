int buttonState;
void setup(){
  pinMode (2, INPUT_PULLUP);
  pinMode (13, OUTPUT);
}
void loop(){
  buttonState = digitalRead(2);
    if (buttonState == HIGH){
      digitalWrite(13,LOW);
    }else{
      digitalWrite(13,HIGH);
    }
}