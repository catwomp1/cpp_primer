// fools.cpp -- Monthly sales for "C++ for Fools" book - Exercise 5.5
#include <iostream>

const char * months[12] =
{
	"January",
	"Febuary",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

const char * years[3] =
{
	"one",
	"two",
	"three"
};

const int NUM_OF_YEARS = 3;

int main(int argc, char* argv[])
{
	using namespace std;
	int books [NUM_OF_YEARS] [12];

	int total = 0;
		int yearly; 
		
	for (int i = 0; i < 3; i++)
	{ 
		yearly = 0;
		for (int j = 0; j < 12; j++)
		{
			cout << "Please enter the number of books for year " << years[i];
			cout << ", month " << months[j] << endl;
	    cin >> books[i][j];
			total += books[i][j];
		  yearly += books[i][j];
	  }
	  cout << "Total sales for year " << years[i] << " = " << yearly << endl;
	}
	cout << "Total sales: " << total << endl;	
	return 0;
}
