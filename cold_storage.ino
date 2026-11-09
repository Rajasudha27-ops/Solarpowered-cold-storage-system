// Solar Powered Cold Storage System
// Arduino Nano

const int temperaturePin = A0;
const int fanPin = 9;

float temperature = 0;

void setup()
{
  pinMode(fanPin, OUTPUT);

  Serial.begin(9600);

  digitalWrite(fanPin, LOW);
}

void loop()
{
  int sensorValue = analogRead(temperaturePin);

  float voltage = sensorValue * (5.0 / 1023.0);

  // LM35 temperature calculation
  temperature = voltage * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  // Cooling fan control
  if (temperature >= 25)
  {
    digitalWrite(fanPin, HIGH);
    Serial.println("Cooling Fan ON");
  }
  else
  {
    digitalWrite(fanPin, LOW);
    Serial.println("Cooling Fan OFF");
  }

  delay(1000);
}
