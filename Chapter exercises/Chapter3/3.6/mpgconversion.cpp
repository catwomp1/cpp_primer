// mpgconversion.cpp -- Accept miles driven and number of gallons used and
//                      display miles per gallon (mpg).

#include <iostream>
using namespace std;

int main()
{
	float miles, fuel, mpg;
	cout << "Enter number of miles driven: ____\b\b\b\b";
	cin >> miles;
	cout << "Enter gallons of gas used: ___\b\b\b";
	cin >> fuel;
	
	mpg = miles / fuel;
	cout << "For a distance of: " << miles << " miles driven and " << endl;
	cout << fuel << " gallons of fuel used, your MPG is: " << mpg << endl;
	
	return 0;
}
