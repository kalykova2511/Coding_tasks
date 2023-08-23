#include <iostream>

int main()
{
	int n = 1, max_number = INT16_MIN, after_max = INT16_MIN;

	while (std::cin >> n && n != 0) {
		if (n >= max_number) {
			after_max = max_number;
			after_max = n;
		}
		if (n < max_number && n > after_max) {
			after_max = n;
		}
	}

	std::cout << after_max;
	return 0;
}