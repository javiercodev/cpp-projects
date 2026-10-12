#include <iostream>

int main()
{
	std::cout << "Enter a number: ";
	double num{};
	std::cin >> num;

	double doubledValue{ num * 2 };

	std::cout << "The result is: " << doubledValue << '\n';

	return 0;
}