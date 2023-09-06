#include <iostream>
#include <iomanip>
#include <cmath>

bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
	return ((x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r);
}

int main()
{
	double x, y, xc, yc, r;
	std::cin >> x >> y >> xc >> yc >> r;
	if (IsPointInCircle(x, y, xc, yc, r)) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	return 0;
}