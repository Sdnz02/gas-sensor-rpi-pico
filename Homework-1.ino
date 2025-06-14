// Pin Definitions
#define GAS_SENSOR_PIN 26
#define RED_LED_PIN 10
#define GREEN_LED_PIN 11
#define BLUE_LED_PIN 12
#define BUZZER_PIN 9

// Thresholds for gas levels
#define SAFE_THRESHOLD 200
#define CAUTION_THRESHOLD 400

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Initialize GPIO pins
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Read analog value from gas sensor
  int gasValue = analogRead(GAS_SENSOR_PIN);
  
  // Print gas value to serial monitor
  Serial.print("Gas Value: ");
  Serial.println(gasValue);
  
  // Check gas concentration level and trigger LED and buzzer accordingly
  if (gasValue < SAFE_THRESHOLD) {
    // Safe level, turn on green LED
    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(GREEN_LED_PIN, HIGH);
    digitalWrite(BLUE_LED_PIN, LOW);
    tone(BUZZER_PIN, 0);
  } 
  else if (gasValue < CAUTION_THRESHOLD) {
    // Caution level, turn on blue LED
    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(GREEN_LED_PIN, LOW);
    digitalWrite(BLUE_LED_PIN, HIGH);
    tone(BUZZER_PIN, 1000); // 1kHz tone
    delay(500);
    tone(BUZZER_PIN, 1000); // 1kHz tone
    delay(500);
    tone(BUZZER_PIN, 0);
  } 
  else if (gasValue > CAUTION_THRESHOLD){
    // Danger level, turn on red LED
    digitalWrite(RED_LED_PIN, HIGH);
    digitalWrite(GREEN_LED_PIN, LOW);
    digitalWrite(BLUE_LED_PIN, LOW);
    tone(BUZZER_PIN, 2000); // 2kHz tone
    delay(500);
    tone(BUZZER_PIN, 2000); // 2kHz tone
    delay(500);
    tone(BUZZER_PIN, 0);
  }
  
  // Delay before next reading
  delay(1000); // 1 second delay
}
