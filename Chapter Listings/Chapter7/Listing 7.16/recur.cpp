// recur.cpp -- using recursion
#include <iostream>

//Function prototype
void countdown(int n);

int main(int argc, char* argv[])
{
	countdown(4);  //Call the recursive function
	return 0;
}

void countdown(int n)
{
	std::cout << "Counting down ... " << n << " (n at " << &n << ")" << std::endl;
	if (n > 0)
		countdown(n-1);  //Function calls itself
	std::cout << n << ": Kaboom!" << "          (n at " << &n << ")" << std::endl;
}

