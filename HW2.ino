/*
 HW 2 - Text Entry Device
 
 Sends characters to a connected PC via button presses.

 modified 11 Sep 2016
 by Mike Singer for IDD 2016
 
 The circuit:

 * pushbutton connected to D0 and 3V3
 * pushbutton connected to D1 and 3V3
 * pushbutton connected to D2 and 3V3
 * pushbutton connected to D3 and 3V3
 * pushbutton connected to D4 and 3V3
 * pushbutton connected to D8 and 3V3
 * pushbutton connected to D9 and 3V3
 * pushbutton connected to D10 and 3V3
 * pushbutton connected to D11 and 3V3
 * pushbutton connected to D12 and 3V3
 */

// do not use the cloud functions - assume programming through Arduino IDE
#if defined(ARDUINO) 
SYSTEM_MODE(MANUAL); 
#endif

// set pin numbers
const int button1 = D0;                      // button is connected to D0
const int button2 = D1;                      // button is connected to D1
const int button3 = D2;                      // button is connected to D2
const int button4 = D3;                      // button is connected to D3
const int button5 = D4;                      // button is connected to D4
const int button6 = D8;                      // button is connected to D8
const int button7 = D9;                      // button is connected to D9
const int button8 = D10;                     // button is connected to D10
const int button9 = D11;                     // button is connected to D11
const int button10 = D12;                    // button is connected to D12

void setup()
{
  pinMode(button1, INPUT_PULLDOWN);    // sets pin as input
  pinMode(button2, INPUT_PULLDOWN);    // sets pin as input
  pinMode(button3, INPUT_PULLDOWN);    // sets pin as input
  pinMode(button4, INPUT_PULLDOWN);    // sets pin as input
  pinMode(button5, INPUT_PULLDOWN);    // sets pin as input
  pinMode(button6, INPUT_PULLDOWN);    // sets pin as input
  pinMode(button7, INPUT_PULLDOWN);    // sets pin as input
  pinMode(button8, INPUT_PULLDOWN);    // sets pin as input
  pinMode(button9, INPUT_PULLDOWN);    // sets pin as input
  pinMode(button10, INPUT_PULLDOWN);   // sets pin as input
  
}

// checks to see which buttons are pressed and returns corresponding letters
void loop()
{
  if(digitalRead(button1) == HIGH && digitalRead(button2) == HIGH) {
    Serial.print("b");               // prints "b"
  }
  else if(digitalRead(button1) == HIGH && digitalRead(button7) == HIGH) {
    Serial.print("k");               // prints "k"
  }
  else if(digitalRead(button1) == HIGH && digitalRead(button6) == HIGH) {
    Serial.print("j");               // prints "j"
  }
  else if(digitalRead(button2) == HIGH && digitalRead(button3) == HIGH) {
    Serial.print("d");               // prints "d"
  }
  else if(digitalRead(button2) == HIGH && digitalRead(button8) == HIGH) {
    Serial.print("m");               // prints "m"
  }
  else if(digitalRead(button2) == HIGH && digitalRead(button7) == HIGH) {
    Serial.print("l");               // prints "l"
  }
  else if(digitalRead(button3) == HIGH && digitalRead(button4) == HIGH) {
    Serial.print("f");               // prints "f"
  }
  else if(digitalRead(button3) == HIGH && digitalRead(button9) == HIGH) {
    Serial.print("o");               // prints "o"
  }
  else if(digitalRead(button3) == HIGH && digitalRead(button8) == HIGH) {
    Serial.print("n");               // prints "n"
  }
  else if(digitalRead(button4) == HIGH && digitalRead(button5) == HIGH) {
    Serial.print("h");               // prints "h"
  }
  else if(digitalRead(button4) == HIGH && digitalRead(button10) == HIGH) {
    Serial.print("q");               // prints "q"
  }
  else if(digitalRead(button4) == HIGH && digitalRead(button9) == HIGH) {
    Serial.print("p");               // prints "p"
  }
  else if(digitalRead(button5) == HIGH && digitalRead(button10) == HIGH) {
    Serial.print("r");               // prints "r"
  }
  else if(digitalRead(button6) == HIGH && digitalRead(button7) == HIGH) {
    Serial.print("t");               // prints "t"
  }
  else if(digitalRead(button7) == HIGH && digitalRead(button8) == HIGH) {
    Serial.print("v");               // prints "v"
  }
  else if(digitalRead(button8) == HIGH && digitalRead(button9) == HIGH) {
    Serial.print("x");               // prints "x"
  }
  else if(digitalRead(button9) == HIGH && digitalRead(button10) == HIGH) {
    Serial.print("z");               // prints "z"
  }
  else if(digitalRead(button1) == HIGH) {
    delay(100);
    if(digitalRead(button2) != HIGH && digitalRead(button7) != HIGH && digitalRead(button6) != HIGH){
      Serial.print("a");              // prints "a"
    }
  }
  else if(digitalRead(button2) == HIGH) {
    delay(100);
    if(digitalRead(button1) != HIGH && digitalRead(button3) != HIGH && digitalRead(button8) != HIGH && digitalRead(button7) != HIGH){ 
      Serial.print("c");               // prints "c"
    }
  }
 else if(digitalRead(button3) == HIGH) {
    delay(100);
    if(digitalRead(button2) != HIGH && digitalRead(button4) != HIGH && digitalRead(button9) != HIGH && digitalRead(button8) != HIGH){
    Serial.print("e");               // prints "e"
    }
  }
  else if(digitalRead(button4) == HIGH) {
    delay(100);
    if(digitalRead(button3) != HIGH && digitalRead(button5) != HIGH && digitalRead(button10) != HIGH && digitalRead(button9) != HIGH){
    Serial.print("g");               // prints "g"
    }
  }
  else if(digitalRead(button5) == HIGH) {
    delay(100);
    if(digitalRead(button4) != HIGH && digitalRead(button10) != HIGH){
    Serial.print("i");               // prints "i"
    }
  }
  else if(digitalRead(button6) == HIGH) {
    delay(100);
    if(digitalRead(button1) != HIGH && digitalRead(button7) != HIGH){
    Serial.print("s");               // prints "s"
    }
  }
  else if(digitalRead(button7) == HIGH) {
    delay(100);
    if(digitalRead(button1) != HIGH && digitalRead(button2) != HIGH && digitalRead(button6) != HIGH && digitalRead(button8) != HIGH){
    Serial.print("u");               // prints "u"
    }
  }
  else if(digitalRead(button8) == HIGH) {
    delay(100);
    if(digitalRead(button2) != HIGH && digitalRead(button3) != HIGH && digitalRead(button7) != HIGH && digitalRead(button9) != HIGH){
    Serial.print("w");               // prints "w"
    }
  }
  else if(digitalRead(button9) == HIGH) {
    delay(100);
    if(digitalRead(button3) != HIGH && digitalRead(button4) != HIGH && digitalRead(button8) != HIGH && digitalRead(button10) != HIGH){
    Serial.print("y");               // prints "y"
    }
  }
  else if(digitalRead(button10) == HIGH) {
    delay(100);
    if(digitalRead(button4) != HIGH && digitalRead(button5) != HIGH && digitalRead(button9) != HIGH){
    Serial.print(" ");               // prints " " (space)
    }
  }

  delay(200);                      // waits for 200mS

}
