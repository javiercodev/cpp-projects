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
	doSum(5, 5);   //doSum() called for the first time.
	doSum(10, 10); //doSum() called for the second time.
	std::cout << "Ending main()" << '\n'; 

	return 0;
}