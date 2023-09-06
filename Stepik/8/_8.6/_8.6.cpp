#include <iostream>

int main()
{
	int n, k;

	std::cin >> n;
	int matrix[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cin >> matrix[i][j];
		}
	}
	std::cin >> k;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i - j == k) {
				std::cout << matrix[i][j] << " ";
			}
		}
	}

	return 0;
}
