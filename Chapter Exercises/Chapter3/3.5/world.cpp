// world.cpp -- Percentage of US population compaired to the worlds
#include <iostream>

int main(int argc, char* argv[])
{
	using namespace std;
	float world_population;
	float us_population;

	cout << "Enter the world's population: ";
	cin >> world_population;
	cout << "Enter the US population     : ";
	cin >> us_population;
	
	float percentage = (us_population / world_population) * 100;
			
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed point
	cout << "The population of the US is " << percentage << "% of the";
	cout << " world population" << endl;;
		
	return 0;
}
