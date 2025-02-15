#define PIN_TRIG 3 
#define PIN_ECHO 2 

void setup() { 

 //sets the mode for each pin being used
 
  pinMode(13, OUTPUT); 
  Serial.begin(115200); 
  pinMode(PIN_TRIG, OUTPUT); 
  pinMode(PIN_ECHO, INPUT); 

} 

 

void loop() { 

  // Start a new measurement: 

  digitalWrite(PIN_TRIG, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(PIN_TRIG, LOW); 

 

  // Read the result: 

  int duration = pulseIn(PIN_ECHO, HIGH); 
  int led_valuer = (duration / 58)>50; 
  int led_valuey = (duration / 58)>=10 && (duration / 58)<=50; 
  int led_valueg = (duration / 58)<10; 
  digitalWrite(11, led_valuer); 
  digitalWrite(12, led_valuey); 
  digitalWrite(13, led_valueg); 
  Serial.print("Distance in CM: "); 
  Serial.println(duration / 58); 
  Serial.print("Distance in inches: "); 
  Serial.println(duration / 148); 

  delay(1000); 

} 
