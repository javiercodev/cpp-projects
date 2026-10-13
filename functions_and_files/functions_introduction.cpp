#include <iostream>

// doSum() is the called function in this example.
void doSum(int x, int y)
{
	int sum{};
	std::cout << (sum = x + y) << '\n';
}

int main()
{
	std::cout << "Starting main()" << '\n';
	doSum(5, 5);						   // Interrupt main() by making a function call to doSum().
	std::cout << "Ending main()" << '\n'; // This statement is executed after doSum() ends.

	return 0;
}