#include <iostream>

int main()
{
	int n = 1, max_number = INT16_MIN, counter = 0;

	while (std::cin >> n && n != 0) {
		if (n > max_number) {
			max_number = n;
			counter = 1;
		}
		else if (n == max_number) {
			++counter;
		}
	}
	std::cout << counter;

	return 0;
}