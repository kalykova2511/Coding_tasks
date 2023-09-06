#include <iostream>
#include <vector>

int main(void) {
	int elements_number;
	std::cin >> elements_number;
	std::vector <int> elements(elements_number);

	for (int i = 0; i < elements_number; i++) {
		std::cin >> elements[i];
	}

	for (auto number : elements) {
		if (number % 2 == 0) {
			std::cout << number << " ";
		}
	}
}