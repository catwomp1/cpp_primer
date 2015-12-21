// arrayfun.cpp -- Using array and functions
#include <iostream>
const int SIZE = 10;

//Function prototypes
int fill_array(double arr[], int size);
void show_array(const double arr[], int size);
void reverse_array(double arr[], int size);

int main(int argc, char* argv[])
{
	using namespace std;
	double arr[SIZE];  //Declare array of double values
	int elements;
	elements = fill_array(arr, SIZE); //Fill array
	cout << "Show array values: " << endl;
	show_array(arr, elements); //Show array
	cout << "Reverse and show array values: " << endl;
	reverse_array(arr, elements); //Reverse the array
	show_array(arr, elements); //Show array
	cout << "Reverse and show array values: " << endl;
	reverse_array(arr + 1, elements - 2); //Reverse the array (not first or last values)
	show_array(arr, elements); //Show array
		
	return 0;
}

int fill_array(double arr[], int size)
{
	using namespace std;
	double temp;
	int i;
	cout << "Enter up to " << size << " values -" << endl;
	for (i = 0; i < size; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)  //Bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated. \n";
			break;
		}
		else if (temp < 0) //signal to terminated
			break;
		arr[i] = temp;
	}
	return i;
}

void show_array(const double arr[], int size)
{
		for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void reverse_array(double arr[], int size)
{
	int i, j;
	double temp;
	for (i = 0, j = size - 1; j > i; i++, j--)
		{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
}
			