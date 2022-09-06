#pragma once
#include<windows.h>
#include <vector>
using namespace std;
#define w 100
#define h 28
class Snake
{

private:
	
	int v;
	int length;
	char dir;

	vector<COORD>snake;
	COORD pos;


public:
	vector<COORD>get_snake();
	Snake(COORD pos, int vel);
	bool eaten(COORD food_pos);
	void grow();
	COORD get_pos();
	void change_dir(char dir);
	bool gameover();
	void move();

	

	
	


};

