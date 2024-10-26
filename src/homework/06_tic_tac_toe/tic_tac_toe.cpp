//cpp
#include <iostream>
#include "tic_tac_toe.h"

using std::cin,std::cout;

void TicTacToe::start_game(string first_player)
{
    player=first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void const TicTacToe::display_board() const
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<pegs[i+j]<<"|";
        }
        cout<<"\n |";
    }
}

bool TicTacToe::check_board_full()
{
    for (int i = 0; i < pegs.size()-1; i++)
    {
        if(pegs[i] == " ") return false;
    }
    return true;
}
