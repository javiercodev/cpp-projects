#include <iostream>

// This function takes one integer parameter named x.
// The caller provides an argument whose value is copied into x.
void printNum(int x)
{
	std::cout << "in printNum(), " << "entered: " << x << '\n';
}

int main()
{
	std::cout << "Enter a number: ";

	// Declare a variable named x, (although it can have any valid name)
	// and pass it as an argument to printNum().
	int x{};
	std::cin >> x;
	printNum(x);
}