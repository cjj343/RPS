#ifndef TOOL_H
#define TOOL_H
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
