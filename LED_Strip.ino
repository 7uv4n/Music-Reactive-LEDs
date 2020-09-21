#define SOUND_DETECTED_DIGITAL_IN_PIN 8
#define LED_DIGITAL_OUT_PIN 7

void setup(){
  Serial.begin(9600);
  pinMode(SOUND_DETECTED_DIGITAL_IN_PIN, INPUT);
  pinMode(LED_DIGITAL_OUT_PIN, OUTPUT);
}

void loop(){
  if(digitalRead(SOUND_DETECTED_DIGITAL_IN_PIN)){
    Serial.println(SOUND_DETECTED_DIGITAL_IN_PIN);
    digitalWrite(LED_DIGITAL_OUT_PIN, HIGH);
    delay(50); // delay long enough for you to see the LED on
  }
  else {
    digitalWrite(LED_DIGITAL_OUT_PIN, LOW);
  }
}
