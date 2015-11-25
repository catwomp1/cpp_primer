// strctptr.cpp -- Function with pointer to structure arguments
#include <iostream>
#include <cmath>

// Structure templates
struct polar
{
	double distance;		// distance from origin
	double angle;				// direction from origin
};

struct rect
{
	double x;						// Horizontal distance from origin
	double y;						// Vertical distance from origin
};

// Prototypes
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main(int argc, char* argv[])
{
	using namespace std;
	rect rplace;
	polar pplace;
	
	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)   // Slick use of cin
	{
		rect_to_polar(&rplace, &pplace);		// Pass addresses
		show_polar(&pplace);		// Pass address
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done!\n";
	return 0;
}

// Show polar coordinates, convering angle to degrees
void show_polar (const polar * pda)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	
	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle * Rad_to_deg;
	cout << " degrees\n";
}

// Convert rectangular to polar coordinates
void rect_to_polar(const rect * pxy, polar * pda)
{
	using namespace std;
	pda->distance =
	     sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	     pda->angle = atan2(pxy->y,  pxy->x);
}
