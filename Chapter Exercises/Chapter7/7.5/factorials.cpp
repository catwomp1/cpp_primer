// factorials.cpp -- Using recursive function to find factorials
#include <iostream>
//Function prototype
long long factorial(int value);

int main(int argc, char* argv[])
{
	using namespace std;
	int value;
	long long result;

	cout << "Enter value (q to quit): ";
	while(cin >> value && value >= 0)
	{
		result = factorial(value);
		cout << "The factorial " << value << "! is: " << result << endl;
		cout << "Enter value (q to quit): ";
	}
	
	return 0;
}

long long factorial(int value)
{
	
	if (value == 0 || value == 1)
		return 1;
	  
	return value * factorial(value - 1);
}