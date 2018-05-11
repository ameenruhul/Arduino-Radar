#include <NewPing.h>
#include <Servo.h>
 
#define TRIGGER_PIN  12
#define ECHO_PIN     11
#define MAX_DISTANCE 200
 
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

Servo myServo;
int distance;
 
void setup() {
  
  pinMode(13,OUTPUT);
  myServo.attach(9);
}
 
void loop() {


  for(int i=15;i<=165;i++){  
  myServo.write(i);
  delay(30);
  distance = sonar.ping_cm();

  if( distance <= 2)
     digitalWrite(13,HIGH);
  else 
     digitalWrite(13,LOW);   

  
  }

}
