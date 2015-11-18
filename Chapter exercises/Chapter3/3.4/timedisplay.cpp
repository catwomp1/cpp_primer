// timedisplay.cpp -- Convert given number of seconds to hours, minutes 
//                    and seconds displayable format
#include <iostream>
using namespace std;

const int HOURS_PER_DAY = 24;
const	int MINUTES_PER_HOUR = 60;
const	int SECONDS_PER_MINUTE = 60;

void convert(long);

int main()
{
	long num_of_seconds;
	cout << "Enter the number of seconds: ";
	cin >> num_of_seconds;
	
	convert(num_of_seconds);
	
	return 0;
}

void convert(long s)
{
	float minutes, seconds;
	int days;
	
	minutes = s / SECONDS_PER_MINUTE;	
	days =  (minutes / MINUTES_PER_HOUR) / HOURS_PER_DAY;
	
	cout << s << " Seconds = " << days << " days, " << minutes << " minutes, "
	               << seconds << " seconds" << endl;
}
	
	