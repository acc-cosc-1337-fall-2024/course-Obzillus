//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cin; using std::cout;

int main()
{
	int num;
	
	cout<<"Enter a number: ";
	cin>>num;

	int result = multiply_numbers(num);

	cout<<"Your number multiplied by 5 was: "<<result<<"\n";

	int num1 = 4;

	result = multiply_numbers(num1);

	cout<<"4 multiplied by 5 was: "<<result<<"\n";

	return 0;
}
