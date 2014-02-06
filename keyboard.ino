int buttonPin9 = 9;  // Set a button to any pin
int buttonPin8 = 8;  // Set a button to any pin
int buttonPin7 = 7;  // Set a button to any pin
int buttonPin6 = 6;  // Set a button to any pin
int buttonPin5 = 5;  // Set a button to any pin
void setup()
{
  pinMode(buttonPin9, INPUT);  // Set the button as an input
  digitalWrite(buttonPin9, HIGH);  // Pull the button high
  
  pinMode(buttonPin8, INPUT);  // Set the button as an input
  digitalWrite(buttonPin8, HIGH);  // Pull the button high
  
   pinMode(buttonPin7, INPUT);  // Set the button as an input
  digitalWrite(buttonPin7, HIGH);  // Pull the button high
  
    pinMode(buttonPin6, INPUT);  // Set the button as an input
  digitalWrite(buttonPin6, HIGH);  // Pull the button high
  
   pinMode(buttonPin5, INPUT);  // Set the button as an input
  digitalWrite(buttonPin5, HIGH);  // Pull the button high
}

void loop()
{
  if (digitalRead(buttonPin9) == 0)  // if the button goes low
  {
    Keyboard.write('9');  // send a 'z' to the computer via Keyboard HID
    delay(1000);  // delay so there aren't a kajillion z's
  }
  
  if (digitalRead(buttonPin8) == 0)  // if the button goes low
  {
    Keyboard.write('8');  // send a 'z' to the computer via Keyboard HID
    delay(1000);  // delay so there aren't a kajillion z's
  }
  
  
   if (digitalRead(buttonPin7) == 0)  // if the button goes low
  {
    Keyboard.write('7');  // send a 'z' to the computer via Keyboard HID
    delay(1000);  // delay so there aren't a kajillion z's
  }
  
  
   if (digitalRead(buttonPin6) == 0)  // if the button goes low
  {
    Keyboard.write('6');  // send a 'z' to the computer via Keyboard HID
    delay(1000);  // delay so there aren't a kajillion z's
  }
  
  
   if (digitalRead(buttonPin5) == 0)  // if the button goes low
  {
    Keyboard.write('5');  // send a 'z' to the computer via Keyboard HID
    delay(1000);  // delay so there aren't a kajillion z's
  }
}
