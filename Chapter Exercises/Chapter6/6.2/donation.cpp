// donation.cpp -- Read up to 10 donations and report the average and how many
//                 numbers in the array are larger thn the average
#include <iostream>
#include <cctype>

int main(int argc, char* argv[])
{
	using namespace std;
	double average = 0;
	double total = 0;
	int ArSize = 0;
	cout << "Enter number of double for array:" << endl;	
	cin >> ArSize;
	double * ps = new double[ArSize];
	int larger = 0;
	int i = 0;

	for (i; i < ArSize; i++)
	{
		cout << "Enter donation #" << i + 1 << ": ";
		if (!(cin >> ps[i]))
		{
			cin.clear();
			break;
		}
		else
		  total += ps[i];
 }
 if (i == 0)
 {
 		  i++;
 }
 
 average = total / i;
 cout << "The sum is: " << total << endl;
 cout << "The average is: " << average << endl;
 
 for (int j = 0; j < i; j++)
 {
 	if (ps[j] > average)
 		{
 			cout << "Donation #" << j + 1 << " is larger than average." << endl;
 			larger++;
 		}
 }
 
 cout << "Donations larger than average (qty): " << larger << endl;
 
 cin.get();
 cin.get();-
 cin.get();
 
 return 0;
}
