// arrfun4.cpp -- array functions and const rework with pointers
#include <iostream>
const int Max = 5;

//Function prototypes
double * fill_array(double * arr_start, double * arr_end);
void show_array(const double * arr_start, const double * arr_end); // don't change data
void revalue(double r, double * arr_start, double * arr_end);

int main(int argc, char* argv[])
{
	using namespace std;
	double properties[Max];
	double * arr_end;
	arr_end = fill_array(properties, properties + Max);
	show_array(properties, arr_end);
	if (*arr_end > 0)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))	//Bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, arr_end);
		show_array(properties, arr_end);
	}
	cout << "Done.\n";

	return 0;
}

double * fill_array(double * arr_start, double * arr_end)
{
	using namespace std;
	double temp;
	double * pt;
	int index = 1;
	for (pt = arr_start; pt != arr_end; pt++)
	{
		cout << "Enter value #" << index << ": ";
		cin >> temp;
		if (!cin)	//Bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0) 	//signal to terminated
			break;
		*pt = temp;
		index++;
	}
	return arr_end;
}

//The following function can use, but not alter,
//the array whose address is array
void show_array(const double * arr_start, const double * arr_end)
{
	const double * pt;
	int index = 1;
	for (pt = arr_start; pt != arr_end; pt++)
	{
		std::cout << "Property #" << index << ": $";
		std::cout << *pt << std::endl;
		index++;
	}
}

//Multiplies each element of properties by r
void revalue(double r, double * arr_start, double * arr_end)
{
	double * pt;
	for (pt = arr_start; pt != arr_end; pt++)
	{
		*pt *= r;
	}
}
