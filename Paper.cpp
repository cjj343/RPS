#include "Paper.h"


Paper::Paper() : Tool(1, 'p')
{
}

//PASSES VALUES TO TOOL CONSTRUCTOR
Paper::Paper(int x) : Tool(x, 'p')
{
}

//ACCEPTS A CHAR REPRESENTING THE TYPE OF TOOL TO BE FOUGHT
//RETURNS A DOUBLE DUE TO DIVISION (I.E. SCISSOR STRENGTH = 1, FIGHTING ROCK = STRENGTH(1) DIVIDED BY 2)
double Paper::fight(char)
{
	//TODO: FIGHT CODE
}


Paper::~Paper()
{
}
