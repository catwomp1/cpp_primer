
// formore.cpp -- more looping with for
#include <iostream>
const int ARSIZE = 16;

int main(int argc, char* argv[])
{
	long long factorials[ARSIZE];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ARSIZE; i++)
	factorials[i] = i * factorials[i-1];
	for (int i = 0; i < ARSIZE; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	return 0;
}
