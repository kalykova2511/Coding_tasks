#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	int n, m, num = 1;

	std::cin >> n >> m;
	int matrix[100][100];
	for (int k = 0; k < m + n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (i + j == k) {
					matrix[i][j] = num;
					num++;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << std::setw(4) << matrix[i][j];
		}
		std::cout << std::endl;
	}

	return 0;
}