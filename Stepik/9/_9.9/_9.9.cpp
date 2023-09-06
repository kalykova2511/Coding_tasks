#include <iostream>
#include <iomanip>
#include <cmath>

bool IsPrime(int n) {
	for (int i = 2; i <= sqrt(n) + 1; i++) {
		if (n % i == 0 and i != n) {
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	std::cin >> n;
	if (IsPrime(n)) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}
	return 0;
}