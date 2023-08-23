#include <iostream>

int main()
{
	int n = 1, counter = 0;
	while (std::cin >> n && n != 0) {
		counter++;
	}

	std::cout << --counter;

	return 0;
}
