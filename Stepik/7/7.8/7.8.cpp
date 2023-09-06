#include <iostream>
#include <vector>


int main(void) {
	int elements_number, different_elements = 1;
	std::cin >> elements_number;
	std::vector <int> elements(elements_number);

	for (int i = 0; i < elements_number; i++) {
		std::cin >> elements[i];
	}

	for (int i = 1; i < elements_number; i++) {
		if (elements[i] > elements[i - 1]) {
			++different_elements;
		}
	}

	std::cout << different_elements;

	return 0;
}