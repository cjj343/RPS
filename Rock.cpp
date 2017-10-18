#include "Rock.h"



Rock::Rock() : Tool(1, 'r')
{
}

//PASSES VALUES TO TOOL CONSTRUCTOR
Rock::Rock(int x) : Tool(x, 'r')
{
}

//ACCEPTS A CHAR REPRESENTING THE TYPE OF TOOL TO BE FOUGHT
//RETURNS A DOUBLE DUE TO DIVISION (I.E. SCISSOR STRENGTH = 1, FIGHTING ROCK = STRENGTH(1) DIVIDED BY 2)
double Rock::fight(char)
{
	//TODO: FIGHT CODE
}


Rock::~Rock()
{
}
