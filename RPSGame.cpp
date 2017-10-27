#include "RPSGame.h"
#include <iostream>

RPSGame::RPSGame()
{
    // Seed the random number generator
    std::srand(std::time(0));
	human = nullptr;
	computer = nullptr;
	human_wins = 0;
	computer_wins = 0;
	ties = 0;
	sstrength = 1;
	pstrength = 1;
	rstrength = 1;
}

char RPSGame::AI()
{
    int roll;
    char guess;
    char response;

    if (!humanChoices.size())
    {
        // First round, randomly guess what the player will do
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
        // guess based on the what has already been chosen by the player
        guess = humanChoices[rand() % humanChoices.size()];
    }

    // Now, based on the guess, select the computer's response
    switch (guess)
    {
    case 'r':
        response = 'p';
		std::cout << "Computer chose paper." << std::endl;
        break;
    case 'p':
        response = 's';
		std::cout << "Computer chose scissors." << std::endl;
        break;
    case 's':
        response = 'r';
		std::cout << "Computer chose rock." << std::endl;
        break;
    }

    return response;
}

void RPSGame::printStats()
{
	//Print stats at the end of current round
	std::cout << "Human wins: " << human_wins << std::endl
		<< "Computer wins: " << computer_wins << std::endl
		<< "Ties: " << ties << std::endl;
}

void RPSGame::setStrength()
{
    std::string userInput;
    
    std::cout << "What would you like the strength of the Rock to be?" << std::endl;
    std::getline(std::cin, userInput);
    rstrength = validateInt(userInput);

    std::cout << "What would you like the strength of the Paper to be?" << std::endl;
    std::getline(std::cin, userInput);
    pstrength = validateInt(userInput);

    std::cout << "What would you like the strength of the Scissors to be?" << std::endl;
    std::getline(std::cin, userInput);
    sstrength = validateInt(userInput);

    //BUILD IN A MINIMUM VALIDATION
}

void RPSGame::setHumanTool(char choice)
{
    switch (choice)
    {
    case 'r':
        human = new Rock(rstrength);
        break;
    case 'p':
        human = new Paper(pstrength);
        break;
    case 's':
        human = new Scissors(sstrength);
        break;
    }

    // Add the human choice to the vector for use in the AI
    humanChoices.push_back(choice);
}

void RPSGame::setComputerTool(char choice)
{

    switch (choice)
    {
    case 'r':
        computer = new Rock(rstrength);
        break;
    case 'p':
        computer = new Paper(pstrength);
        break;
    case 's':
        computer = new Scissors(sstrength);
        break;
    }
}


void RPSGame::runGame()
{
	double humanResult;
	double computerResult;

	//Call human and computer fight functions
	humanResult = human->fight(computer->getType());
	computerResult = computer->fight(human->getType());
	
	//Compare results returned from fight functions and increment wins/ties
	if (humanResult > computerResult)
	{
		std::cout << "You win!" << std::endl;
		human_wins++;
	}

	else if (computerResult > humanResult)
	{
		std::cout << "Computer wins!" << std::endl;
		computer_wins++;
	}

	else
	{
		std::cout << "It's a tie!" << std::endl;
		ties++;
	}
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
