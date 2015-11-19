// menu.cpp -- Menu driven program
#include <iostream>
void showmenu();

int main(int argc, char* argv[])
{
	using namespace std;
	showmenu();
	char choice;
	cin >> choice;
	while (choice != '@')
	{
	  if (choice == 'c' || choice == 'p' || choice == 't' || choice == 'g' ||
		    choice == 'C' || choice == 'P' || choice == 'T' || choice == 'G')
	  {
			  switch (choice)
			  {
			  	case 'c':
			    case 'C':	cout << "This is a carnivore" << endl;
			  	  break;
			    case 'p':
			    case 'P': cout << "This is a pianist" << endl;
			  	  break;
			    case 't':
			    case 'T': cout << "This is a tree" << endl;
			    	break;
			    case 'g':
			    case 'G': cout << "This is a game" << endl;
			    	break;
			  }			
			  showmenu();
			  cin >> choice;
	  }
	 else if (choice == '@')
	 	{
	 		cout << "Bye!" << endl;
	 		break;
	 	}
	 	else
		{
		cout << "That is not a valid character" << endl;
		showmenu();
		cin >> choice;
	  }
	}
	return 0;
}

void showmenu()
{
	std::cout << "Please enter a valid character choice" << std::endl;
	std::cout << "C) Carnivore     P) Pianist" << std::endl;
	std::cout << "T) Tree          G) Game" << std::endl;
}