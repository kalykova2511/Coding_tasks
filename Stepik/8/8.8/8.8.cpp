#include <iostream>
#include <iomanip>

int main(void) {
	int n, m, k, c = 0;
	std::cin >> n >> m;

	int a[20][20];
	for (int i = 0; i < n; i++) { //перебор строк
		for (int j = 0; j < m; j++) { //перебор столбцов
			std::cin >> a[i][j];
		}
	}

	cin >> k;
	for (int i = 0; i < n; i++) { //перебор строк
		for (int j = 0; j < m; j++) { //перебор столбцов
			if (a[i][j] == 0) {
				c++;
			}
			else if (a[i][j] == 1) {
				c = 0;
			}
			if (k == c) {
				cout << i + 1;
				return 0;
			}
		}
		c = 0;
	}

	std::cout << 0;
}