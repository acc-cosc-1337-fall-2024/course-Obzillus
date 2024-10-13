#include "menu_tools.h"

void handle_invalid_input()
{
	cin.clear();
	cin.ignore(99999,'\n');
	cout<<"Please enter valid input \n";
}

int get_menu_input(list<string> options){

	int menu_input;	
	int num_option = options.size();

	do {	

		//prompt user for menu input
		int i = 0;
		for(string option : options){
			i++;
			cout<<i<<"-"<<option<<"\n";
		}
		
		cout
		<<num_option+1<<"-Exit \n"
		<<"Input option: ";
	
		menu_input = get_int_input("",0,num_option+2);

		//asks for confirmation if exit number is inputed
 		if(menu_input == num_option+1){

			char confirm;

			cout<<"Are you sure you want to exit? (y/n): ";		
			cin>>confirm;

			//exits program if confirmed re-prompt user if not
			if(confirm == 'y' || confirm == 'Y') return -1;
			else continue;
		}

		//at this point the number should be in bounds
		return menu_input;

	} while(true);

	return -1;
}

int get_int_input(string msg, optional<int> min, optional<int> max){

	int input;
	cout<<msg;
	//prompts the user until a valid number is inputed
	while(!(cin>>input)||input < min.value_or(-2147483647)||input > max.value_or(2147483647))
	{
		handle_invalid_input();
	}
	return input;
}

string get_string_input(string msg)
{
	string input;
	cout<<msg;
	while(!(cin>>input))
	{
		handle_invalid_input();
	}
	
	return input;
}