#ifndef CONCRETEMANOEUVRE_H
#define CONCRETEMANOEUVRE_H
#include "State.h"
#include <Arduino.h>

class Walking : public State
{
  public:
    Walking();
    void execute(Manoeuvre *manoeuvre, int servoSpeed);

  private:

};

#endif
