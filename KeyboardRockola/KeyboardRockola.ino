#define KEY_1 11
#define KEY_2 12


#define KEY_VALUE1 'a'
#define KEY_VALUE2 's'

void setup() {
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(KEY_1, INPUT_PULLUP);
  pinMode(KEY_2, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {

  if(digitalRead(KEY_1) == LOW){
    Keyboard.press(KEY_VALUE1);
  }
  else{
    Keyboard.release(KEY_VALUE1);
  }
  
  if(digitalRead(KEY_2) == LOW){
    Keyboard.press(KEY_VALUE2);
  }
  else{
    Keyboard.release(KEY_VALUE2);
  }
  delay(50);
}

//
