//write include statements
#include <iostream>
#include "repetition.h"
//write using statements

using std::cout, std::cin;

int main() 
{
	int menu_input;	

	do {

		//prompt user for menu input
		cout
		<<"1-Factorial \n"
		<<"2-Greatest Common Divisor \n"
		<<"3-Exit \n"
		<<"Input option: ";
	
		//re-prompt user if invalid number is given
		if(!(cin>>menu_input) || menu_input <= 0 || menu_input >= 4) {
			handle_invalid_input();
			continue;
		}

		//asks for confirmation if 3(exit) is inputed
 		if(menu_input == 3){

			char confirm;

			cout<<"Are you sure you want to exit? (y/n): ";		
			cin>>confirm;

			//exits program if confirmed re-prompt user if not
			if(confirm == 'y' || confirm == 'Y') return 0;
			else continue;
		}

		//if the input is 1 or 2 then prompt user for a number
		int input = 0;
		cout<<"Input number: ";
		//prompts the user until a valid nubmer is inputed
		while(!(cin>>input)||input<=0){
			handle_invalid_input();
			continue;
		}

		if(menu_input == 1){
			cout<<"factorial of "<<input<<" is "<<factorial(input)<<"\n";
		}
		else if(menu_input == 2){
			//promt user for a secend number
			int input2;
			cout<<"Input secend number: ";
			//prompts the user until a valid nubmer is inputed
			while(!(cin>>input2)||input2<=0)
			{
				handle_invalid_input();
			}

			cout<<"gcd of "<<input<< " and "<<input2<<" is "<<gcd(input, input2)<<"\n";
		}

	} while(menu_input != -1);

	return 0;
}
