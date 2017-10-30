/**********************************************************************************
*Authors: Cameron Jackson, Beth Getty, Caleb Schmidt, Chris Kuchman, Jake Souther
*Updated: 10/30/2017
*Description: scissors class
- default constructor sets strength to 1
- constructor allows user to choose strength
- implements fight
***********************************************************************************/
#ifndef SCISSORS_HPP
#define SCISSORS_HPP
#include "Tool.hpp"
class Scissors :
	public Tool
{
public:
	Scissors();
	Scissors(int);
	double fight(char);
	~Scissors();
};
#endif

