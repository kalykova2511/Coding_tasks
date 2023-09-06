#include <iostream>
#include <iomanip>
#include <cmath>

bool IsPointInSquare(double x, double y) {
	return (fabs(x) + fabs(y) <= 1);
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