#ifndef STATE_H
#define STATE_H

#include "Manoeuvre.h"

class State
{

  public:
    State();
    virtual void execute(Manoeuvre *manoeuvre, int servoSpeed) {};
    void attachServo();
  protected:
    void writeposition() ;
    void pinpointOldPosition();
    void calculateNewStep( int value);
    int calculateNewPosition(int stepData, int n);
    void checkOldPosition();
  private:
    int oldPosition[10], newPosition[10], stepPosition[10];

};
#endif
