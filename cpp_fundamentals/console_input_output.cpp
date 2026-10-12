#include <iostream>

int main()
{
	// std::cout
	std::cout << "Hello world!"; // Print Hello world! to console.

	// std::endl
	std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line.
	std::cout << "My name is Javier" << std::endl;

	// '\n'
	int x{ 7 };
	std::cout << "x is equal to: " << x << '\n'; // '\n' inserts a newline without flushing the output buffer, wich can improve performance.

	int y{ 14 };
	std::cout << "y is equal to: " << y << '\n';

	//std::cin
	std::cout << "Enter a number: ";

	int z{}; // Define variable z to hold user input (and value-initialize it).
	std::cin >> z; // Get number from keyboard and store it in variable z.

	std::cout << "You entered: " << z << '\n';

	return 0;
}