#include <iostream>
#include <vector>

int main(void) {
	int elements_number, positive_numbers = 0;
	std::cin >> elements_number;
	std::vector <int> elements(elements_number);

	for (int i = 0; i < elements_number; i++) {
		std::cin >> elements[i];
		if (elements[i] > 0) {
			++positive_numbers;
		}
	}

	std::cout << positive_numbers;

	return 0;
}