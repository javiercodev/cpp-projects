#include <iostream>

int main()
{
	// Literals
	std::cout << 69 << '\n'; // Print the value of a literal.

	int x{ 69 };
	std::cout << x << '\n'; // Print the value of a variable.

	// Operators
	std::cout << 1 + 2 << '\n';
	std::cout << 5 + 5 - 2 << '\n';
	std::cout << 8 * 5 + 5 << '\n';

	int y{ 7 };
	std::cout << (y = 14) << '\n';

	return 0;
}