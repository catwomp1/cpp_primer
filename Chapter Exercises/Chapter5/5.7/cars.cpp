// cars.cpp -- Structure that holds information about cars
#include <iostream>
#include <string>
#include <cstring>

struct car 
{
	//char make[ArSize];
	std::string make;
	int year;
};

int main(int argc, char* argv[])
{
	using namespace std;
	int count = 0;
	
	cout << "Please enter number of cars to catalog: ";
	cin >> count;
	cin.get();
	// Create count number of structures
	car * ps = new car [count];
	
	for (int i = 0; i < count; i++)
	{
		cout << "Enter vehicle information for vehicle: " << i + 1 << endl;
		cout << "Enter make: ";
		getline(cin, ps[i].make);
		cout << "Enter year: ";
		cin >> ps[i].year;
		cin.get();
  }
	                
	cout << "Here is your collection: " << endl;              
	
	for (int j = 0; j < count; j++)
	{
	  cout << ps[j].year << " " << ps[j].make << endl;   
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
	return 0;
}
