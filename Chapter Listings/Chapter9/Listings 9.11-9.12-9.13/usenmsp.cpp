// usenmsp.cpp -- using namespaces
#include <iostream>
#include "namesp.h"
// function prototypes
void other(void);
void another(void);

int main(int argc, char* argv[])
{
	using debts::Debt;					// makes the Debt structure definition avaliable
	using debts::showDebt;			// makes the showDebt function avaliable
	
	Debt golf = { {"Benny", "Goatsniff"}, 120.0 };
	showDebt(golf);
	other();
	another();
	return 0;
}

void other(void)
{
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = {"Doodles", "Glister"};
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	int i;
	for (i = 0; i < 3; i++)
		getDebt(zippy[i]);
	
	for (i = 0; i < 3; i++)
		showDebt(zippy[i]);
		
	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
	return;
}

void another(void)
{
	using pers::Person;
	Person collector = {"Milo", "Rightshift"};
	pers::showPerson(collector);
	std::cout << std::endl;
}
