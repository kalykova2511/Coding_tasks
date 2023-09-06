#include <iostream>
#include <cmath>

int main() {
	int x, a = 0, b = 0, n = 0;

	while (std::cin >> x && x) {
		a += x;
		b += x * x;
		++n;
	}

	std::cout.precision(12);
	std::cout << sqrt((b - pow(a, 2) / n) / (n - 1));

	return 0;
}