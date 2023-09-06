#include <iostream>
#include <cmath>

int main()
{
	double x;
	std::cin >> x;
	std::cout << (int)trunc(x * 10) % 10;
	return 0;
}