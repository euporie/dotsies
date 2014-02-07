int buttonPins[5] = {5,6,7,8,9};  // Set a button to any pin
char charMap[27] = {
  'a',
  'b',
  'd',
  'h',
  'p',
  'c',
  'f',
  'l',
  'x',
  'e',
  'j',
  't',
  'i',
  'r',
  'q',
  'g',
  'k',
  'm',
  'n',
  'v',
  'z',
  'v',
  'w',
  's',
  'u',
  'y',
  'o',
};
int read = 0;
int state = 0;

void setup()
{
  int i;
  for (i = 0; i < 5; i++) {
    pinMode(buttonPins[i], INPUT);  // Set the button as an input
    digitalWrite(buttonPins[i], HIGH);  // Pull the button high
  }
}

void loop()
{
  int i;
  do {
    read = 0;
    for (i = 4; i >= 0; i--) {
      read = (read << 1);
      if (digitalRead(buttonPins[i]) == 0) { // if the button goes low
        delay(10);
        read++;
      }
    }

    state = state | read;

  } while (read != 0);

  if (state != 0) {
    Keyboard.write(charMap[state-1]);
    state = 0;
    delay(800);
  }
}