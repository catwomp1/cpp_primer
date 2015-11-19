// keyboard.cpp -- 
#include <iostream>
#include <cctype>

int main(int argc, char* argv[])
{
	using namespace std;
	char ch;
 int digit = 0;
	cout << "Enter characters; enter @ to quit\n";
  cin.get(ch);
  while (ch != '@')
  {
  	if (isdigit(ch)) 
  	{
       cin.get(ch);
       continue;
  	}
     	else if (islower(ch))
  	{
  	 ch = toupper(ch);
   	 cout << ch;
  	}
  	else if (isupper(ch))
  	{
  		ch = tolower(ch);
  		cout << ch;
  	}
  	else 
  	{
  		cout << ch;
    }
    cin.get(ch);
  }
  //cout << "Number of digits encountered: " << digits << endl;
	return 0;
}

