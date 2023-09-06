#include <iostream>
#include <vector>

int main(void) {
	int n, k, r1, r2;
	std::cin >> n >> k;
	std::vector <char> skittles(n, 'I');

	for (int i = 0; i < k; i++) {
		std::cin >> r1 >> r2;
		for (int j = r1 - 1; j < r2; j++) {
			skittles[j] = '.';
		}
	}

	for (auto skittle : skittles) {
		std::cout << skittle;
	}

	return 0;
}