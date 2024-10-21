#include<string>
#include<iostream>
#include <vector>
#include <optional>

using std::string;
using std::cout, std::cin;
using std::vector;
using std::optional, std::nullopt;

void handle_invalid_input();
int get_menu_input(vector<string> options);
int get_int_input(optional<string> msg, optional<int> min = nullopt, optional<int> max = nullopt);
string get_string_input(optional<string> msg);