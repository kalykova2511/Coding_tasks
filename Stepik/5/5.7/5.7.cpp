#include <iostream>

int main()
{
	int n, max_number = INT16_MIN;
	while (std::cin >> n && n != 0) {
		if (n > max_number) {
			max_number = n;
		}
	}

	std::cout << max_number;

	return 0;
}
