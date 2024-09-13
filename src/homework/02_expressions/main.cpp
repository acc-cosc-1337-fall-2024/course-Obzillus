//write include statements
#include<iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout, std::cin;

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;


	cout<<"Enter Meal Amount: ";
	cin>>meal_amount;

	cout<<"Enter Tip Rate: ";
	cin>>tip_rate;
	//If tip_rate is more than one, turn to a decimal, allowing the user to choose what way they want to represent the percentage.
	if(tip_rate>1){
		tip_rate /= 100;
	}

	tax_amount = get_sales_tax_amount(meal_amount);
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount+tax_amount+meal_amount;

	cout
	<<"======================================"<<"\n"
	<<"Meal Amount: "<<meal_amount<<"\n"
	<<"Sales Tax: "<<tax_amount<<"\n"
	<<"Tip Amount: "<<tip_amount<<"\n"
	<<"Total: "<<total<<"\n";

	return 0;
}
