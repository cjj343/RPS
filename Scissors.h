#ifndef SCISSORS_H
#define SCISSORS_H
#include "Tool.h"
class Scissors :
	public Tool
{
public:
	Scissors();
	Scissors(int);
	//TODO: OPERATOR OVERLOADS
	//TODO: AUX FUNCTIONS, GET FUNCTIONS
	double fight(char);
	~Scissors();
};
#endif

