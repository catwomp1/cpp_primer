// beany.cpp -- working with functions and references
#include <iostream>
#include <cstring>		// for strlen(), strcopy()
using namespace std;

struct stringy {
	char * str;
	int ct;
};

// Prototypes for set(), show() and show()
void set(stringy & sy, const char * str);
void show(const stringy & sy, int n = 1); // with default argument
void show(const string & s, int n = 1); // with default argument

int main(int argc, char* argv[])
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	
	set(beany, testing);	// first argument is a references		
												// allocates space to hold copy of testing.
												// sets str member of beany to point to the
												// new block, copies testing to new block,
												// and sets ct member of beany
	
	show(beany);			// prints member string once
	show(beany, 2);		// prints member string twice
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);		// prints testing string once
	show(testing, 3);	// prints testing string twice
	show("Done!");
	
	return 0;
}

void set(stringy & sy, const char * str)
{
	// get length of string
	int length = strlen(str);
	// allocate space to hold copy of passed in string
  char * p = new char [length + 1]; 
  // copy string to new storage
  strcpy(p, str);  
  // set string lenght of beany structure member
  sy.ct = length; 
  // point str member of beany structure to new block
  sy.str = p; 
 }

// show beany strcutrue member str n times
void show(const stringy & sy, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << sy.str << endl;
	}
}

// show string s n times
void show(const string & s, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << s << endl;
	}
}
