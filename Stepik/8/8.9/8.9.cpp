﻿#include <iostream>

int main()
{
	int n, m;

	std::cin >> n >> m;
	int matrix[1000][1000];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << matrix[n - j - 1][i] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}