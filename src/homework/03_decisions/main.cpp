//write include statements
#include <iostream>
#include "decisions.h"

using std::cout, std::cin;

int main() 
{
	cout
	<<"    MAIN MENU \n"
	<<"1-Letter grade using if \n"
	<<"2-Letter grade using switch \n"
	<<"3-Exit \n";

	int input;
	cin>>input;

	//exits if 3 was entered
	if(input == 3){
		cout<<"Exiting program \n";
		return 0;
	} 

	int num_grade;
	std::string letter_grade;

	cout<<"Please input grade \n";
	cin>>num_grade;

	//exits if number is out of range
	if(num_grade < 0 || num_grade > 100)
	{
		cout<<"Number out of range (0-100) \n";
		return 0;
	}

	if(input == 1) letter_grade = get_letter_grade_using_if(num_grade);
	if(input == 2) letter_grade = get_letter_grade_using_switch(num_grade);

	cout<<"Letter grade: "<<letter_grade<<"\n";

	return 0;
}