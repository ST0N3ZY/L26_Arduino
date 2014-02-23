
#include <Servo.h> 

Servo servo;

void setup() 
{ 
  servo.attach(3,800 , 2600); //The range of SG90 is between 800 to 2600 
  servo.write(90); // Rotate to middle place
  delay(1000);
} 

void loop() 
{
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);
}
