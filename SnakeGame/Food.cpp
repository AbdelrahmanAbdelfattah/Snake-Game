#include "Food.h"



void Food::makefood()
{
	pos.X = rand() % (width - 3) + 1;

	pos.Y = rand() % (height - 3) + 1;

}



COORD Food::getfood_pos()
{
	return pos;
}
