#ifndef MANOEUVRE_H
#define MANOEUVRE_H

class Manoeuvre
{
private:
	class State *myState_;
public:
	Manoeuvre();
	void setState(State *myState);
  State* getState();
	void execute(int perc);
};
#endif
