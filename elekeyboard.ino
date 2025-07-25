
const int buzzpin = 10;
const int buttonPins[8] = {2, 3, 4, 5, 6, 7, 8, 9};
const int buzztones[8] = {262, 294, 330, 349, 392, 440, 494, 523};

int currentNote = -1;
int lastNote = -1;

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP); // bottoni collegati a GND
  }
  pinMode(buzzpin, OUTPUT);
}

void loop() {
  currentNote = -1;

  for (int i = 0; i < 8; i++) {
    if (digitalRead(buttonPins[i]) == LOW) { // LOW perché INPUT_PULLUP
      currentNote = i;
      break;
    }
  }

  if (currentNote != -1 && currentNote != lastNote) {
    tone(buzzpin, buzztones[currentNote]);
    lastNote = currentNote;
  }

  if (currentNote == -1 && lastNote != -1) {
    noTone(buzzpin);
    lastNote = -1;
  }

  delay(10); // debounce base
}
