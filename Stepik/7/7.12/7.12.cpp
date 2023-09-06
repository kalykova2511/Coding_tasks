#include <iostream>
#include <vector>

int main(void) {
	int elements_number, number, same_elements = 0;
	std::cin >> elements_number;
	std::vector <int> elements(elements_number);

	for (int i = 0; i < elements_number; i++) {
		std::cin >> number;
		elements[i] = number;
	}

	for (int j = 0; j < elements_number; j++) {
		same_elements = 0;
		for (int i = 0; i < elements_number; i++) {
			if (elements[i] == elements[j]) {
				++same_elements;
			}
		}
		if (same_elements == 1) {
			std::cout << elements[j] << " ";
		}
	}

	return 0;
}