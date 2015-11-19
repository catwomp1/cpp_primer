// feetinches.cpp -- Convert and display inches to feet and inches 

#include <iostream>
const int INCHES_PER_FEET = 12;

void convert(int inches); // Function Prototype

int main(int argc, char* argv[])
{
	using namespace std;
	int inches = 0;
	
	cout << "Enter number of inches: __\b\b"; // Provide underscores for input
	cin >> inches;
	convert(inches); // Call function
	return 0;
}

void convert(int inches)
{
	int feet = 0;
	int remainder =  0;
	feet = inches / INCHES_PER_FEET;
	remainder = inches % INCHES_PER_FEET;
	std::cout << inches << " inches is " << feet << " feet, " << remainder;
	std::cout << " inches" << std::endl;	
	// Note: Need to use the 'std::' qualifier since the using directive is included
	// in the main() section of the program and not outside.
}	