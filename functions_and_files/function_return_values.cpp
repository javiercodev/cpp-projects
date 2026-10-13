#include <iostream>

int getUserValue() // This function now returns an integer value.
{
	std::cout << "Enter a number: ";
	int userValue{};
	std::cin >> userValue;

	return userValue; // Return the value the user entered back to the caller.
}

int main()
{
	int num{ getUserValue() }; // Initialize num with the return value of getUserValue().
	int sum{ num + 10 };
	std::cout << num << " + " << "10 is: " << sum << '\n';

	return 0;
}