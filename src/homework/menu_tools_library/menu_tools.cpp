#include "menu_tools.h"

void handle_invalid_input()
{
	std::cin.clear();
	std::cin.ignore(99999,'\n');
	std::cout<<"Please enter valid input \n";
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
	
		//re-prompt user if invalid number is given
		if(!(cin>>menu_input) || menu_input <= 0 || menu_input >= num_option+2) {
			handle_invalid_input();
			continue;
		}

		//asks for confirmation if exit number is inputed
 		if(menu_input == num_option+1){

			char confirm;

			cout<<"Are you sure you want to exit? (y/n): ";		
			cin>>confirm;

			//exits program if confirmed re-prompt user if not
			if(confirm == 'y' || confirm == 'Y') return 0;
			else continue;
		}

		//at this point the number should be in bounds
		return menu_input;

	} while(true);

	return -1;
}