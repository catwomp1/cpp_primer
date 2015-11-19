// nestedexample.cpp -- Write a program using nested loops that asks the user to
//                      enter a value for the number of rows to display.  It
//                      should then display that many rows of asterisks, with
//                      one asterisk in the first row, two in the second row,
//                      and so on.  For each row, the asterisks are preceded by 
//                      the number of periods needed to make all the rows display
//                      a total number of characters equal to teh number of rows.
//   
//                      Sample:	Enter number of rows: 5
//                              ....*
//                              ...**
//                              ..***
//                              .****
//                              *****
//
#include <iostream>
const char Fill = '.';
const char Print = '*';

int main(int argc, char* argv[])
{
	using namespace std;	
	int numOfRows;
	cout << "Enter number of rows: ";
	cin >> numOfRows;
	
	for (int i = 0; i < numOfRows; i++) //count the row
	{
		for (int j = 0; j < numOfRows - i - 1; j++) //print the " ."
		{
			cout << Fill;
		}
			for (int k = 0; k < i + 1; k++) //print the "*"
			{
				cout << Print;
		  }
		cout << endl;
	}
		
	return 0;
}
