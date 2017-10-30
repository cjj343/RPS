#include "Tool.hpp"

//CONSTRUCTOR SETS STRENGTH AND TYPE
Tool::Tool(int x, char c)
{
	strength = x;
	type = c;
}

//SET STRENGTH
void Tool::SetStrength(int x)
{
	strength = x;
}

//GET TYPE
char Tool::getType()
{
	return type;
}

Tool::~Tool()
{

}
