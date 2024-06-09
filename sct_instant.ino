unsigned long lastSample = 0;
const int sensorPin = 33;

void setup() {
  Serial.begin(115200);
  pinMode(sensorPin, INPUT_PULLDOWN);
}

void loop() {
  if (millis() - lastSample ) { 
    float sensorValue = analogRead(sensorPin)-2990;
    //  Serial.println(sensorValue);
    float y = sensorValue * (3.3 / 4095) * 1000;
    y = y / 25;
    
  
    Serial.println(y);
    
    lastSample = millis();
  }
}
