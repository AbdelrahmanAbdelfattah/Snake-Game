#include <iostream>
#include"Snake.h"
#include"Food.h"
#include<conio.h>
#include<ctime>
#include<fstream>
#include"board.h"
#pragma warning(disable : 4996)
using namespace std;

#define w  100
#define h 28
int score = 0;


Snake snake({ w / 3, h / 2 }, 1);
Food food;
board bord;


int main()
{
  

    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console_color, 12);
    
    bool game_over = false;
    srand(time(0));
    food.makefood();
    

    while (true)
    {

        bord.draw_board(snake.get_snake(), food.getfood_pos(), snake.get_pos(), score);

        if (kbhit())
        {
            switch (getch())
            {
            case 'w': snake.change_dir('u'); break;
            case 'a': snake.change_dir('l'); break;
            case 's': snake.change_dir('d'); break;
            case 'd': snake.change_dir('r'); break;
            }
        }

        if (snake.gameover())
        {
            game_over = true;
            break;
        }
        if (snake.eaten(food.getfood_pos()))
        {
            food.makefood();
            snake.grow();
            score++;
        }

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });


        snake.move();
    }

    cout << "GAME OVER " << endl;

   
    


    return 0;
}

