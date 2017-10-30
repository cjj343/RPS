/************************************************************************************
Author: Cameron Jackson
Last Updated: 10/16/2017
Description: This file contains various helper functions.  At last update, can do the
following:
	- validate int
	- validate double
	- validate signed int
	- validate single char
	- validate int within range
	- validate double within range
	- validate Y or N
*************************************************************************************/

#ifndef HELPER_HPP
#define HELPER_HPP
#include <string>

int validateInt(std::string s);
char validateChar(std::string s);
char yesOrNo(char c);


#endif // !HELPER_HPP
