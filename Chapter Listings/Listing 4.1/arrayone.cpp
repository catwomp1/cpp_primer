// arrayone.cpp -- small array of integers
#include <iostream>

int main(int argc, char* argv[])
{
	using namespace std;
	int yams[3];				// Create array with three elements
	yams[0] = 7;				// Assign value to first elements
	yams[1] = 8;
	yams[2] = 6;
	
	int yamcosts[3] = {20, 30, 5};	// Create, initialize array
// NOTE: If your C++ compiler or translator can't initialize
//       this array, use static int yamcosts[3] instead of
//       int yamcosts[3]

  cout << "Total yams = ";
  cout << yams[0] + yams[1] + yams[2] << endl;
  cout << "The package wiht " << yams[1] << " yams costs ";
  cout << yamcosts[1] << " cents per yam.\n";
  int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
  total = total + yams[2] * yamcosts[2];
  cout << "The total yam expense is " << total << " cents.\n";
  
  cout << "\nSize of yams array = " << sizeof yams;
  cout << " bytes.\n";
  cout << "Size of one element = " << sizeof yams[0];
  cout << " bytes.\n";
	return 0;
}
