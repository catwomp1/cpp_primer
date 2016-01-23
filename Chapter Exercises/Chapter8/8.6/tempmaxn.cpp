// tempmaxn.cpp -- using template specializations
#include <iostream>
#include <cstring> // for strlen()

// template function prototypes
template <class T> // or typename T
T maxn(T a[], int n);

// explicit specialization
template <> char * maxn(char * str[], int n);

int main(int argc, char* argv[])
{
	using namespace std;
	int i[6] = {2, 5, 6, 9, 1, 14};
	double d[4] = {2.4, 5.6, 3.3, 9.8};
	char * arr[] = {"Cat slap", "Rerun", "Short stop", 
										 "Super fast", "Longest string"};	
										 
	cout << "Maximum interger: " << maxn(i, 6) << endl;
	cout << "Maximum double: " << maxn(d, 4) << endl;
	cout << "Maximum string: " << maxn(arr, 5) << endl;
	cout << "Done!" << endl;

	return 0;
}

template <class T> // or typename typename
T maxn(T a[], int n)
{
	T max = a[0];
	
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}

template <> char * maxn(char * str[], int n) // explicit specialization
{
	char * ps;
	ps = str[0];
	int max = strlen(str[0]); // get lenght of string
	for (int i = 0; i < n; i++)
	{
		if (max < strlen(str[i]))
		{
			max = strlen(str[i]); 
			ps = str[i];
		}
	}
	return ps;
}

	