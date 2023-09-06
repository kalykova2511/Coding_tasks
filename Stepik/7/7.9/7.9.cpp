#include <iostream>
#include <vector>

int main(void) {
	long long elements_number, number;
	std::cin >> elements_number;
	std::vector <int> elements(elements_number);

	for (int i = 0; i < elements_number; i++) {
		std::cin >> number;
		elements[i] = number;
	}

	for (int i = 0; i < (elements_number / 2) * 2; i += 2) {
		int temp = elements[i];
		elements[i] = elements[i + 1];
		elements[i + 1] = temp;
	}

	for (auto num : elements) {
		std::cout << num << " ";
	}

	return 0;
}