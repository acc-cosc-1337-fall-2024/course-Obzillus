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

void TicTacToe::display_board() const
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
    for (int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ") return false;
    }
    return true;
}

void TicTacToe::clear_board()
{
    for (int i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
}
