#ifndef PAPER_H
#define PAPER_H

#include "Tool.h"
class Paper :
	public Tool
{
public:
	Paper();
	Paper(int);
	//TODO: OPERATOR OVERLOADS
	//TODO: AUX FUNCTIONS, GET FUNCTIONS
	double fight(char);
	~Paper();
};
#endif

