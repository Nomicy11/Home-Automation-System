const int sensorPin = A0;    // Analog pin for the pressure sensor
const int buzzerPin = 7;     // Digital pin for the buzzer
const int ledPin = 8;        // Digital pin for the LED

void setup() {
  Serial.begin(9600);         // Initialize serial communication
  pinMode(buzzerPin, OUTPUT);  // Set the buzzer pin as an output
  pinMode(ledPin, OUTPUT);     // Set the LED pin as an output
}

void loop() {
  int sensorValue = analogRead(sensorPin);  // Read the value from the pressure sensor

  // Print the sensor value to the serial monitor
  Serial.print("Pressure Sensor Value: ");
  Serial.println(sensorValue);

  // Check if the sensor value is above a threshold (adjust as needed)
  if (sensorValue >= 10) {
    // If above the threshold, turn on the buzzer and LED
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.println("Buzzer ON");
  } else {
    // If below the threshold, turn off the buzzer and LED
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    Serial.println("Buzzer OFF");
  }

  delay(1000);  // Delay for readability, adjust as needed
}
