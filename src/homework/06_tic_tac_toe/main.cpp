#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include "menu_tools.h"

using std::cin, std::cout;

int main() 
{
    TicTacToeManager manager;
    TicTacToe game;

    string first_player = "";
    do {
        cout << "Enter first player (X/O): ";
        cin >> first_player;
    } while (first_player != "X" && first_player != "O");

    string exitgame;
    do {
        game.start_game(first_player);

        while (!game.game_over()) {
            int pos;
            pos = get_int_input("Enter Pos: ", 1, 9);

            game.mark_board(pos);
            game.display_board();
        }

        cout << game.get_winner() << " won!!!\n";
        
        manager.save_game(game);

        int x, o, t;
        manager.get_winner_total(x, o, t);
        cout << "Current Scores: X wins: " << x << ", O wins: " << o << ", Ties: " << t<< "\n";

        cout << "Exit? (y/n): ";
        cin >> exitgame;

    } while (exitgame != "y");

    return 0;
}