#include "Helper.hpp"
#include "Menu.hpp"
#include "RPSGame.hpp"
#include <string>
#include <iostream>

int main()
{
	RPSGame driver;

	std::string userChoice = "";
	int startMenuChoice = 0;
	char toolMenuChoice;
	char YN;

	//CREATE START MENU
	Menu startMenu("int");
	startMenu.addMenuItemInt(1, "Play Game");
	startMenu.addMenuItemInt(2, "Exit");

	//CREATE TOOL MENU
	Menu toolMenu("char");
	toolMenu.addMenuItemChar('r', "Rock");
	toolMenu.addMenuItemChar('p', "Paper");
	toolMenu.addMenuItemChar('s', "Scissors");

	//PRINT START MENU ASKING IF USER WANTS TO PLAY
	startMenu.printMenu();
	//GET AND VALIDATE USER INPUT
	std::getline(std::cin, userChoice);
	startMenuChoice = validateInt(userChoice);
	startMenuChoice = startMenu.getUserInt(startMenuChoice);

	if (startMenuChoice != 2)
	{
		//ASK USER IF THEY WANT TO SET STRENGTH OF TOOLS
		std::cout << "Would you like to set the tool strength? (Y or N)" << std::endl;
		std::getline(std::cin, userChoice);
		//VALIDATE INPUT 
		YN = validateChar(userChoice);
		YN = yesOrNo(YN);

		if (YN == 'Y' || YN == 'y')
		{
			//IF YES CALL RPSGAME SETSTRENGTH FUNCTION
			driver.setStrength();
		}
	}

	//WHILE USER WANTS TO PLAY
	while(startMenuChoice != 2)
	{
		//PROMPT
		std::cout << "Choose your tool!" << std::endl;
		std::cout << std::endl;

		//PRINT TOOL MENU 
		toolMenu.printMenu();

		//GET AND VALIDATE USER INPUT
		std::getline(std::cin, userChoice);
		toolMenuChoice = validateChar(userChoice);
		toolMenuChoice = toolMenu.getUserChar(toolMenuChoice);

		//PASS TO RPSGAME SETHUMANTOOL FUNCTION
		driver.setHumanTool(toolMenuChoice);

		//CALL SETCOMPUTER TOOL USING THE RETURNED VALUE OF THE AI
		driver.setComputerTool(driver.AI());

		//CALL RUNGAME
		driver.runGame();

		//PRINT RESULTS OF ROUND
		driver.printStats();

		//CALL RPSGAME CLEANUP FUNCTION
		driver.cleanUp();

		//PRINT START MENU ASKING IF USER WANTS TO PLAY
		startMenu.printMenu();

		//GET AND VALIDATE USER INPUT
		std::getline(std::cin, userChoice);
		startMenuChoice = validateInt(userChoice);
		startMenuChoice = startMenu.getUserInt(startMenuChoice);
	}

	return 0;
}
