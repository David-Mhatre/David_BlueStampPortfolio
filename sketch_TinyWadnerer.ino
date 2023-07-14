// Include the Servo library 
#include <Servo.h> 
// Create a servo object 
Servo Servo1, Servo2; 

// defines pins numbers
const int rtrigPin = 7;
const int rechoPin = 8;
const int ltrigPin = 4;
const int lechoPin = 5;
const int mtrigPin = 12;
const int mechoPin = 11;
// defines variables
long rduration;
long lduration;
long mduration;
int rdistance;
int ldistance;
int mdistance;

void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(9);
   Servo2.attach(10); 
   pinMode(rtrigPin, OUTPUT); // Sets the trigPin as an Output
   pinMode(rechoPin, INPUT); // Sets the echoPin as an Input
   pinMode(ltrigPin, OUTPUT); // Sets the trigPin as an Output
   pinMode(lechoPin, INPUT); // Sets the echoPin as an Input
   pinMode(mtrigPin, OUTPUT); // Sets the trigPin as an Output
   pinMode(mechoPin, INPUT); // Sets the echoPin as an Input
   Serial.begin(9600); // Starts the serial communication
}
void loop(){ 
  // Clears the trigPin
  digitalWrite(rtrigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(rtrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(rtrigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  rduration = pulseIn(rechoPin, HIGH);

  // Clears the trigPin
  digitalWrite(ltrigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(ltrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(ltrigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  lduration = pulseIn(lechoPin, HIGH);

  // Clears the trigPin
  digitalWrite(mtrigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(mtrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(mtrigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  mduration = pulseIn(mechoPin, HIGH);

  // Calculating the distance
  rdistance = rduration * 0.034 / 2;
  ldistance = lduration * 0.034 / 2;
  mdistance = mduration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.println(rdistance);
  Serial.println(ldistance);
  Serial.println(mdistance);
  if (rdistance < 10 && ldistance < 10 && mdistance > 25){
    // If the sensors both read on the table goes forward
    Servo1.write(100);
    Servo2.write(80);
    delayMicroseconds(1000);
  } 
  else if(rdistance < 10 && ldistance < 10 && mdistance < 25){
    Servo1.write(80);
    Servo2.write(80);
    delayMicroseconds(1000);
  }
  else if (!(ldistance < 10) && rdistance < 10){
      // Turns back right if the left side is over the edge
      Servo1.write(90);
      Servo2.write(100);
      delayMicroseconds(1000);
  } 
  else if (ldistance < 10 && !(rdistance < 10)){ 
      // Turns back left if the right side is over the edge
      Servo2.write(90);
      Servo1.write(80);
      delayMicroseconds(1000);
  } 
  else{
    // If both sensors are over the edge go backwards
    Servo1.write(80);
    Servo2.write(100);
    delayMicroseconds(1000);
  }
}

// // Make servo go to 0 degrees 
//    Servo1.write(0);
//    Servo2.write(0); 
//    delay(1000); 
//    // Make servo go to 90 degrees 
//    Servo1.write(10); 
//    Servo2.write(10);
//    delay(1000); 
//    // Make servo go to 180 degrees 
//    Servo1.write(20); 
//    Servo2.write(20);
//    delay(1000); 