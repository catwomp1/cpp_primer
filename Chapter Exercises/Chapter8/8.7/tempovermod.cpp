// tempovermod.cpp -- template overloading modified
#include <iostream>

// template function prototypes
template <typename T>		// template A
void ShowArray(T arr[], int n);
template <typename T>		// template B
void ShowArray(T * arr[], int n);
template <typename T>
void SumArray(T arr[], int n); // sum array of ints
template <typename T>
void SumArray(T * arr[], int n); // sum of member values

struct debts
{
	char name[50];
	double amount;
};

int main(int argc, char* argv[])
{

	int things[6] = {13, 31, 103, 301, 310, 130};
	debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[3];
	
	// set pointers to the amount members of the structures in mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	
	std::cout << "Listing Mr. E's counts of things:\n";
	
	// things is an array of int
	ShowArray(things, 6);	// uses template A
	std::cout << "Listing Mr. E's debts:\n";
	
	// pd is an array of pointers to double
	ShowArray(pd, 3);		 // uses template B	
	
	// call SumArray to total things
	SumArray(things, 6);
	
	// call SumArray to total structure members
	SumArray(pd, 3);

	return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
	for (int i = 0; i < n; i++)
		std::cout << *arr[i] << ' ';
	std::cout << std::endl;
}

template <typename T>
void SumArray(T arr[], int n)
{
	T total = 0;
	
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	std::cout << "Total of things: " << total << std::endl;
}

template <typename T>
void SumArray(T * arr[], int n)
{
	T total = 0;
	
	for (int i = 0; i < n; i++)
	{
		total += *arr[i];
	}
	std::cout << "Total of members: " << total << std::endl;
}


