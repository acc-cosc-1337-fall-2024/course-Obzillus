#include "menu_tools.h"
#include "func.h"

int main() 
{
	int menu_input;
	vector<string> options = {"Get GC Content", "Get DNA Complement"};
	do
	{		
	 	menu_input = get_menu_input(options);

		if(menu_input == 1)
		{
			string dna = get_string_input("Input DNA string: ");
			cout<<"GC Content: "<<get_gc_content(dna)<<"\n\n";
		}
		else if(menu_input == 2)
		{
			string dna = get_string_input("Input DNA string: ");
			cout<<"DNA Complement: "<<get_dna_complement(dna)<<"\n\n";
		}

	} while (menu_input!=-1);
	
	
	return 0;
}
