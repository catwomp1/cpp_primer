// interest.cpp -- Compare two different investment simple and componding interest
#include <iostream>

int main(int argc, char* argv[])
{
	using namespace std;
	float Daphne = 100.00;
	float Cleo = 100.00;
	Daphne = Daphne + 10.00;
	Cleo = Cleo + (0.05 * Cleo);
	int years = 1;
	for (years; Daphne > Cleo; ++years)
	{
		Daphne = Daphne + 10.00;
		Cleo = Cleo + (0.05 * Cleo);
	}
	
	cout << "It takes Cleo " << years << " years for her investment " << grftendl;
	cout << "to grow larger than Daphne" << endl;
	cout << "Daphne's current investment balance: " << Daphne << endl;
	cout << "Cleo's current investment balance: " << Cleo << endl;
			
	return 0;
}
