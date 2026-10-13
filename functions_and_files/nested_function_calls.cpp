#include <iostream>

int doSum(int x, int y)
{
	int sum{ x + y };
	return sum;
}

void doMultiplication(int z)
{
	int multiplication = z * doSum(5, 5);
	std::cout << multiplication << '\n';
}

int main()
{
	doMultiplication(2);
	return 0;
}