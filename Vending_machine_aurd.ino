/*
  CTC GO! CORE MODULE 
  LESSON 05 - Showing messages on PC

  This sketch is written to accompany Activity 2 in Lesson 05 of the CTC GO! core module
*/

  // initialising the pins and other variables.
  int buttonA = 2;
  int buttonB = 3;
  int blueled = 4;
  int redled = 5;
  int button_stateA = 0;
  int button_stateB = 0;
  
  void setup()
  {
    pinMode(blueled, OUTPUT);
    pinMode(redled, OUTPUT);
 
  
  
    
    Serial.begin(9600);
    pinMode(buttonA, INPUT);
    pinMode(buttonB, INPUT);
  }
  
  
  void loop()
   {
  button_stateA = digitalRead(buttonA);
  button_stateB = digitalRead(buttonB);

  if (button_stateA == LOW & button_stateB == LOW)
    {
      Serial.print("Waiting...");
      delay(1000);
    }

   else if (button_stateA == HIGH & button_stateB == LOW)
    {
      Serial.print("Vending Soda");
      digitalWrite(blueled, HIGH);
      delay(1000);
      digitalWrite(blueled, LOW);
    }

    else if (button_stateA == LOW & button_stateB == HIGH)
      {
        Serial.print("Vending water");
        digitalWrite(blueled, HIGH);
        delay(1000);
        digitalWrite(blueled, LOW);
      }

    else if (button_stateA == HIGH & button_stateB == HIGH)
      {
        Serial.print("Product not available");
        digitalWrite(redled, HIGH);
        delay(1000);
        digitalWrite(redled, LOW); 
      }
}
