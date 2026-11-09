#define TEMP_SENSOR A0
#define RELAY_PIN 7

const float TEMP_ON = 8.0;
const float TEMP_OFF = 5.0;

const int RELAY_ON = LOW;
const int RELAY_OFF = HIGH;

bool cooling = false;

void setup() {
  Serial.begin(9600);

  pinMode(TEMP_SENSOR, INPUT);
  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, RELAY_OFF);

  Serial.println("Solar Cold Storage System Started");
}

void loop() {
  int sensorValue = analogRead(TEMP_SENSOR);

  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = voltage * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  if (temperature >= TEMP_ON) {
    cooling = true;
  }
  else if (temperature <= TEMP_OFF) {
    cooling = false;
  }

  if (cooling) {
    digitalWrite(RELAY_PIN, RELAY_ON);
    Serial.println("Cooling System ON");
  }
  else {
    digitalWrite(RELAY_PIN, RELAY_OFF);
    Serial.println("Cooling System OFF");
  }

  delay(1000);
}
