#include <iostream>

int main()
{
	int n;

	std::cin >> n;
	int matrix[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] != matrix[j][i]) {
				std::cout << "NO";
				return 0;
			}
		}
	}
	std::cout << "YES";

	return 0;
}
