//h
#include <vector>
#include <string>

using std::vector;
using std::string;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{

public:
    bool game_over(){return check_board_full();};
    void start_game(string first_player);
    void mark_board(int position);
    string get_player(){return player;} const
    void display_board() const;

private:
    void set_next_player(){player = player=="X" ? "Y" : "X";};
    bool check_board_full();
    void clear_board() ;
    string player;
    vector<string> pegs;
};


#endif