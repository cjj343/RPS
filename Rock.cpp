#include "Rock.hpp"


Rock::Rock() : Tool(1, 'r')
{
}

//PASSES VALUES TO TOOL CONSTRUCTOR
Rock::Rock(int x) : Tool(x, 'r')
{
	strength = x;
}

//ACCEPTS A CHAR REPRESENTING THE TYPE OF TOOL TO BE FOUGHT
//RETURNS A DOUBLE DUE TO DIVISION (I.E. SCISSOR STRENGTH = 1, FIGHTING ROCK = STRENGTH(1) DIVIDED BY 2)
double Rock::fight(char type)
{
	double result = strength;

	if (type == 'p')
	{
		result = strength / 2.0;
	}
	else if (type == 's')
	{
		result = strength * 2.0;
	}

	return result;

}


Rock::~Rock()
{
}
