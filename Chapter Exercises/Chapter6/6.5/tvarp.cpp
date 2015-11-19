// tvarp.cpp -- Solicit incomes and report tax owed
#include <iostream>

const int under_5000 = 0;
const int next_10000 = 1000;
const int next_20000 = 3000;
int main(int argc, char* argv[])
{
	using namespace std;
	double income = 0;
	double taxable_amt = 0;
	double tax = 0;

  cout << "Enter income: ";
	while ((cin >> income))
	{
		if (income > 0 && income <= 5000)
			{
				cout << "Your income amount of: " << income << " is non taxable" << endl;
			}
		else if (income > 5000 && income <= 15000)
			{
				taxable_amt = income - 5000;
				tax = (taxable_amt * 0.10) + under_5000;
				cout << "Your income amount of: " << income << " is subject to: " << tax << " tvarp's." << endl;
			}
		else if (income > 15000 && income <= 35000)
			{
				taxable_amt = income - 15000;
				tax = (taxable_amt * 0.15) + under_5000 + next_10000;
				cout << "Your income amount of: " << income << " is subject to: " << tax << " tvarp's" << endl;
			}
		else if (income > 35000)
			{
				taxable_amt = income - 35000;
				tax = (taxable_amt * 0.20) + under_5000 + next_10000 + next_20000;
				cout << "Your income amount of: " << income << " is subject to: " << tax << " tvarp's" << endl;
			}
		cout << "Enter income: ";	
	}
	return 0;
}
