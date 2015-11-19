#C++ Primer Plus, 6th Edition Chapter Exercies Program Notes

**Chapter 1**

**Chapter 2**

**Chapter 3**
- Exercises 3.1
  - Since the using directive is defined with in the body of Main(), it is necessary to prefix cout and cin statements when using them in the convert function body.
    ```C++
    ....
    void convert(int inches)
{
	int feet = 0;
	int remainder =  0;
	feet = inches / INCHES_PER_FEET;
	remainder = inches % INCHES_PER_FEET;
	std::cout << inches << " inches is " << feet << " feet, " << remainder;
	std::cout << " inches" << std::endl;	
	// Note: Need to use the 'std::' qualifier since the using directive is included
	// in the main() section of the program and not outside.
}	```

**Chapter 4**
- Exercises 4.9/4.10
  -  Using the `<array>` header file, required that the compiler is complant with C++ 11 standards.  [Here is a     link](https://github.com/catwomp1/cpp_primer/blob/master/images/cpp_11.png) to a screen shot on how to set the compiler options in UEStudio to allow for the C++ 11 standards.
  -  This is the compiler command to add to the compiler options when working in the command prompt: `-std=gnu++11`
  -  This is the code delcare the array dynamically in Execise 4.9
    ```C++
    ....
    const int ArSize = 3;

    struct candybar
    {
      std::string brand;
      float weight;
      int calories;
    };
      
    int main(int argc, char* argv[])
    {
     using namespace std;	
     candybar * snacks = new candybar[ArSize] // Allocate a dynamic array of type candybar structures
     ....
     delete [] snacks;  // Don't forget to delete the array!
     return 0; }
     
```
**Chapter 5**

**Chapter 6**
