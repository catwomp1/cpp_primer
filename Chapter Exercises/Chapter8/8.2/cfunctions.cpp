// cfunctions.cpp -- contains functions called in candybar_t.cpp
#include <iostream>
#include "candybar_t.h" // structure templates, function prototypes

// update structure members passed by reference
candybar & update(candybar & cb, const char * brand, double weight, int calories)
{
	cb.brand = brand;
	cb.weight = weight;
	cb.calories = calories;
	
	return cb;
}

void display(const candybar & cb)
{
	std::cout << "Candy Bar " << std::endl;
	std::cout << "Brand:    " << cb.brand << std::endl;
	std::cout << "Weigth:   " << cb.weight << std::endl;
	std::cout << "Calories: " << cb.calories << std::endl;
}

