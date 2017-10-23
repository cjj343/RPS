#include "RPSGame.h"

RPSGame::RPSGame()
{
	human = 0;
	computer = 0;
	human_wins = 0;
	computer_wins = 0;
	ties = 0;
	sstrength = 1;
	pstrength = 1;
	rstrength = 1;
}

char RPSGame::AI()
{
	//TODO: USE VECTOR OF PAST HUMAN CHOICES TO DETERMINE BEST MOVE FOR COMPUTER
    int roll;
    char guess;
    char response;

    if (!humanChoices.length())
    {
        // First round, randomly guess
        roll = rand() % 3;
        switch (roll)
        {
        case 0:
            guess = 'r';
            break;
        case 1:
            guess = 'p';
            break;
        case 2:
            guess = 's';
            break;
        }
    }
    else
    {
        // We randomly select from the past human choices, so we are weighting our
        // guess based on the what has already been chosen
        guess = humanChoices[rand() % humanChoices.length()];
    }

    // Now, base don our guess, select our response
    switch (guess)
    {
    case 'r':
        response = 'p';
        break;
    case 'p':
        response = 's';
        break;
    case 's':
        response = 'r';
        break;
    }

    return response;
}

void RPSGame::printStats()
{
	//TODO: PRINT ALL DETAILS OF CURRENT ROUND
}

void RPSGame::setStrength()
{
	//TODO: PROMPT USE FOR SPECIFIC STRENGTH AND SET THEM TO MEMBER VARIABLES
	//TODO: VALIDATE INPUT
	//TODO: STRENGTHS USED WITH NEW OBJECT CONSTRUCTOR
}

void RPSGame::setHumanTool(char choice)
{
	//TODO: SET HUMAN POINTER TO DYNAMICALLY ALLOCATED S, R OR P OBJECT
	//TODO: PASS APPROPRAITE STRENGTH IN CONSTRUCTOR
    switch (choice)
    {
    case 'r':
        human = new Rock();
        break;
    case 'p':
        human = new Paper();
        break;
    case 's':
        human = new Scissors();
        break;
    }

	//TODO: ADD HUMAN CHOICE TO VECTOR
    humanChoices.push_back(choice);
}

void RPSGame::setComputerTool(char choice)
{
	//TODO: SET COMPUTER POINTER TO DYNAMICALLY ALLOCATED S, R OR P OBJECT
	//TODO: PASS APPROPRAITE STRENGTH IN CONSTRUCTOR
    switch (choice)
    {
    case 'r':
        computer = new Rock();
        break;
    case 'p':
        computer = new Paper();
        break;
    case 's':
        computer = new Scissors();
        break;
    }
}


void RPSGame::runGame()
{
	//TODO: CALL COMPUTER AND HUMAN FIGHT FUNCTIONS
	//TODO: COMPARE RESULTS RETURNED FROM FUNCTIONS
	//TODO: ADD RESULT TO MEMBER VARIABLES
}

void RPSGame::cleanUp()
{
    // NOTE: Moved update of human choices to the setHumanTool method
    if (human)
    {
        delete human;
        human = nullptr;
    }
    
    if (computer)
    {
        delete computer;
        computer = nullptr;
    }
}

RPSGame::~RPSGame()
{
    // Should be handled each round in cleanUp, but included again in the
    // destructor to ensure memory is freed if an exception occurs
    if (human)
    {
        delete human;
        human = nullptr;
    }
    
    if (computer)
    {
        delete computer;
        computer = nullptr;
    }
}
