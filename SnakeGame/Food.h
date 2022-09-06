#pragma once
#include<windows.h>
#include<cstdlib>
#include <ctime>
#define width 100
#define height 28 
class Food
{

private:
	COORD  pos;

public:
	void makefood();

	COORD getfood_pos();


};


