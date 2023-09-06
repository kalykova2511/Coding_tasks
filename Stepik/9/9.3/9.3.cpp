#include <iostream>
#include <iomanip>
#include <cmath>

bool IsPointInSquare(double x, double y) {
	return (abs(x + y) + abs(x - y) <= 2);
}

int main()
{
	double x, y;
	std::cin >> x >> y;
	if (IsPointInSquare(x, y)) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	return 0;
}