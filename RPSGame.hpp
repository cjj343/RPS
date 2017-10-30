/**********************************************************************************
*Authors: Cameron Jackson, Beth Getty, Caleb Schmidt, Chris Kuchman, Jake Souther
*Updated: 10/30/2017
*Description: game interface
	- sets tool strength
	- sets computer/human tools
	- keeps track of scores
	- runs simulation
	- implements AI
	- clean up
***********************************************************************************/


#ifndef RPSGAME_HPP
#define RPSGAME_HPP
#include "Tool.hpp"
#include "Scissors.hpp"
#include "Paper.hpp"
#include "Rock.hpp"
#include "Helper.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  // For srand and rand
#include <ctime>    // To seed srand
//INCLUDE MENU HELPER CLASS

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
	int compsstrength;
	int comppstrength;
	int comprstrength;

public:
	RPSGame();
	char AI();
	void printStats();
	void setStrength();
	void setHumanTool(char choice);
	void setComputerTool(char choice);
	void runGame();
	void cleanUp();
	~RPSGame();
};
#endif

