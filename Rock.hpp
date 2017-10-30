/**********************************************************************************
*Authors: Cameron Jackson, Beth Getty, Caleb Schmidt, Chris Kuchman, Jake Souther
*Updated: 10/30/2017
*Description: rock class
	- default constructor sets strength to 1
	- constructor allows user to choose strength
	- implements fight
***********************************************************************************/
#ifndef ROCK_HPP
#define ROCK_HPP
#include "Tool.hpp"
class Rock :
	public Tool
{
public:
	Rock();
	Rock(int);
	double fight(char);
	~Rock();
};
#endif

