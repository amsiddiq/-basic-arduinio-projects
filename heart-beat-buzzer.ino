const int buzzer = 9; //buzzer to arduino pin 9


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop(){
  tone(buzzer, 7500); // Send 1KHz sound signal...
  delay(50);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(100);        // ...for 1sec
  tone(buzzer, 8000);
  delay(100);
  noTone(buzzer);
  delay(1000);
 }