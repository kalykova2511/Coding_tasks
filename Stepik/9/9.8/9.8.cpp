#include <iostream>
#include <iomanip>
#include <cmath>

int MinDivisor(int n) {
	for (int i = 2; i <= sqrt(n) + 1; i++) {
		if (n % i == 0) {
			return i;
		}
	}
	return n;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << MinDivisor(n);

	return 0;
}
