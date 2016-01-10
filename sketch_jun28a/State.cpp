#include "State.h"
#include <Arduino.h>
#include "StepData.h"

#include "Servo.h"

Servo myservo[numServo];

State::State()
{
  
}
void State::attachServo()
{
  for(int i=0;i<numServo;i++)
    myservo[i].attach(i+3);
}
void State::writeposition()
{ 
  for(int i=0;i<numServo;i++)
    myservo[i].write(stepPosition[i]);

}
void State::pinpointOldPosition()
{
  for(int i=0;i<numServo;i++)
    oldPosition[i] =  newPosition[i];
  
}
void State::calculateNewStep(int value)
{
  if(value < 100)
    for(int i=0; i<numServo;i++){
       stepPosition[i] =  ((100-value)*oldPosition[i] +value*newPosition[i])/100;
   }
   else
   for(int i=0; i<numServo;i++){
       stepPosition[i] =  newPosition[i];
   } 
}
int State::calculateNewPosition(int stepData, int n)
{
   for(int i=0;i<numServo;i++)
      newPosition[i] = oldPosition[i]+stepData_[stepData+n][i];

      
     return n+numServo;
}

void State::checkOldPosition()
{
   for(int i=0;i<numServo;i++)
    oldPosition[i] = myservo[i].read();
   

}

