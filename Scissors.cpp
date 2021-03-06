#include "Scissors.hpp"


Scissors::Scissors() : Tool(1, 's')
{
}

//PASSES VALUES TO TOOL CONSTRUCTOR
Scissors::Scissors(int x) : Tool(x, 's')
{
	strength = x;
}

//ACCEPTS A CHAR REPRESENTING THE TYPE OF TOOL TO BE FOUGHT
//RETURNS A DOUBLE DUE TO DIVISION (I.E. SCISSOR STRENGTH = 1, FIGHTING ROCK = STRENGTH(1) DIVIDED BY 2)
double Scissors::fight(char type)
{
	double result = strength;

	if (type == 'r')
	{
		result = strength / 2.0;
	}
	else if (type == 'p')
	{
		result = strength * 2.0;
	}


	return result;


}


Scissors::~Scissors()
{
}
