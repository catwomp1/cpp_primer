// twoint.cpp -- Sum and display all of the values between two given integers
#include <iostream>

int main(int argc, char* argv[])
{
	using namespace std;
	
	int first_int, second_int;
		
	cout << "Please enter first integer value: ";
	cin >> first_int;
	cout << "Please enter second integer value: ";
	cin >> second_int;
	int count = first_int;
	int sum = 0;
	for (count; count <= second_int; ++count)
	{
		sum = sum + count;
	}
	
	cout << "The total sum for all integers between " << first_int << " and ";
	cout << second_int << " is: " << sum << endl;
		
	return 0;
}
