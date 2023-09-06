#include <iostream>

int main(void) {
	int n;

	std::cin >> n;
	char matrix[15][15];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || i + j == n - 1 || i == n / 2 || j == n / 2) {
				matrix[i][j] = '*';
			}
			else {
				matrix[i][j] = '.';
			}
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}