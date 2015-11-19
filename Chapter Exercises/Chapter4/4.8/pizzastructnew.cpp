// pizzaservice -- Pizza analysis service with dynamically allocated structures
#include <iostream>
#include <string>

struct pizzaStruct
{
	  std::string company;
		float diameter;
		float weight;
};
	
int main(int argc, char* argv[])
{
	using namespace std;
	pizzaStruct pizzaItem;
	
	cout << "Enter company name: ";	
	getline(cin, pizzaItem.company);
	cout << "Enter pizza diameter: ";
	cin >> pizzaItem.diameter;
	cout << "Enter pizza weight: ";
	cin >> pizzaItem.weight;
	
	cout << "Company: " << pizzaItem.company << endl;
	cout << "Diameter: " << pizzaItem.diameter << endl;
	cout << "Weight: " << pizzaItem.weight << endl;
	
	return 0;
}