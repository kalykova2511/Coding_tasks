#include <iostream>

int main()
{
	int a, k = 1, f = 1, is_fib = 0;
	int first = 0, second = 1;
	std::cin >> a;

	while (f <= a) {
		if (a == f) {
			std::cout << k;
			is_fib = 1;
			break;
		}
		f = first + second;
		first = second;
		second = f;
		k++;
	}

	if (is_fib == 0) {
		std::cout << -1;
	}

	return 0;
}