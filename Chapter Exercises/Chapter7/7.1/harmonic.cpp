// harmonic.cpp -- calculate the harmonic mean of numbers read from user input
#include <iostream>

// Function Prototype
double harmonic(double x, double y); // Calculate harmonic mean

int main(int argc, char* argv[])
{
	using namespace std;
	
	double x, y, result;
	result = 0;
	cout << "Enter number pairs: ";
	cin >> x >> y; // slick use of cin
	while (x > 0 && y > 0) 
	{
			result = harmonic(x, y);						
			cout << "The harmonic mean of: " << x << " and " << y << " is: " 
			     << result << endl << endl;
			cout << "Enter number pairs: ";
			cin >> x >> y; // slick use of cin
	}
		
	return 0;
}

double harmonic(double x, double y)
{
	double mean;
	
	mean = 2.0 * x * y / ( x + y );
	
	return mean;
}
