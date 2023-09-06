#include <iostream>
#include <vector>

int main(void) {
	int elements_number, number;
	std::cin >> elements_number;
	std::vector <int> elements(elements_number);

	for (int i = 0; i < elements_number; i++) {
		std::cin >> number;
		elements[i] = number;
	}

	std::cout << elements[elements.size() - 1] << " ";
	for (int i = 0; i < elements_number - 1; i++) {
		std::cout << elements[i] << " ";
	}

	return 0;
}