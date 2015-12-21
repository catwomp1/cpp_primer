//arrobj3.cpp -- functions with array objects (C++11)
#include <iostream>
#include <string>
//Constant data
const int Seasons = 4;

const char * Snames[Seasons] = 
	{"Spring", "Summer", "Fall  ", "Winter"};
//Structure to hold amounts for each season	
struct expenses
{
	double amount[Seasons];
};
	
//Function prototypes
void fill(expenses * costs, int n);  //Pass in a pointer to a structure
void show(const expenses * costs, int n); //Do not allow show function to
																				  //modify structure
int main(int argc, char* argv[])
{
	using namespace std;
	
	expenses season_costs; //Create structure variable
	
	fill(&season_costs, Seasons); //Pass in starting address of structure
	show(&season_costs, Seasons);	//Pass in starting address of structure
	return 0;
}

void fill(expenses * season_costs, int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> season_costs->amount[i];
	}
}

void show(const expenses * season_costs, int n)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < n; i++)
	{
		cout << Snames[i] << ": $" << season_costs->amount[i] << endl;
		total += season_costs->amount[i];
	}
	cout << "Total Expenses: $" << total << endl;
}

