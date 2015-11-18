// disgrade.cpp -- Request multiple words first and last name and grade.
//                 Then display full name and letter grade.
#include <iostream>
#include <cstring>

char * getname(char name); //function prototype
const int ARSIZE = 30;
int main()
{
	using namespace std;
	char first_name[ARSIZE];
	char last_name[ARSIZE];  
	char grade;
	short age;
	
	cout << "What is your first name? ";
	cin.getline(first_name, ARSIZE);
	cout << "What is your last name? ";
	cin.getline(last_name, ARSIZE);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	grade = grade + 1;
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
		
	return 0;
}

