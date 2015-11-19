// latitude.cpp --Accept input of degrees, minutes, and seconds and then
//                display the latitude in decimal format.
#include <iostream>

const int MINUTES_PER_ARC = 60;
const int ARCS_PER_MINUTE = 60;

int main(int argc, char* argv[])
{
	using namespace std;
	double degrees = 0;
	double minutes = 0;
	double seconds = 0;
	
	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of the arc: ";
	cin >> seconds;
	
	double latitude = 0;
	
	latitude = degrees + (minutes / ARCS_PER_MINUTE) + (seconds / ARCS_PER_MINUTE / MINUTES_PER_ARC);
	
	cout << degrees  << " degrees, " << minutes << " minutes, " << seconds;
	cout << " seconds = " << latitude << " degrees" << endl;
			
	return 0;
}
