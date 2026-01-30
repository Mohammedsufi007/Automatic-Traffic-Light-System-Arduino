Component       Arduino Pin

Road A Red      2
Road A Yellow   3
Road A Green    4
Road B Red      5
Road B Yellow   6
Road B Green    7
IR Sensor A     8
IR Sensor B     9
  
// Road A Traffic Lights
int redA = 2;
int yellowA = 3;
int greenA = 4;

// Road B Traffic Lights
int redB = 5;
int yellowB = 6;
int greenB = 7;

// IR Sensors
int sensorA = 8;
int sensorB = 9;

// Timing variables (in milliseconds)
int greenTime = 5000;
int yellowTime = 2000;

void setup() {
  // Set traffic light pins as OUTPUT
  pinMode(redA, OUTPUT);
  pinMode(yellowA, OUTPUT);
  pinMode(greenA, OUTPUT);

  pinMode(redB, OUTPUT);
  pinMode(yellowB, OUTPUT);
  pinMode(greenB, OUTPUT);

  // Set sensor pins as INPUT
  pinMode(sensorA, INPUT);
  pinMode(sensorB, INPUT);

  // Initial state
  digitalWrite(redA, HIGH);
  digitalWrite(redB, HIGH);
}

void loop() {

  int vehicleA = digitalRead(sensorA);
  int vehicleB = digitalRead(sensorB);

  if (vehicleA == HIGH && vehicleB == LOW) {
    roadAGreen();
  }

  else if (vehicleB == HIGH && vehicleA == LOW) {
    roadBGreen();
  }

  else if (vehicleA == HIGH && vehicleB == HIGH) {
    roadAGreen();
    roadBGreen();
  }

  else {
    defaultMode();
  }
}

//  FUNCTIONS 

void roadAGreen() {
  digitalWrite(redA, LOW);
  digitalWrite(greenA, HIGH);

  digitalWrite(redB, HIGH);
  digitalWrite(greenB, LOW);

  delay(greenTime);

  digitalWrite(greenA, LOW);
  digitalWrite(yellowA, HIGH);
  delay(yellowTime);

  digitalWrite(yellowA, LOW);
  digitalWrite(redA, HIGH);
}

void roadBGreen() {
  digitalWrite(redB, LOW);
  digitalWrite(greenB, HIGH);

  digitalWrite(redA, HIGH);
  digitalWrite(greenA, LOW);

  delay(greenTime);

  digitalWrite(greenB, LOW);
  digitalWrite(yellowB, HIGH);
  delay(yellowTime);

  digitalWrite(yellowB, LOW);
  digitalWrite(redB, HIGH);
}

void defaultMode() {
  roadAGreen();
  delay(1000);
  roadBGreen();
  delay(1000);
}
