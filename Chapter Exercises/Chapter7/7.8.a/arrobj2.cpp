//arrobj2.cpp -- functions with array objects (C++11)
#include <iostream>
#include <string>
// constant data
const int Seasons = 4;

const char * Snames[Seasons] = 
	{"Spring", "Summer", "Fall", "Winter"};
	
//Function prototypes
void fill(double expenses[], int n);
void show(double expenses[], int n);

int main(int argc, char* argv[])
{
	double expenses[Seasons];
	fill(expenses, Seasons);
	show(expenses, Seasons);	
	return 0;
}

void fill(double expenses[], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> expenses[i];
	}
}

void show(double expenses[], int n)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << expenses[i] << endl;
		total += expenses[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
