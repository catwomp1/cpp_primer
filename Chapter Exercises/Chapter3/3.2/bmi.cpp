// bmi.cpp -- Convert height and weight to BMI value
#include <iostream>
#include <cmath>

using namespace std;

const float INCHES_PER_FEET = 12.0;
const float METERS = 0.0254;
const	float KILOGRAMS = 2.2;

void convert(int, int, int);

int main()
{
	int feet, inches, pounds;
	cout << "Enter height in feet: ";
	cin >> feet;
	cout << "Next, enter the number of inches: ";
	cin >> inches;
	cout << "Finally, enter the weight: ";
	cin >> pounds;
	
	convert(feet, inches, pounds);
	
	return 0;
}

void convert(int f, int i, int p)
{
	float bmi, height, weight;
		
	height = (f * INCHES_PER_FEET + i) * METERS;
	weight = p / KILOGRAMS;
		
	bmi = weight / sqrt(height);
	cout << "Your BMI is: " << bmi << endl; 
}