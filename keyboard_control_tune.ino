#include <Keypad.h>
#include <pitches.h>

int BUZZER_PIN = 33;
//melody 1
int airtelMelody[]={
  NOTE_B4, NOTE_B5, NOTE_FS5, NOTE_DS5,
  NOTE_B5, NOTE_FS5, NOTE_DS5, NOTE_C5,
  NOTE_C6, NOTE_G6, NOTE_E6, NOTE_C6, NOTE_G6, NOTE_E6,
  
  NOTE_B4, NOTE_B5, NOTE_FS5, NOTE_DS5, NOTE_B5,
  NOTE_FS5, NOTE_DS5, NOTE_DS5, NOTE_E5, NOTE_F5,
  NOTE_F5, NOTE_FS5, NOTE_G5, NOTE_G5, NOTE_GS5, NOTE_A5, NOTE_B5
};
int airtelNoteDurations[] = {
  16, 16, 16, 16,
  32, 16, 8, 16,
  16, 16, 16, 32, 16, 8,
  
  16, 16, 16, 16, 32,
  16, 8, 32, 32, 32,
  32, 32, 32, 32, 32, 16, 8
};
//melody 2
int birthdayMelody[] = {
  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_F4, NOTE_E4,
  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_G4, NOTE_F4,
  NOTE_C4, NOTE_C4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_E4, NOTE_D4,
  NOTE_AS4, NOTE_AS4, NOTE_A4, NOTE_F4, NOTE_G4, NOTE_F4
};

int birthdayNoteDurations[] = {
  4, 8, 4, 4, 4, 2,
  4, 8, 4, 4, 4, 2,
  4, 8, 4, 4, 4, 4, 2,
  4, 8, 4, 4, 4, 2
};
//melody 3
int fluteMelody[] = {
  NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_G5, NOTE_G5,

  NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5,

  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_G5,
  NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4,

  
};

int fluteNoteDurations[] = {
  
  8, 8, 8, 8, 8, 8, 4,
  8, 8, 4, 8, 8, 4,

  8, 8, 8, 8, 8, 8, 4,
  8, 8, 4, 8, 4,

  8, 8, 8, 4, 8, 8, 4,
  8, 8, 8, 8, 8, 2,

};
//melody 4
int harryPotterMelody[] = {
  NOTE_E4, NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_B4, NOTE_A4,
  NOTE_G4, NOTE_FS4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_B4,

  NOTE_E4, NOTE_G4, NOTE_FS4, NOTE_D4, NOTE_E4, NOTE_FS4,
  NOTE_A4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_A4,

  NOTE_E5, NOTE_D5, NOTE_B4, NOTE_A4, NOTE_G4,
  NOTE_E4, NOTE_E4, NOTE_G4, NOTE_FS4, NOTE_E4
};

int harryPotterDurations[] = {
  4, 8, 8, 4, 4, 4,
  4, 4, 4, 4, 4, 2,

  
  4, 8, 8, 4, 4, 4,
  4, 4, 4, 4, 4, 2,

  4, 4, 4, 4, 2,
  4, 4, 8, 8, 2
};
// melody 5
int twinkleMelody[] = {
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4,
  
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4,

  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4
};

int twinkleDurations[] = {
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,

  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,

  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2
};
//melody 6
int jingleBellsMelody[] = {
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4,
  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4,
  
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4,
  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4,
  
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4,
  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4
};

int jingleBellsDurations[] = {
  4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 2,
  
  4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 2,
  
  4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 2
};
//melody 7
int oldMacDonaldMelody[] = {
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_E4,
  NOTE_E4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_E4,
  
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_E4,
  NOTE_E4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_E4,
  
  NOTE_E4, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_E4,
  NOTE_E4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_E4
};

int oldMacDonaldDurations[] = {
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2,
  
  4, 4, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 4, 2
};
// melody 8
int DecomoMelody[] = {
 NOTE_E5, NOTE_E5, REST, NOTE_E5, REST, NOTE_C5, NOTE_E5,
  NOTE_G5, REST, NOTE_G4, REST, 
  NOTE_C5, NOTE_G4, REST, NOTE_E4,
  NOTE_A4, NOTE_B4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5,
  REST, NOTE_E5,NOTE_C5, NOTE_D5, NOTE_B4,
  NOTE_C5, NOTE_G4, REST, NOTE_E4,
  NOTE_A4, NOTE_B4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5,
  REST, NOTE_E5,NOTE_C5, NOTE_D5, NOTE_B4,

};

int DecomoNoteDurations[] = {
   8, 8, 8, 8, 8, 8, 8,
  4, 4, 8, 4, 
  4, 8, 4, 4,
  4, 4, 8, 4,
  8, 8, 8, 4, 8, 8,
  8, 4,8, 8, 4,
  4, 8, 4, 4,
  4, 4, 8, 4,
  8, 8, 8, 4, 8, 8,
  8, 4,8, 8, 4,
  
};

int SubwaysurfersMelody[] = {
  NOTE_C4, REST, NOTE_G4, REST, NOTE_AS4, NOTE_C5, NOTE_AS4, REST, NOTE_F4, NOTE_DS4, REST,
  NOTE_C4, REST, NOTE_G4, REST, NOTE_AS4, NOTE_C5, NOTE_AS4, REST, NOTE_F4, NOTE_DS4, REST,
  NOTE_C4, REST, NOTE_G4, REST, NOTE_AS4, NOTE_C5, NOTE_AS4, REST, NOTE_F4, NOTE_DS4, REST,

  NOTE_C4, REST, NOTE_E4, REST, NOTE_G4, NOTE_A4, NOTE_AS4,
  NOTE_C5, REST, NOTE_C5, REST, NOTE_AS4, REST, NOTE_A4, REST,
  NOTE_AS4, REST, NOTE_AS4, NOTE_C5, REST, NOTE_AS4, NOTE_A4, REST,
  REST,
  NOTE_C5, REST, NOTE_AS4, REST, NOTE_A4, REST, NOTE_AS4, REST, NOTE_E5,
  REST,

};

int SubwaysurfersNoteDurations[] = {
  4, 8, 4, 8, 4, 8, 8, 16, 8, 8, 16,
  4, 8, 4, 8, 4, 8, 8, 16, 8, 8, 16,
  4, 8, 4, 8, 4, 8, 8, 16, 8, 8, 16,

  4, 8, 4, 8, 4, 4, 4,
  8, 16, 8, 16, 8, 16, 8, 16,
  8, 16, 8, 8, 16, 8, 8, 16,
  4,
  8, 16, 8, 16, 8, 16, 8, 4, 8,
  4,


};


// Define the number of rows and columns
const byte ROWS = 3;
const byte COLS = 3;

// Define the keymap
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
};
void playMelody(int melody[], int noteDurations[], int size) {
  for (int thisNote = 0; thisNote < size; thisNote++) {
     int noteDuration = 1000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN);
  }
}
byte rowPins[ROWS] = {13, 12, 14}; 

byte colPins[COLS] = {27, 26, 25}; 

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);


void setup() {
  Serial.begin(9600);
  Serial.println("ready for the song!");
}

void loop() {
  char key = keypad.getKey();
  switch(key){
    case '1':
    playMelody(airtelMelody, airtelNoteDurations, sizeof(airtelMelody) / sizeof(int));
    break;
    case '2':
    playMelody(birthdayMelody, birthdayNoteDurations, sizeof(birthdayMelody) / sizeof(int));
    break;
    case '3':
    playMelody(fluteMelody, fluteNoteDurations, sizeof(fluteMelody) / sizeof(int));
    break;
    case '4':
    playMelody(harryPotterMelody, harryPotterDurations, sizeof(harryPotterMelody) / sizeof(int));
    break;
    case '5':
    playMelody(jingleBellsMelody, jingleBellsDurations, sizeof(jingleBellsMelody) / sizeof(int));
    break;
    case '6':
    playMelody(twinkleMelody, twinkleDurations, sizeof(twinkleMelody) / sizeof(int));
    break;
    case '7':
    playMelody(oldMacDonaldMelody, oldMacDonaldDurations, sizeof(oldMacDonaldMelody) / sizeof(int));
    break;
    case '8':
    playMelody(DecomoMelody, DecomoNoteDurations, sizeof(DecomoMelody) / sizeof(int)); 
    break;
    case '9':
    playMelody(SubwaysurfersMelody, SubwaysurfersNoteDurations, sizeof(SubwaysurfersMelody) / sizeof(int));
    break;
  }
}
