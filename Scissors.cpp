#include "Scissors.h"


Scissors::Scissors() : Tool(1, 's')
{
}

//PASSES VALUES TO TOOL CONSTRUCTOR
Scissors::Scissors(int x) : Tool(x, 's')
{
}

//ACCEPTS A CHAR REPRESENTING THE TYPE OF TOOL TO BE FOUGHT
//RETURNS A DOUBLE DUE TO DIVISION (I.E. SCISSOR STRENGTH = 1, FIGHTING ROCK = STRENGTH(1) DIVIDED BY 2)
double Scissors::fight(char)
{
	//TODO: FIGHT CODE
}


Scissors::~Scissors()
{
}
