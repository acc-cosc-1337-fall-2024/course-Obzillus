#include<string>
#include<iostream>
#include <list>
#include <optional>

using std::string;
using std::cout, std::cin;
using std::list;
using std::optional, std::nullopt;

void handle_invalid_input();
int get_menu_input(list<string> options);
int get_int_input(string msg, optional<int> min = nullopt, optional<int> max = nullopt);
string get_string_input(string msg);