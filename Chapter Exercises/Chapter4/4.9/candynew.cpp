// candynew.cpp -- creating dynamic structures
#include <iostream>
#include <string>

struct candybar
{
	std::string brand;
	float weight;
	int calories;
};

int main(int argc, char* argv[])
{
	using namespace std;	
	candybar * snacks = new candybar[3]
	{
		{"Mocha Munch", 2.3, 350},
		{"Super Crunch", 4.8, 655},
	  {"Crackle Snap", 1.11, 340}
	};
	
	cout << "Brand: " << snacks[0].brand << endl;
	cout << "Weight: " << snacks[0].weight << endl;
	cout << "Calories: " << snacks[0].calories << endl << endl;
	
	cout << "Brand: " << snacks[1].brand << endl;
	cout << "Weight: " << snacks[1].weight << endl;
	cout << "Calories: " << snacks[1].calories << endl << endl;
	
	cout << "Brand: " << snacks[2].brand << endl;
	cout << "Weight: " << snacks[2].weight << endl;
	cout << "Calories: " << snacks[2].calories << endl;
	
	delete [] snacks;
	return 0;
}