// foolsoriginal.cpp -- Monthly sales for "C++ for Fools" book 
#include <iostream>

const int ArSize = 12;
const char * months[ArSize] =
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

int main(int argc, char* argv[])
{
	using namespace std;
	int books[ArSize];

	unsigned total = 0;
	 		
	for (int i = 0; i < ArSize; i++)
	{ 
		cout << "Please enter the number of books for month " << months[i] << endl;
    cin >> books[i];
		total += books[i];
	}
	 
  cout << "Total sales: " << total << endl;	
	return 0;
}
