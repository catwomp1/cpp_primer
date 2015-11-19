// pizzaservice -- Pizza analysis service structures

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
	pizzaStruct * ps = new pizzaStruct;
	
	cout << "Enter pizza diameter: ";
	cin >> ps->diameter;
	cin.get();
	cout << "Enter company name: ";	
	getline(cin, ps->company);
	cout << "Enter pizza weight: ";
	cin >> ps->weight;
	
	cout << "Company: " << ps->company << endl;
	cout << "Diameter: " << ps->diameter << endl;
	cout << "Weight: " << ps->weight << endl;
	
	return 0;
}
