int buttonPins[5] = {5,6,7,8,9};  // Set a button to any pin
char charMap[28] = {
  'a',
  'b',
  'c',
  'd',
  'e',
  'f',
  'g',
  'h',
  'i',
  'j',
  'k',
  'l',
  'm',
  'n',
  'o',
  'p',
  'q',
  'r',
  's',
  't',
  'u',
  'v',
  'w',
  'x',
  'y',
  'z'
};
int flag = 0;
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
      read = (read << 1);
      if (digitalRead(buttonPins[i]) == 0) { // if the button goes low
        flag = 1;
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