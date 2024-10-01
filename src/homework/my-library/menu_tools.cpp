#include<iostream>
#include "menu_tools.h"

void handle_invalid_input()
{
	std::cin.clear();
	std::cin.ignore(99999,'\n');
	std::cout<<"Please enter valid input \n";
}