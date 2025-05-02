#include <WiFi.h>               // ESP32 WiFi library
#include <Ultrasonic.h>         // Ultrasonic sensor library
#include <DHT.h>                // DHT sensor library

// Pin definitions for ESP32
#define PIN_LED_ANALOG_13 13    // Lamp with variable intensity
#define PIN_LED_ANALOG_11 12    // Ventilator with variable intensity
#define PIN_LED_DIGITAL_8 14    // Ventilator ON/OFF
#define PIN_LED_DIGITAL_6 27    // Lamp ON/OFF
#define PIN_TEMP_DIGITAL  26    // Temperature sensor (DHT11)

// Ultrasonic sensor pins
#define trigPin 33              // Trigger pin for ultrasonic sensor
#define echoPin 32              // Echo pin for ultrasonic sensor
#define ledPin  25              // LED to signal object detection

// Ultrasonic sensor setup
Ultrasonic ultrasonic(trigPin, echoPin);

// DHT11 temperature sensor setup
#define DHTTYPE DHT11
DHT dht(PIN_TEMP_DIGITAL, DHTTYPE);

// Variables for communication
char device;                    // Device identifier
char value;                     // Intensity value for the second lamp
int temperature;                // Temperature value
int distance;                   // Distance value

void setup() {
  Serial.begin(9600);           // Initialize serial communication

  // Configure output pins
  pinMode(PIN_LED_ANALOG_13, OUTPUT);
  analogWrite(PIN_LED_ANALOG_13, 0);

  pinMode(PIN_LED_ANALOG_11, OUTPUT);
  analogWrite(PIN_LED_ANALOG_11, 0);

  pinMode(PIN_LED_DIGITAL_8, OUTPUT);
  digitalWrite(PIN_LED_DIGITAL_8, LOW);

  pinMode(PIN_LED_DIGITAL_6, OUTPUT);
  digitalWrite(PIN_LED_DIGITAL_6, LOW);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

  // Initialize DHT sensor
  dht.begin();
}

void loop() {
  // Measure distance using the ultrasonic sensor
  distance = ultrasonic.read();

  // Handle object detection
  if (distance > 0 && distance <= 200) { // Valid distance detected (within 200 cm)
    Serial.write('8');                   // Send detection signal
    digitalWrite(ledPin, HIGH);          // Turn on LED
  } else {
    digitalWrite(ledPin, LOW);           // Turn off LED
  }

  // Handle serial commands
  if (Serial.available()) {
    char command = Serial.read();
    switch (command) {
      case '5': // Command to read temperature
        temperature = dht.readTemperature();
        if (!isnan(temperature)) {       // Check if the reading is valid
          Serial.write(temperature);     // Send temperature value
        } else {
          Serial.write("E");             // Send error signal if reading fails
        }
        break;

      case 'L': // Adjust lamp brightness
        if (Serial.available()) {
          value = Serial.read();
          analogWrite(PIN_LED_ANALOG_13, value);
        }
        break;

      case 'G': // Adjust ventilator speed
        if (Serial.available()) {
          value = Serial.read();
          analogWrite(PIN_LED_ANALOG_11, value);
        }
        break;

      case '1': // Turn on Lamp
        digitalWrite(PIN_LED_DIGITAL_6, HIGH);
        break;

      case '0': // Turn off Lamp
        digitalWrite(PIN_LED_DIGITAL_6, LOW);
        break;

      case '3': // Turn on Ventilator
        digitalWrite(PIN_LED_DIGITAL_8, HIGH);
        break;

      case '2': // Turn off Ventilator
        digitalWrite(PIN_LED_DIGITAL_8, LOW);
        break;

      default:
        break;
    }
  }
}

