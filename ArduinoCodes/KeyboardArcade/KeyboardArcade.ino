#include <Keyboard.h>
// Arduino arcade code
// wsaddddddddaaaaaaawwwwwwwwws

#define DEBUG 0

// BugWar

#define PIN_JOYSTICK_UP 2
#define PIN_JOYSTICK_DOWN 3
#define PIN_JOYSTICK_LEFT 4
#define PIN_JOYSTICK_RIGHT 5
#define PIN_BUTTON_CENTER_LEFT 6
#define PIN_BUTTON_CENTER_RIGHT 7
#define PIN_BUTTON_RIGHT_UP_LEFT 8
#define PIN_BUTTON_RIGHT_UP_RIGHT 9
#define PIN_BUTTON_RIGHT_DOWN_LEFT 10
#define PIN_BUTTON_RIGHT_DOWN_RIGHT 11

#define KEY_JOYSTICK_UP 'w'
#define KEY_JOYSTICK_DOWN 's'
#define KEY_JOYSTICK_LEFT 'a'
#define KEY_JOYSTICK_RIGHT 'd'
#define KEY_BUTTON_CENTER_LEFT KEY_ESC
#define KEY_BUTTON_CENTER_RIGHT 'e'
#define KEY_BUTTON_RIGHT_UP_LEFT ' '
#define KEY_BUTTON_RIGHT_UP_RIGHT KEY_RETURN
#define KEY_BUTTON_RIGHT_DOWN_LEFT KEY_DOWN_ARROW
#define KEY_BUTTON_RIGHT_DOWN_RIGHT 'g'


// JACK
//#define PIN_JOYSTICK_UP 2
//#define PIN_JOYSTICK_DOWN 3
//#define PIN_JOYSTICK_LEFT 4
//#define PIN_JOYSTICK_RIGHT 5
//#define PIN_BUTTON_CENTER_LEFT 6
//#define PIN_BUTTON_CENTER_RIGHT 7
//#define PIN_BUTTON_RIGHT_UP_LEFT 8
//#define PIN_BUTTON_RIGHT_UP_RIGHT 9
//#define PIN_BUTTON_RIGHT_DOWN_LEFT 10
//#define PIN_BUTTON_RIGHT_DOWN_RIGHT 11
//
//#define KEY_JOYSTICK_UP 'w'
//#define KEY_JOYSTICK_DOWN 's'
//#define KEY_JOYSTICK_LEFT 'a'
//#define KEY_JOYSTICK_RIGHT 'd'
//#define KEY_BUTTON_CENTER_LEFT ' '
//#define KEY_BUTTON_CENTER_RIGHT KEY_LEFT_ALT
//#define KEY_BUTTON_RIGHT_UP_LEFT KEY_UP_ARROW
//#define KEY_BUTTON_RIGHT_UP_RIGHT 'v'
//#define KEY_BUTTON_RIGHT_DOWN_LEFT KEY_DOWN_ARROW
//#define KEY_BUTTON_RIGHT_DOWN_RIGHT 'g'

// MR. SANDMAN
//#define PIN_JOYSTICK_UP 2
//#define PIN_JOYSTICK_DOWN 3
//#define PIN_JOYSTICK_LEFT 4
//#define PIN_JOYSTICK_RIGHT 5
//#define PIN_BUTTON_CENTER_LEFT 6
//#define PIN_BUTTON_CENTER_RIGHT 7
//#define PIN_BUTTON_RIGHT_UP_LEFT 8
//#define PIN_BUTTON_RIGHT_UP_RIGHT 9
//#define PIN_BUTTON_RIGHT_DOWN_LEFT 10
//#define PIN_BUTTON_RIGHT_DOWN_RIGHT 11
//#define KEY_JOYSTICK_UP ' '
//#define KEY_JOYSTICK_DOWN 's'
//#define KEY_JOYSTICK_LEFT 'a'
//#define KEY_JOYSTICK_RIGHT 'd'
//#define KEY_BUTTON_CENTER_LEFT KEY_ESC
//#define KEY_BUTTON_CENTER_RIGHT KEY_RETURN
//#define KEY_BUTTON_RIGHT_UP_LEFT 'c'
//#define KEY_BUTTON_RIGHT_UP_RIGHT 'v'
//#define KEY_BUTTON_RIGHT_DOWN_LEFT 'k'
//#define KEY_BUTTON_RIGHT_DOWN_RIGHT 'l'

//MALLOY
//#define PIN_JOYSTICK_UP 2
//#define PIN_JOYSTICK_DOWN 3
//#define PIN_JOYSTICK_LEFT 4
//#define PIN_JOYSTICK_RIGHT 5
//#define PIN_BUTTON_CENTER_LEFT 6
//#define PIN_BUTTON_CENTER_RIGHT 7
//#define PIN_BUTTON_RIGHT_UP_LEFT 9
//#define PIN_BUTTON_RIGHT_UP_RIGHT 8
//#define PIN_BUTTON_RIGHT_DOWN_LEFT 12
//#define PIN_BUTTON_RIGHT_DOWN_RIGHT 11
//
//#define KEY_JOYSTICK_UP ' '
//#define KEY_JOYSTICK_DOWN 'g'
//#define KEY_JOYSTICK_LEFT KEY_LEFT_ARROW
//#define KEY_JOYSTICK_RIGHT KEY_RIGHT_ARROW
//#define KEY_BUTTON_CENTER_LEFT KEY_ESC
//#define KEY_BUTTON_CENTER_RIGHT KEY_RETURN
//#define KEY_BUTTON_RIGHT_UP_LEFT 'd'
//#define KEY_BUTTON_RIGHT_UP_RIGHT 'v'
//#define KEY_BUTTON_RIGHT_DOWN_LEFT 's'
//#define KEY_BUTTON_RIGHT_DOWN_RIGHT KEY_UP_ARROW


void setup() {
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(PIN_JOYSTICK_UP, INPUT_PULLUP);
  pinMode(PIN_JOYSTICK_DOWN, INPUT_PULLUP);
  pinMode(PIN_JOYSTICK_LEFT, INPUT_PULLUP);
  pinMode(PIN_JOYSTICK_RIGHT, INPUT_PULLUP);
  pinMode(PIN_BUTTON_CENTER_LEFT, INPUT_PULLUP);
  pinMode(PIN_BUTTON_CENTER_RIGHT, INPUT_PULLUP);
  pinMode(PIN_BUTTON_RIGHT_UP_LEFT, INPUT_PULLUP);
  pinMode(PIN_BUTTON_RIGHT_UP_RIGHT, INPUT_PULLUP);
  pinMode(PIN_BUTTON_RIGHT_DOWN_LEFT, INPUT_PULLUP);
  pinMode(PIN_BUTTON_RIGHT_DOWN_RIGHT, INPUT_PULLUP);

  Keyboard.begin();

  #ifdef DEBUG
  Serial.begin(9600);
  #endif
}

void loop() {
  if(digitalRead(PIN_JOYSTICK_UP) == LOW){
    Keyboard.press(KEY_JOYSTICK_UP);
    #ifdef DEBUG
    Serial.println("KEY_JOYSTICK_UP");
    #endif
  }
  else{
    Keyboard.release(KEY_JOYSTICK_UP);
  }

  if(digitalRead(PIN_JOYSTICK_DOWN) == LOW){
    Keyboard.press(KEY_JOYSTICK_DOWN);
    #ifdef DEBUG
    Serial.println("KEY_JOYSTICK_DOWN");
    #endif
  }
  else{
    Keyboard.release(KEY_JOYSTICK_DOWN);
  }

  if(digitalRead(PIN_JOYSTICK_LEFT) == LOW){
    Keyboard.press(KEY_JOYSTICK_LEFT);
    #ifdef DEBUG
    Serial.println("KEY_JOYSTICK_LEFT");
    #endif
  }
  else{
    Keyboard.release(KEY_JOYSTICK_LEFT);
  }

  if(digitalRead(PIN_JOYSTICK_RIGHT) == LOW){
    Keyboard.press(KEY_JOYSTICK_RIGHT);
    #ifdef DEBUG
    Serial.println("KEY_JOYSTICK_RIGHT");
    #endif
  }
  else{
    Keyboard.release(KEY_JOYSTICK_RIGHT);
  }

  if(digitalRead(PIN_BUTTON_CENTER_LEFT) == LOW){
    Keyboard.press(KEY_BUTTON_CENTER_LEFT);
    #ifdef DEBUG
    Serial.println(KEY_BUTTON_CENTER_LEFT);
    #endif
  }
  else{
    Keyboard.release(KEY_BUTTON_CENTER_LEFT);
  }


  if(digitalRead(PIN_BUTTON_CENTER_RIGHT) == LOW){
    Keyboard.press(KEY_BUTTON_CENTER_RIGHT);
    #ifdef DEBUG
    Serial.println(KEY_BUTTON_CENTER_RIGHT);
    #endif
  }
  else{
    Keyboard.release(KEY_BUTTON_CENTER_RIGHT);
  }

  if(digitalRead(PIN_BUTTON_RIGHT_UP_LEFT) == LOW){
    Keyboard.press(KEY_BUTTON_RIGHT_UP_LEFT);
    #ifdef DEBUG
    Serial.println("KEY_BUTTON_RIGHT_UP_LEFT");
    #endif
  }
  else{
    Keyboard.release(KEY_BUTTON_RIGHT_UP_LEFT);
  }

  if(digitalRead(PIN_BUTTON_RIGHT_UP_RIGHT) == LOW){
    Keyboard.press(KEY_BUTTON_RIGHT_UP_RIGHT);
    #ifdef DEBUG
    Serial.println("KEY_BUTTON_RIGHT_UP_RIGHT");
    #endif
  }
  else{
    Keyboard.release(KEY_BUTTON_RIGHT_UP_RIGHT);
  }

  if(digitalRead(PIN_BUTTON_RIGHT_DOWN_LEFT) == LOW){
    Keyboard.press(KEY_BUTTON_RIGHT_DOWN_LEFT);
    #ifdef DEBUG
    Serial.println("KEY_BUTTON_RIGHT_DOWN_LEFT");
    #endif
  }
  else{
    Keyboard.release(KEY_BUTTON_RIGHT_DOWN_LEFT);
  }

  if(digitalRead(PIN_BUTTON_RIGHT_DOWN_RIGHT) == LOW){
    Keyboard.press(KEY_BUTTON_RIGHT_DOWN_RIGHT);
    #ifdef DEBUG
    Serial.println("KEY_BUTTON_RIGHT_DOWN_RIGHT");
    #endif
  }
  else{
    Keyboard.release(KEY_BUTTON_RIGHT_DOWN_RIGHT);
  }
  
  delay(50);
}

