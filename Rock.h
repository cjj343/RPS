#ifndef ROCK_H
#define ROCK_H
#include "Tool.h"
class Rock :
	public Tool
{
public:
	Rock();
	Rock(int);
	//TODO: OPERATOR OVERLOADS
	//TODO: AUX FUNCTIONS, GET FUNCTIONS
	double fight(char);
	~Rock();
};
#endif

