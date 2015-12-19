// lotto2.cpp -- modified probability of winning
#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks);

int main(int argc, char* argv[])
{
	using namespace std;
	double total, choices;
	unsigned megaball;
	cout << "Enter the total number of choices on the game card and\n"
	        "the number of picks allowed:\n";
  while ((cin >> total >> choices) && choices <= total)
  {
  	cout << "Enter the total number of choices for the mega ball:\n";
  	cin >> megaball;
 		cout << "You have one chance in ";
    cout << probability(total, choices) * probability(megaball, 1);  //compute the odds
    cout << " of winning.\n";
  	cout << "Next two numbers (q to quit): ";
  }
  cout << "bye\n";	
	return 0;
}

//The follow function calculates the probability of pickng picks
//numbers correct from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;  
	long double n;
	unsigned p;
	
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	
	return result;
}
