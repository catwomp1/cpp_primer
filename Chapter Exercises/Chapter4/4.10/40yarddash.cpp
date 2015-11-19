// 40yarddash.cpp -- Allows three times for the 40 yard dash to be entered by
//                   the user, then displays the times and the average.
#include <iostream>
#include <array>

int main(int argc, char* argv[])
{
	using namespace std;
	int times[3];
	
	cout << "Enter the 3 run times: " << endl;
	cin >> times[0];
	cin >> times[1];
	cin >> times[2];	
	
	unsigned average;
	average = (times[0] + times[1] + times[2]) / 3;
	
	cout << "*Times*" << endl;
	cout << times[0] << endl;
	cout << times[1] << endl;
	cout << times[2] << endl;
	cout << "Average time: " << average << endl;
		
	return 0;
}
