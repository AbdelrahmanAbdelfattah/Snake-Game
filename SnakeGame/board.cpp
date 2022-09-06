#include "board.h"

void board::draw_board(vector<COORD> snake_body, COORD food_pos, COORD snake_pos ,int score)
{
	cout << " Your score is : " << score << endl;
    for (int i = 0; i < h; i++)
    {
        cout << "\t^";

        for (int j = 0; j < w; j++)
        {
            if (  i == h - 1||i == 0)
                cout << "^";
            else if (food_pos.Y == i && food_pos.X == j + 1)
                cout << "o";
            else if (j + 1 == snake_pos.X&&i == snake_pos.Y  )
                cout << "0";
           
            else
            {
                bool is = false;
                for (int k = 0; k < (int)snake_body.size() - 1; k++)
                {
                    if (snake_body[k].Y == i && snake_body[k].X == j + 1)
                    {

                        cout << "O";

                        is = true;
                        break;
                    }
                }
                if (!is)
                    cout << " ";
            }

        }
        cout << "^" << endl;
    }
}
