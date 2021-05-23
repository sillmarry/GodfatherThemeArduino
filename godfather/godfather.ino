
const byte soundPin = 13;
const byte ledPin1 = 12;
const byte ledPin2 = 11;
const byte ledPin3 = 10;
const byte ledPin4 = 9;
const byte ledPin5 = 8;
const byte COUNT_NOTES = 44;
int frequences[COUNT_NOTES] {
  880, 1175, 1397, 1320, 1175, 1397,
  1175, 1320, 1175, 932, 1047, 880,
  880, 1175, 1397, 1320, 1175, 1397,
  1175, 1320, 1175, 880, 838, 791,
  747, 838, 997, 1175, 1320, 791, 932,
  1119, 1175, 880, 932, 880, 932, 
  1047, 880, 932, 880, 705, 559, 593
};
int durations[COUNT_NOTES] {
  500, 500, 500, 500, 500, 500, 
  500, 500, 500, 500, 500, 1500, 
  500, 500, 500, 500, 500, 500, 
  500, 500, 500, 250, 250, 1500, 
  500, 500, 500, 1500, 1000, 500, 500,
  500, 1500, 500, 500, 500, 500,
  1000, 250, 250, 250, 1000, 500, 2000
};
 
void setup() {

  pinMode(soundPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
 
}

void loop() {
 
  for(int i = 0; i <= COUNT_NOTES; i++) {
    tone(soundPin, frequences[i]);
    ledSoundCtrl(frequences[i]);
    delay(durations[i]);
  }

}

void ledSoundCtrl(int note) {

  switch(note) {
    case 559:
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      break;
    case 593:
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      break;
    case 705:
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      break;
    case 747:
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      break;
    case 791:
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      break;
    case 838:
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      break;
    case 880:
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      break; 
    case 932:
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, LOW);
      break;
    case 997:
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, LOW);
      break;
    case 1047:
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, LOW);
      break;
    case 1119:
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, LOW);
      break;
    case 1175:
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, LOW);
      break;
    case 1320:
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, LOW);
      break;
    case 1397:
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, HIGH);
      break;
   
  }
  
}
