#include "Tool.h"

Tool::Tool(int x, char c)
{
	strength = x;
	type = c;
}

void Tool::SetStrength(int x)
{
	strength = x;
}

char Tool::getType()
{
	return type;
}

Tool::~Tool()
{

}
