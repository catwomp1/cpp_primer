// sumnums.cpp -- Ask for numbers as input and display each number as it is 
//                being read in and report the cumulative sum of the entries
#include <iostream>

int main(int argc, char* argv[])
{
	using namespace std;
	int number;
	cout << "Enter numbers - use: 0 to terminate" << endl;
	cin >> number;
	int sum = 0;
	while (number != 0)
	{
		sum = sum + number;
		cout << "Sum is now: " << sum << endl;
		cin >> number;
	}
	return 0;
}
