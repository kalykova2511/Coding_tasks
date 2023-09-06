#include <iostream>
#include <vector>

int main(void) {
	int elements_number, number, min_number = INT16_MAX;
	std::cin >> elements_number;
	std::vector <int> elements;

	for (int i = 0; i < elements_number; i++) {
		std::cin >> number;
		if (number > 0) {
			elements.push_back(number);
		}
	}

	for (int i = 0; i < elements.size(); i++) {
		if (elements[i] < min_number) {
			min_number = elements[i];
		}
	}

	std::cout << min_number;

	return 0;
}