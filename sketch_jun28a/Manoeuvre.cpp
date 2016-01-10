#include "Manoeuvre.h"
#include "State.h"


Manoeuvre::Manoeuvre()
{
  myState_ = new State;
  myState_->attachServo();
}
void Manoeuvre::setState(State *myState)
{
  delete myState_;
  myState_ = myState;
}
State* Manoeuvre::getState()
{
  return myState_;
}

void Manoeuvre::execute(int perc)
{
  myState_->execute(this, perc);
}

