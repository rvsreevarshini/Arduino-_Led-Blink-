void setup() {
    pinMode(13, OUTPUT);   // set pin 13 as output
    }
void loop() {
      digitalWrite(13, HIGH);  // LED ON
        delay(1000);             // wait 1 sec
          digitalWrite(13, LOW);   // LED OFF
            delay(1000);             // wait 1 sec
}
