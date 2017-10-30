#include "Menu.hpp"
#include <iostream>
#include <cctype>

//CONSTRUCTOR SETS THE TYPE OF MENU (NUMBERED OR LETTERED)
Menu::Menu(std::string s)
{
	type = s;
}

//THIS FUNCTION CREATES PARALLEL VECTORS IF THE MENU CHOICES ARE CHARS
void Menu::addMenuItemChar(char c, std::string s)
{
	choiceChar.push_back(c);
	choiceDescription.push_back(s);
}

//THIS FUNCTION CREATES PARALLEL VECTORS IF THE MENU CHOICES ARE INTS
void Menu::addMenuItemInt(int x, std::string s)
{
	choiceNum.push_back(x);
	choiceDescription.push_back(s);
}

//PRINTS THE MENU MATCHING THE TYPE SPECIFIED BY THE USER
void Menu::printMenu()
{
	if (type == "char")
	{
		for (size_t i = 0; i < choiceChar.size(); i++)
		{
			std::cout << choiceChar[i] << ": " << choiceDescription[i] << std::endl;
		}
	}

	if (type == "int")
	{
		for (size_t i = 0; i < choiceNum.size(); i++)
		{
			std::cout << choiceNum[i] << ": " << choiceDescription[i] << std::endl;
		}
	}
}


//FOR INT, GETS THE USER'S CHOICE AND CHECKS IT AGAINST AVAILABLE OPTIONS. RETURNS USER CHOICE
int Menu::getUserInt(int x)
{
	std::string validator;

	bool validate = true;

	for (size_t i = 0; i < choiceNum.size(); i++)
	{
		if (choiceNum[i] == x)
		{
			validate = false;
		}
	}

	while (validate)
	{
		std::cout << "Not a valid menu choice! Please enter another value." << std::endl;
		printMenu();
		std::getline(std::cin, validator);
		x = validateInt(validator);

		for (size_t i = 0; i < choiceNum.size(); i++)
		{
			if (choiceNum[i] == x)
			{
				validate = false;
			}
		}
	}

	return x;
}

//FOR CHAR, GETS THE USER'S CHOICE AND CHECKS IT AGAINST AVAILABLE OPTIONS. RETURNS USER CHOICE
char Menu::getUserChar(char c)
{
	std::string validator;

	bool validate = true;

	for (size_t i = 0; i < choiceChar.size(); i++)
	{
		if (choiceChar[i] == c)
		{
			validate = false;
		}
	}

	while (validate)
	{
		std::cout << "Not a valid menu choice! Please enter another value." << std::endl;
		printMenu();
		std::getline(std::cin, validator);
		c = validateChar(validator);

		for (size_t i = 0; i < choiceChar.size(); i++)
		{
			if (choiceChar[i] == c)
			{
				validate = false;
			}
		}
	}

	return c;
}

Menu::~Menu()
{
}
