// arrayloop.cpp - Read in input one word at a time until the word 'done' is
//                 entered.  Then, report the number of words entered (not
//                 including the word 'done'.
#include <iostream>
#include <cstring>
const int ArSize = 40;
int main(int argc, char* argv[])
{
	using namespace std;
	char words[ArSize];
	int totalWords = 0;
	cout << "Start entering words!" << endl;
	while (strcmp(words, "done"))
	{
		cin.get(words, ArSize).get();
		++totalWords;
	}
	
	cout << "You entered a total of " << totalWords << " words." << endl;
	return 0;
}
