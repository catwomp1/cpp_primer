// rightfuloriginal.cpp -- Keep track of monetary contributions to the Society for the
//                 Preservation of Rightful Influence.
#include <iostream>
#include <string>

struct contributors
{
	std::string name;
		   double amount;
};

const int SIZE = 60;
void showGrandPatrons(contributors * ps);  // Function prototype
void showPatrons(contributors * ps);       // Function prototype
unsigned numContributors = 0;

int main(int argc, char* argv[])
{
	using namespace std;
	cout << "Please enter number of contributors.\n";
  cin >> numContributors; // Read in number of contributors
	contributors * ps = new contributors[numContributors];
	cin.get();
	
	for (int i = 0; i < numContributors; i++)
	  {
		  cout << "Enter contributor name: ";
		  getline(cin, ps[i].name);
		  cout << "Enter contribution amount: ";
      cin >> ps[i].amount;
      cin.get();
	  }
	  
 	showGrandPatrons(ps);  // Call function showGrandPatrons with
 	                       // pointer to array of contributors structure
	showPatrons(ps);			 // Call function to showPatrons with
	                       // pointer to array of contributors structure
	return 0;
}

void showGrandPatrons(contributors * ps)
{
	unsigned total = 0;
	std::cout << "**Grand Patrons**" << std::endl;
	for (int i = 0; i < numContributors; i++)
	{
		if (ps[i].amount > 10000)
			{ 
				std::cout << "Name:   " << ps[i].name << std::endl;
			  std::cout << "Amount: " << ps[i].amount << std::endl;
					++total;
			}				
	}
	  if (total == 0)
	  	  std::cout << "none" << std::endl;	  	
}

void showPatrons(contributors * ps)
{
	unsigned total = 0;
  std::cout << "**Patrons**" << std::endl;
	for (int i = 0; i < numContributors; i++)
	{
		if (ps[i].amount <= 10000)
			{
				std::cout << "Name:   " << ps[i].name << std::endl;
				std::cout << "Amount: " << ps[i].amount << std::endl;
					++total;
			}
	}
	  if (total == 0)
	  	  std::cout << "none" << std::endl;    
}			