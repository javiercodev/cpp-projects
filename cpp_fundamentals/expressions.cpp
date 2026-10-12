#include <iostream>

// seven() is a function that returns the value 7.
int seven()
{
	return 7;
}

int main()
{
	int a{ 2 }; 
	std::cout << a << '\n';
	int b{ 5 + 8 };
	std::cout << b << '\n';
	int c{ (2 * 6) + 7 };
	std::cout << c << '\n';
	int d{ b };
	std::cout << d << '\n';
	int e{ seven() }; // Initialize variable e with function return value 7.
	std::cout << e << '\n';

	return 0;
}