// names.cpp -- Ask user for first and last name and then display formated string
#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	const int SIZE = 15;
	char firstName [SIZE];
	char lastName	[SIZE];
	char fullName [31];
	
	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter your last name: ";
	cin >> lastName;
	
	strcat(lastName, ", ");
	strcat(lastName, firstName);
	strcpy(fullName, lastName);
	
	cout << "Here's the information in single string: " << fullName << endl;
	
	

	return 0;
}
