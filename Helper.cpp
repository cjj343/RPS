#include <iostream>
#include <cctype>
#include <stdexcept>
#include "Helper.h"

//THIS FUNCTION VALIDATES THAT A USER ENTERED A Y OR N.
//RETURNS VALIDATED CHAR
char yesOrNo(char c)
{
	std::string userChoice;

	while (true)
	{
		if (c == 'Y' || c == 'y')
		{
			c = std::toupper(c);
			return c;
		}

		else if (c == 'N' || c == 'n')
		{
			c = std::toupper(c);
			return c;
		}

		else
		{
			std::cout << "Invalid entry! Please enter Y or N (y or n)." << std::endl;
			std::getline(std::cin, userChoice);
			c = validateChar(userChoice);
		}
	}

	return c;
}

//THIS FUNCTION VALIDATES THAT THE USER ENETERED AN UNSIGNED INTEGER.
//ACCEPTS STRING AND RETRUNS INT
int validateInt(std::string s)
{
	bool fail = false;

	if (s.length() == 0)
	{
		fail = true;
	}

	for (size_t i = 0; i < s.length(); i++)
	{
		if (!(std::isdigit(s[i])))
		{
			fail = true;
		}
	}

	if (!fail) //FROM STACK OVERLOW
	{
		try
		{
			std::stoi(s);
		}
		catch (const std::out_of_range)
		{
			fail = true;
		}
	}
	

	while (fail)
	{
		fail = false;
		std::cout << "Invalid! Please enter a different value..." << std::endl;
		std::cin.clear();
		s.erase();
		s.empty();
		std::getline(std::cin, s);

		if (s.length() == 0)
		{
			fail = true;
		}

		for (size_t i = 0; i < s.length(); i++)
		{
			if (!(std::isdigit(s[i])))
			{
				fail = true;
			}
		}

		if (!fail)
		{
			try
			{
				std::stoi(s);
			}
			catch (const std::out_of_range)
			{
				fail = true;
			}
		}
	}

	int safe = std::stoi(s);
	return safe;
}

//THIS FUNCTION VALIDATES THE USER ENTERED A SINGLE CHAR. ACCEPTS STRING, RETURNS INT
char validateChar(std::string s)
{
	bool fail = false;
	char safeChar;

	if (s.length() != 1)
	{
		fail = true;
	}

	for (size_t i = 0; i < s.length(); i++)
	{
		if (!(std::isalpha(s[i])))
		{
			fail = true;
		}
	}

	while (fail)
	{
		fail = false;
		std::cout << "Invalid! Please enter a different value..." << std::endl;
		std::getline(std::cin, s);

		if (s.length() != 1)
		{
			fail = true;
		}

		for (size_t i = 0; i < s.length(); i++)
		{
			if (!(std::isalpha(s[i])))
			{
				fail = true;
			}
		}
	}

	safeChar = s[0];

	return safeChar;
}

