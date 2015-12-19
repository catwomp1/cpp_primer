// golf.cpp -- display golf scores from array
#include <iostream>

const int SIZE = 10;

// Function Prototypes
int fill_array(int arr[], int limit);
void display(int arr[], int elements);
double averages(int arr[], int elements);

int main(int argc, char* argv[])
{
	using namespace std;
	int arr[SIZE]; // define array
	int elements;
	double golf_averages;
	elements = fill_array(arr, SIZE);
	golf_averages = averages(arr, elements);
	display(arr, elements);	
	cout << "Average score: " << golf_averages << endl;
	
	return 0;
}

int fill_array(int arr[], int limit)
{
	using namespace std;
	int temp, i;
	
	cout << "Keep track of your golf scores!" << endl;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)	// bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated. \n";
			break;
		}
		else if (temp < 0)	//signal to terminate
			break;
		arr[i] = temp;
	}
	return i;
}

double averages(int arr[], int elements)
{
	int scores = 0;
	double golf_averages;
	for (int i = 0; i < elements; i++)
	{
		scores += arr[i];
	}
	
	golf_averages = scores / elements;
	
	return golf_averages;
}

void display(int arr[], int elements)
{
	std::cout << "Golf Scores:" << std::endl;
	
	for (int i = 0; i < elements; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

