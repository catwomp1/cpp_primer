// wordsoriginal.cpp -- Input several words and report on the number of vowels, 
//                      consonants and charaters that done fall into the two
//                      types above.
#include <iostream>
#include <string>
#include <cctype>

int isvowel( int c); // Function prototype

int main(int argc, char* argv[])
{
	using namespace std;
	
	cout << "Enter words (q to quit):" << endl;
	string words;
	getline(cin, words);
	
	unsigned vowels = 0;
	unsigned consonants = 0;
	unsigned digits = 0;
	unsigned others = 0;
	
	while (words[0] != 'q' && words[0] != 'Q')
	{
		if (isalpha(words[0]))
		   {
						if (isvowel(words[0])) // int isvowel( int c, bool use_y );
					 vowels++;					   
				 else
				 	 consonants++;				  
			}
		else if (isdigit(words[0]))
			digits++;
		else
			others++;
			
	  getline(cin, words);
	}
	// Display totals
	cout << "Number of vowels:     " << vowels << endl;
	cout << "Number of consonants: " << consonants << endl;
	cout << "Number of digits:     " << digits << endl;
	cout << "Number of others:     " << others << endl;
		
	return 0;
}

int isvowel(int c)
{
	if (c == 'A' || c == 'a' ||
		  c == 'E' || c == 'e' ||
		  c == 'I' || c == 'i' ||
		  c == 'O' || c == 'o' ||
		  c == 'U' || c == 'u' ||
		 	c == 'Y' || c == 'y')		  
	   return 1;
	else
	 	 return 0; 
}
		