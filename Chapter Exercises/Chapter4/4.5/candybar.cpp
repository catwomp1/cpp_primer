// candybar.cpp -- creating structures
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
	candybar snack = {"Mocha Munch", 2.3, 350};
	cout << "Brand: " << snack.brand << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Calories: " << snack.calories << endl;
	
	return 0;
}
