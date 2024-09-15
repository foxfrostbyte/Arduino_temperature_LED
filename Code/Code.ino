// Constants/variables:
const int sensorPin = A0;
const float baselineTemp = 20.0;
float voltage = 0;
float temperature = 0;

// At start-up:
void setup() {
  Serial.begin(9600);

  for(int i = 2; i<=4; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }

// What repeats itself:
}
void loop() {

  int sensorValue = analogRead(sensorPin);
  voltage = (sensorValue / 1024.0) * 5.0;

  temperature = (voltage - .5) * 100;
  Serial.print("Celsius: ");
  Serial.println(temperature);

  if (temperature <= 21.0) {
    Serial.print("Cold!");
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }

  else if (temperature > 21.0 && temperature < 26.0) {
    Serial.print("Normal temperature.");
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }

  else if (temperature >= 26.0) {
    Serial.print("High temperature!");
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
  }

  else {
    Serial.print("Unable to measure temperature.");
  }

  Serial.println("\n");

  delay(5000);
}