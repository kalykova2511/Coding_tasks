#include <iostream>

int main()
{
	int n, m, k1, k2;

	std::cin >> n >> m;
	int matrix[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> matrix[i][j];
		}
	}
	std::cin >> k1 >> k2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (j == k1) {
				std::cout << matrix[i][k2] << " ";
			}
			else if (j == k2) {
				std::cout << matrix[i][k1] << " ";
			}
			else {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}

	return 0;
}