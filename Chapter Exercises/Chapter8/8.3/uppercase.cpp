// uppercase.cpp -- Convert string object to uppercase
#include <iostream>
#include <string>	
#include <cctype>  // needed for toupper() function

using std::string;

// function prototype
string & uppercase(string & str);

int main(int argc, char* argv[])
{
	using namespace std;
		
	string comment;
	cout << "Enter a string (q to quit): ";
	getline(cin, comment);

	while (comment[0] != 'q')
	{
		string upper = uppercase(comment);
		cout << upper << endl;
		cout << "Enter a string (q to quit): ";
		getline(cin, comment);
	}		
	return 0;	
}

// function to convert and return  reference to a string object to uppercase
string & uppercase(string & str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return str;
}

		