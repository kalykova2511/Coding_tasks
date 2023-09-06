#include <iostream>
#include <vector>

int main(void) {
	int elements_number;
	std::cin >> elements_number;
	std::vector <int> elements(elements_number);

	for (int i = 0; i < elements_number; i++) {
		std::cin >> elements[i];
	}

	for (int i = 1; i < elements_number; i++) {
		if (elements[i] > elements[i - 1]) {
			std::cout << elements[i] << " ";
		}
	}

	return 0;
}