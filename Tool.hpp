/**********************************************************************************
*Authors: Cameron Jackson, Beth Getty, Caleb Schmidt, Chris Kuchman, Jake Souther
*Updated: 10/30/2017
*Description: parent class
	- sets strength
	- returns type of tool
	- abstract class allows of polymorphism
***********************************************************************************/
#ifndef TOOL_HPP
#define TOOL_HPP
class Tool
{
private:
	char type;
protected:
	int strength;
public:
	Tool(int, char);
	void SetStrength(int x);
	//VIRTUAL FIGHT FUNCTION ALLOWS CORRECT TOOL TO BE ACCESSED BY TOOL* IN RPS GAME CLASS
	virtual double fight(char) = 0;
	char getType();
	//VIRTUAL DESTRUCTOR
	virtual ~Tool();
};
#endif
