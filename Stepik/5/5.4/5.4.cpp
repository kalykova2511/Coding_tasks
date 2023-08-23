#include <iostream>

int main()
{
	int n, i = 1, f = 0;
	std::cin >> n;

	while (i <= n) {
		if (n == i) {
			std::cout << "YES";
			f = 1;
		}
		i *= 2;
	}

	if (f == 0) {
		std::cout << "NO";
	}

	return 0;
}