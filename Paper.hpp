/**********************************************************************************
*Authors: Cameron Jackson, Beth Getty, Caleb Schmidt, Chris Kuchman, Jake Souther
*Updated: 10/30/2017
*Description: paper class
- default constructor sets strength to 1
- constructor allows user to choose strength
- implements fight
***********************************************************************************/

#ifndef PAPER_HPP
#define PAPER_HPP

#include "Tool.hpp"
class Paper :
	public Tool
{
public:
	Paper();
	Paper(int);
	double fight(char);
	~Paper();
};
#endif

