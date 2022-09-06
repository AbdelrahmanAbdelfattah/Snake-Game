#pragma once
#include<vector>
#include<iostream>
#include<windows.h>
#define h 28
#define w 100
using namespace std;
class board
{

public:
	void draw_board(vector<COORD> snake_body, COORD  food_pos, COORD snake_pos ,int score);

};

