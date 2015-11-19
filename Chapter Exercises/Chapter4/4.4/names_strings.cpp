// names_strings.cpp -- Ask user for first and last name then displays in format
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	using namespace std;
	
	string firstName, lastName, fullName;
	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << "Enter your last name: ";
	getline(cin, lastName);
	fullName = lastName + ", " + firstName;
	cout << "Here's the information in a single string: " << fullName << endl;
	
	return 0;
}
