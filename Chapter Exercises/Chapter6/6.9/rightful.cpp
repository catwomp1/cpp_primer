// rightful.cpp -- Keep track of monetary contributions to the Society for the
//                 Preservation of Rightful Influence.
#include <iostream>
#include <fstream>   // File I/O support
#include <string>    // Support for exit()
#include <cstdlib>

struct contributors
{
	std::string name;
		   double amount;
};
const int SIZE = 60;
void showGrandPatrons(contributors * ps);  // Function prototype
void showPatrons(contributors * ps);  // Function prototype
unsigned numContributors = 0;
int main(int argc, char* argv[])
{
	using namespace std;
	ifstream inFile;  // Create ifstream object
	char filename[SIZE];
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename); // Open file
	if (!inFile.is_open()) // If file is in read status
		{
			cout << "Cound not open the file " << filename << endl;
			cout << "Program termination.\n";
			exit(EXIT_FAILURE); // Terminate
		}
	
	inFile >> numContributors; // Read in number of contributors
	inFile.get();
	contributors * ps = new contributors[numContributors];

	while (inFile.good())
	{
		for (int i = 0; i < numContributors; i++)
	  {
		  getline(inFile, ps[i].name);     // Read contributor name
		  inFile >> ps[i].amount;          // Read contribution amount
		  inFile.get();   
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
	
	inFile.close(); // Close file
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