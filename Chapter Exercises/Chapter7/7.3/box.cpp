// box.cpp -- Working with box structure and functions
#include <iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

//Function prototypes
void structbyvalue(box size);
void structbyaddress(box * psize);

int main(int argc, char* argv[])
{
	using namespace std;
	//Create and initial some box structures to work with
	box standard = {"Uline", 8.25, 8.25, 6.0, 408.375};
	box	medium = {"Uline", 10.5, 10.5, 8.0, 0}; //Volume set in function
	box large = {"Uline", 14.75, 14.75, 10.0, 2175.625};
	box ex_large = {"Uline", 18, 14, 12, 0}; //Volume set in function
	
	//Call the structbyvalue function a couple of times
	structbyvalue(standard);
	structbyvalue(large);
	
	//Call the structbyaddress function a couple of times
	structbyaddress(&medium);
	structbyaddress(&ex_large);
	
	return 0;
}

void structbyvalue(box size)
{
	using namespace std;
	cout << "Box Information" << endl;
	cout << "Maker:  " << size.maker << endl;
	cout << "Height: " << size.height << endl;
	cout << "Width:  " << size.width << endl;
	cout << "Length: " << size.length << endl;
	cout << "Volume: " << size.volume << endl << endl;
}

void structbyaddress(box * psize)
{
	using namespace std;
	cout << "Box Information" << endl;
	cout << "Maker:  " << psize->maker << endl;
	cout << "Height: " << psize->height << endl;
	cout << "Width:  " << psize->width << endl;
	cout << "Length: " << psize->length << endl;
	//Set box volume
	psize->volume = (psize->height * psize->width * psize->length);
	cout << "Volume: " << psize->volume << endl << endl;
}