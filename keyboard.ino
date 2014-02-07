int buttonPins[5] = {5,6,7,8,9};  // Set a button to any pin
char charMap[28] = {
  'e',
  'd',
  'i',
  'c',
  'l',
  'h',
  'v',
  'b',
  'n',
  'k',
  'u',
  'g',
  't',
  's',
  ' ',
  'a',
  'o',
  'm',
  'y',
  'j',
  'x',
  'r',
  ' ',
  'f',
  'w',
  'q',
  'z',
  'p'
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
    for (i = 0; i < 5; i++) {
      if (digitalRead(buttonPins[i]) == 0) { // if the button goes low
        delay(10);
        read++;
      }
      if (i<4) {
        read = (read << 1);
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