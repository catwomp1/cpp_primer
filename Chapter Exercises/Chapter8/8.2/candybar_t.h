// candybar_t.h -- structure and function protoypes

#ifndef CANDYBAR_T_
#define CANDYBAR_T_

// define structure
struct candybar {
	std::string brand;
	double weight;
	int calories;
};

// function prototype
// update structure object being passed by reference
// set default parameter values
candybar & update(candybar & cb, const char * brand = "Millennium Munch",
            double width = 2.85, int calories = 350);
// display structure members            
void display(const candybar & cb);

#endif
