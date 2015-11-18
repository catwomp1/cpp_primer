// metricmpg.cpp -- Convert from European style of "Liters / per 100 Kilometers
//                  to US style MPG fuel usage conversion.
#include <iostream>
using namespace std;

const float KILO_TO_MILES = 62.14;
const float GALLONS_TO_LITERS = 3.875;

int main()
{
	float mpg, lp100k; //US miles per gallon, European liters per 100 kilometers
	cout << "Enter Liters / per 100 Kilometers: ";
	cin >> lp100k;
	
	mpg = KILO_TO_MILES / (lp100k / GALLONS_TO_LITERS) ;
		
	cout << lp100k << " Liters / Per 100 Kilometers (l/100km) is " << mpg << " Miles Per Gallons (MPG)" << endl;
	
	return 0;
}
