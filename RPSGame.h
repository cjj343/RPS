#ifndef RPSGAME_H
#define RPSGAME_H
#include "Tool.h"
#include "Scissors.h"
#include "Paper.h"
#include "Rock.h"
#include <vector>
#include <cstdlib>  // For srand and rand
#include <ctime>    // To seed srand
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
	char AI();
	//TODO: PRINT GAME STATS FUNCTION (<< OPERATOR OVERLOAD?)
	void printStats();
	//TODO: SET DIFFERENT TOOL STRENGTH
	void setStrength();
	void setHumanTool(char choice);
	void setComputerTool(char choice);
	//TODO: RUN GAME
	void runGame();
	void cleanUp();

	~RPSGame();
};
#endif

