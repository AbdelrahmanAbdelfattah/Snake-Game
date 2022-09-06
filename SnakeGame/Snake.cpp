#include "Snake.h"

void Snake::move()
{
	switch (dir)
	{
	case('u'): pos.Y -= v; break;
	case('d'):pos.Y += v; break;
	case('l'):pos.X -= v; break;
	case('r'):pos.X += v; break;
	}
	if (pos.X > w - 2)
		pos.X = 1;
	if (pos.X < 1)
		pos.X = w - 2;

	if (pos.Y > h - 2)
		pos.Y = 1;
	if (pos.Y < 1)
		pos.Y = h - 2;


	snake.push_back(pos);
	if (snake.size() > length)
		snake.erase(snake.begin());
}

COORD Snake::get_pos()
{
	return pos;
}

bool Snake::eaten(COORD food_pos)
{
	return pos.X == food_pos.X && pos.Y == food_pos.Y;
}
void Snake::grow()
{
	length++;
}

Snake::Snake(COORD pos, int v)
{
	this->pos = pos;
	this->v = v;
	length = 1;
	dir = 'n';
	snake.push_back(pos);
}

void Snake::change_dir(char dir)
{
	this->dir = dir;
}

bool Snake::gameover()
{
	if (pos.X <1 || pos.X>w - 2 || pos.Y<1 || pos.Y>h - 2)return true;
	for (int i = 0; i < snake.size() - 1; i++)
		if (pos.X == snake[i].X && pos.Y == snake[i].Y)
			return true;
	return false;
}

vector<COORD> Snake::get_snake() {
	return snake;
}

