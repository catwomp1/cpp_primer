// rightful.cpp -- Keep track of monetary contributions to the Society for the
//                 Preservation of Rightful Influence.
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

struct contributors
{
	std::string name;
		   double amount;
};
const int SIZE = 60;
void showGrandPatrons(contributors * ps);
void showPatrons(contributors * ps);
int numContributors = 0;
int main(int argc, char* argv[])
{
	using namespace std;
	ifstream inFile;
	char filename[SIZE];
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
		{
			cout << "Cound not open the file " << filename << endl;
			cout << "Program termination.\n";
			exit(EXIT_FAILURE);
		}
	
	inFile >> numContributors; // Read in number of contributors
	contributors * ps = new contributors[numContributors];
	//cin.get();
	while (inFile.good())
	{
		for (int i = 0; i < numContributors; i++)
	  {
		  //cout << "Enter contributor name: ";
		  inFile >> ps[i].name;
		  //cout << "Enter contribution amount: ";
      inFile >> ps[i].amount;
      //cin.get();
	  }
  }
  
  if (inFile.eof())
  	cout << "End of file reached." << endl;
  else if (inFile.fail())
  	cout << "Input terminated by data mismatch." << endl;
  else
  	cout << "Input terminated for unknown reason." << endl;
  
	showGrandPatrons(ps);
	showPatrons(ps);
	return 0;
}

void showGrandPatrons(contributors * ps)
{
	int total = 0;
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
	  	{
	  		std::cout << "none" << std::endl;
	  	}
}

void showPatrons(contributors * ps)
{
	int total = 0;
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
	  	{
	  		std::cout << "none" << std::endl;
	    }
}			