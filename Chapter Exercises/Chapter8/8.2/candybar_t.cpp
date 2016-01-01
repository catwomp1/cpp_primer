// candybar_t.cpp -- function overloading examples
#include <iostream>
#include <string>
#include "candybar_t.h"

int main(int argc, char* argv[])
{
	using namespace std;
	// Create structure object
	candybar mars = {"Mars", 1.55, 255};
	cout << "Before update" << endl;
	display(mars);
	cout << "Call update function and pass it values" << endl;
	update(mars, "Twix", 1.90, 420);
	cout << "Atfer update" << endl;
	display(mars);
	cout << "Call update function and pass no values - Use defaults" << endl;
	update(mars);
	cout << "After update" << endl;
	display(mars);
	cout << "Bye!\n";
	return 0;
}
