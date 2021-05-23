const int soundPin = 13;
const int ledPinD5 = 12;
const int ledPinF5 = 11;
const int ledPinE5 = 10;
const int ledPinAS4 = 9;
const int ledPinC5 = 8;
 
void setup() {

  pinMode(soundPin, OUTPUT);
  pinMode(ledPinD5, OUTPUT);
  pinMode(ledPinF5, OUTPUT);
  pinMode(ledPinE5, OUTPUT);
  pinMode(ledPinAS4, OUTPUT);
  pinMode(ledPinC5, OUTPUT);
 
}

void loop() {
 
  fstPart();

}

void fstPart() {

  analogWrite(soundPin, 1720);
  ledSoundCtrl(1, 1, 1, 1, 1);
  delay(500);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(50);
  
  analogWrite(soundPin, 2349);
  ledSoundCtrl(1, 0, 0, 0, 0);
  delay(500);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(50);
  
  analogWrite(soundPin, 2794);
  ledSoundCtrl(0, 1, 0, 0, 0);
  delay(500);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(50);
  
  analogWrite(soundPin, 2637);
  ledSoundCtrl(0, 0, 1, 0, 0);
  delay(500);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(50);
  
  analogWrite(soundPin, 2349);
  ledSoundCtrl(1, 0, 0, 0, 0);
  delay(500);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(50);
  
  analogWrite(soundPin, 2794);
  ledSoundCtrl(0, 1, 0, 0, 0);
  delay(500);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(50);
  
  analogWrite(soundPin, 2349);
  ledSoundCtrl(1, 0, 0, 0, 0);
  delay(500);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(50);
  
  analogWrite(soundPin, 2637);
  ledSoundCtrl(0, 0, 1, 0, 0);
  delay(500);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(50);
  
  analogWrite(soundPin, 2349);
  ledSoundCtrl(1, 0, 0, 0, 0);
  delay(500);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(50);
  
  analogWrite(soundPin, 1864);
  ledSoundCtrl(0, 0, 0, 1, 0);
  delay(500);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(50);
  
  analogWrite(soundPin, 2093);
  ledSoundCtrl(0, 0, 0, 0, 1);
  delay(500);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(50);
  
  analogWrite(soundPin, 1720);
  ledSoundCtrl(1, 1, 1, 1, 1);
  delay(1000);
  
  analogWrite(soundPin, 0);
  ledSoundCtrl(0, 0, 0, 0, 0);
  delay(2000);

}

void ledSoundCtrl(int d5, int f5, int e5, int as4, int c5) {

  if(d5 == 1) {
    digitalWrite(ledPinD5, HIGH);
  }
  else {
    digitalWrite(ledPinD5, LOW);
  }

  if(f5 == 1) {
    digitalWrite(ledPinF5, HIGH);
  }
  else {
    digitalWrite(ledPinF5, LOW);
  }

  if(e5 == 1) {
    digitalWrite(ledPinE5, HIGH);
  }
  else {
    digitalWrite(ledPinE5, LOW);
  }

  if(as4 == 1) {
    digitalWrite(ledPinAS4, HIGH);
  }
  else {
    digitalWrite(ledPinAS4, LOW);
  }

  if(c5 == 1) {
    digitalWrite(ledPinC5, HIGH);
  }
  else {
    digitalWrite(ledPinC5, LOW);
  }
  
}
