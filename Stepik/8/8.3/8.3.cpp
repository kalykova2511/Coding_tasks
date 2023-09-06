#include <iostream>
#include <cmath>

int main(void) {
	int n;

	std::cin >> n;
	int matrix[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matrix[i][j] = abs(i - j);
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}