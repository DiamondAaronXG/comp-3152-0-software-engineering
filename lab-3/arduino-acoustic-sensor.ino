#define PIN_TRIG 3 
#define PIN_ECHO 2 

// Sets the mode for each pin being used

void setup() { 
 
  pinMode(13, OUTPUT); 
  Serial.begin(115200); 
  pinMode(PIN_TRIG, OUTPUT); 
  pinMode(PIN_ECHO, INPUT); 

} 

// Sets the environment 

void loop() { 

  // Start a new measurement: 

  digitalWrite(PIN_TRIG, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(PIN_TRIG, LOW); 

 

  // Read the result: 

  int duration = pulseIn(PIN_ECHO, HIGH); 

  // Tells the arduino when each led should be on
 
  int led_valuer = (duration / 58)>50; 
  int led_valuey = (duration / 58)>=10 && (duration / 58)<=50; 
  int led_valueg = (duration / 58)<10; 

  // Tells the arduino which LED is connected to each pin
 
  digitalWrite(11, led_valuer); 
  digitalWrite(12, led_valuey); 
  digitalWrite(13, led_valueg); 

   // Prints the output of the distance sensor in centimeters and inches
 
  Serial.print("Distance in CM: "); 
  Serial.println(duration / 58); 
  Serial.print("Distance in inches: "); 
  Serial.println(duration / 148); 

  // Time between sensor detections

  delay(1000); 

} 
