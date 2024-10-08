#include<string>
#include<iostream>
#include <list>

using std::string;
using std::cout, std::cin;
using std::list;

void handle_invalid_input();
int get_menu_input(list<string> options);
int get_int_input(string msg, int min = -2147483647, int max = 2147483647);
string get_string_input(string msg);