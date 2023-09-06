#include <iostream>
#include <iomanip>

int main()
{
	int n, m, k = 1;

	std::cin >> n >> m;
	int matrix[30][30];
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < m; j++) {
				matrix[i][j] = k;
				++k;
			}
		}
		else {
			for (int j = m - 1; j >= 0; j--) {
				matrix[i][j] = k;
				++k;
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
