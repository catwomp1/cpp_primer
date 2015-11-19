// boporiginal.cpp -- List members by real name, job title, secret name
//                    or by a member's preference
#include <iostream>
#include <string>

const int strsize = 30;
const int ArSize = 10;
//Benevolent Order of Programmers name strucutre
struct bop
{
		char fullname[strsize];  // real name
		char title[strsize];     // job title
		char bopname[strsize];   // secret BOP name
		int preference;          // 0 = fullname, 1 = title, 2 = bopname
};		

bop data[10] =
{
	{"Brian Webb","Programmer","Dolomite",0},
  {"Phil Lee","Security Expert","Goat",1},
  {"Andrew B Holt","Support","Showboat",2},
  {"John Alley","Senior Programmer","SuperZack",0},
  {"Marcus Bates","Senior Programmer","SlapHappy",1},
  {"Tim Estes","Programmer","SuperMan",2},
  {"Charles Fincher","Programmer","NewGuy",0},
  {"Julia Hancock","Programmer","CSharpExpert",1},
  {"Rick Hopping","System Analsys","EasyGoing",2},
  {"Brenda Scott","Programmer","CoolGuy",0}
};

void showMenu();  // function prototype

int main(int argc, char* argv[])
{
	using namespace std;
	char choice;
	showMenu();
	cin >> choice;

	while (choice != 'q' && choice != 'Q')
	{
		switch(choice)
		{
			case 'a'  :
			case 'A'  :
				{
					cout << "Here are your results by name" << endl;
		      for (int i = 0; i < ArSize; i++)
			    {
			    	cout << data[i].fullname << endl;
			    }
			    cin >> choice;
			    break;
	      }
			case 'b'  :
			case 'B'  :
				{
		      cout << "Here are your results by title" << endl;
		      for (int i = 0; i < ArSize; i++)
				  {
				  	cout << data[i].title << endl;
				  }
				  cin >> choice;
				  break;
	    	}
			case 'c'  :
		  case 'C'  :
		  	{
	  	    cout << "Here are your results by bopname" << endl;
		      for (int i = 0; i < ArSize; i++)
		      {
		  	    cout << data[i].bopname << endl;
		      }
		      cin >> choice;
		      break;
		    }
		  case 'd'  :
		  case 'D'  :
				{
		      cout << "Here are your results by preference" << endl;
		      for (int i = 0; i < ArSize; i++)
	  	    {
			       int num = data[i].preference;
		         switch(num)
		        {
		  		    case 0 : 
		  			  {
		  				 cout << data[i].fullname << endl;
		  			   break;
		  			  }
		  		   case 1 :
			  		 {
			  			cout << data[i].title << endl;
				  	  break;
				  	 }					
				     case 2 :
				     {
				  	  cout << data[i].bopname << endl;
				  	  break;
				     }
			     }			
		     } 
		     cin >> choice;
		     break;	
		    }
			  default   : 
				{ 
					cout << "Not a valid choice" << endl;
					cin >> choice;
					break;
				}
		} showMenu();
  
  }
	return 0;
}

void showMenu() // display menu choices
{
	std::cout << "Please enter sorting choice" << std::endl;
	std::cout << "a.  display by name    b.  display by title" << std::endl; 
	std::cout << "c.  display by bopname d.  display by preference" << std::endl;
	std::cout << "q.  quit" << std::endl;
}