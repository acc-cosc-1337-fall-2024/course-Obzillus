#include<string>
#include<iostream>
#include <list>

using std::string;
using std::cout, std::cin;
using std::list;

void handle_invalid_input();
int get_menu_input(list<string> options);
int get_int_input(int min, int max);
string get_string_input(string msg);