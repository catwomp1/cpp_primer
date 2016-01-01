// funcover.cpp -- Default function paramters
#include <iostream>

//Function prototype
void display(const char * str, int n = 0); // provide default argument
const int limit = 10;

int main(int argc, char* argv[])
{
	using namespace std;
	const char * str = "Slapcat"; // create string and initlizate it
	display(str); // display string
	for (int i = 0; i < 3; i++) // setup number of times function is called
	{
		cout << i <<  " = i\n";
		display(str, i); // pass in i, which is the formal arugument in the function
	}
	cout << "Done\n";

	return 0;
}

void display(const char * str, int n) // do not need to include deault argument
{
	static int uses = 0; // declared as static so it is avaliable after function ends
	int lim = ++uses; // increment lim before assigning value
	if (n == 0) // if 0, the only one fuction call was made
		lim = 1;	// set the lit to 1, indicating the function was called only once
	for (int i = 0; i < lim; i++) // display the string the number of times called
		std::cout << str << std::endl;
}