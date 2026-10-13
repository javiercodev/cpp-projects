#include <iostream>

// Function that does not return a value.
void printSomething()
{
	std::cout << "Hey!" << '\n';
}

// Function that returns a value.
int doSum(int x, int y)
{
	int sum{ x + y };
	
	return sum;
}

int main()
{
	printSomething(); // Ok.
	doSum(6, 7); // Ok.

	// std::cout << printSomething(); Compile error: We can't call a function that returns void in this context.
	std::cout << doSum(6, 7); // ok

	return EXIT_SUCCESS;
}
