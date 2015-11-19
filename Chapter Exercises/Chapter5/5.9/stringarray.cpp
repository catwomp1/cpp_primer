// stringarray.cpp - Read in input one word at a time until the word 'done' is
//                   entered.  Then, report the number of words entered (not
//                   including the word 'done'.
#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
	using namespace std;
	string words;
	unsigned totalWords = 0;
	cout << "Start entering words!" << endl;
	while (words != "done")
	{
		cin >> words;
		++totalWords;
	}
	
	cout << "You entered a total of " << totalWords << " words." << endl;
	return 0;
}
