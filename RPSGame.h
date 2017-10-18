#ifndef RPSGAME_H
#define RPSGAME_H
#include "Tool.h"
#include "Scissors.h"
#include "Paper.h"
#include "Rock.h"
#include <vector>
//INCLUDE MENU HELPER CLASS
//INCLUDE VALIDATION HELPER CLASS

class RPSGame
{
private:
	Tool *human;
	Tool *computer;
	int human_wins;
	int computer_wins;
	int ties;
	std::vector<char> humanChoices; //FOR AI USE
	int sstrength;
	int pstrength;
	int rstrength;

public:
	RPSGame();
	//TODO: OPERATOR OVERLOADS
	//TODO: AUX FUNCTIONS, GET FUNCTIONS, SET FUNCTIONS ETC.
	//TODO: AI FUNCTION
	char AI();
	//TODO: PRINT GAME STATS FUNCTION (<< OPERATOR OVERLOAD?)
	void printStats();
	//TODO: SET DIFFERENT TOOL STRENGTH
	void setStrength();
	//TODO: SET HUMAN TOOL
	void setHumanTool(char);
	//TODO: SET COMPUTER TOOL
	void setComputerTool(char);
	//TODO: RUN GAME
	void runGame();
	//TODO: CLEAN UP DYNAMIC MEMORY
	void cleanUp();

	~RPSGame();
};
#endif

