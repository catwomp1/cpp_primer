// opentext.cpp -- Open and read a text file character-bycharacter to the end
//                 of the file, and report the number of characters in the file.1
#include <iostream>
#include <fstream>			// file I/O support
#include <cstdlib>			// support for exit()

const int SIZE = 60;
int main(int argc, char* argv[])
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;		// object for handling file input
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);		// associate inFile with a file
	if (!inFile.is_open())    // failed to open file
		{
			cout << "Could not open the file " << filename << endl;
			cout << "Program terminating.\n";
			exit(EXIT_FAILURE);
		}
	double totalCount;
	char ch;
	inFile >> ch;
	
	while (inFile.good())
	{
		totalCount++;
		inFile >> ch;
	}
	
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";
	
	if (totalCount == 0)
		cout << "No data processed.\n";
	else
		cout << "Total number of characters in file: " << totalCount << endl;
	
	inFile.close();	// Close file
	return 0;
}
