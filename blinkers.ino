int LEFT_BLINKER = 8;
int RIGHT_BLINKER = 10;
int BRAKE_LIGHT = 9;

void setup() {
  pinMode(LEFT_BLINKER, OUTPUT);
  pinMode(RIGHT_BLINKER, OUTPUT);
  pinMode(BRAKE_LIGHT, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Example: toggle the left blinker every 1000 milliseconds
  toggleBlinker(LEFT_BLINKER);
  delay(1000);
}

void toggleBlinker(int blinkerPin) {
  static bool blinkerState = LOW; // Initialize to LOW
  digitalWrite(blinkerPin, blinkerState);
  blinkerState = !blinkerState; // Toggle the state
}



void toggleBrakeLight() {
  
}
