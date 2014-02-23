

#include <Stepper.h>

// number of steps on your motor
#define STEPS 64
char cmd;

Stepper cw(STEPS, 8, 9, 10, 11);//clockwise
Stepper ccw(STEPS, 8, 11, 10, 9);//counterclockwise

void setup()
{
  //set motor speed
  cw.setSpeed(100);
  ccw.setSpeed(100);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available())
  {
     cmd = Serial.read();
  }
  
   if(cmd == 'w') //press w for clockwise
   {
     cw.step(100);
   }
   else if(cmd == 'q')//press q for counterclockwise
   {
     ccw.step(100);
   }
}

