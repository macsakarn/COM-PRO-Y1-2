int piezoPin = 8;
#define NOTE_C4  262   // เสียงโด (กลาง)
#define NOTE_D4  294   // เสียงเร (กลาง)
#define NOTE_E4  330   // เสียงมี (กลาง)
#define NOTE_F4  349   // เสียงฟา (กลาง)
#define NOTE_G4  392   // เสียงซอล (กลาง)
#define NOTE_A4  440   // เสียงลา (กลาง)

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop()
{
  int val = analogRead(A0);
  Serial.println(val);
  if(val >= 682)
  {
    tone(piezoPin, NOTE_A4);
    delay(500);
  }
  else if(val >= 538)
  {
    tone(piezoPin, NOTE_G4);
    delay(500);
  }
  else if(val >= 442)
  {
    tone(piezoPin, NOTE_F4);
    delay(500);
  }
  else if(val >= 188)
  {
    tone(piezoPin, NOTE_E4);
    delay(500);
  }
  else if(val >= 90)
  {
    tone(piezoPin, NOTE_D4);
    delay(500);
  }
  else if(val >= 9)
  {
    tone(piezoPin, NOTE_C4);
    delay(500);
  }
  noTone(piezoPin);
}
