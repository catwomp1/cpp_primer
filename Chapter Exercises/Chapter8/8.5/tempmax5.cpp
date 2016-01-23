// tempmax5.cpp -- using templates
#include <iostream>
const int ARSIZE = 5;
// function template prototype
template <typename T> // or class T
T max5(T a[]);

int main(int argc, char* argv[])
{
	using namespace std;
  int i[ARSIZE] = {2, 45, 30, 17, 22};
  double d[ARSIZE] = {3.45, 2.3, 9.44, 11.66, 7.35};
	// call max5() function for integers
	int max_int = max5(i);
	cout << "Maximum interger value is: " << max_int << endl;
	double max_double = max5(d);
	cout << "Maximum double value is: " << max_double << endl;
	cout << "Done!" << endl;
	
	return 0;
}

// fucntion template definition
template <typename T> // or class T
T max5(T a[])
{
	T max = a[0];
	for (int i = 0; i < 5; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}

