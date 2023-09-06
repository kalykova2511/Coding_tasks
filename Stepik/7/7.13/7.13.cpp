#include <iostream>
#include <vector>

int main(void) {
	int number, x1, y1;
	bool is_exist = false;
	std::vector <int> x;
	std::vector <int> y;

	for (int i = 0; i < 8; i++) {
		std::cin >> x1 >> y1;
		x.push_back(x1);
		y.push_back(y1);
	}

	for (int j = 0; j < 7; j++) {
		for (int i = j + 1; i < 8; i++) {
			if (x[j] - y[j] == x[i] - y[i] || x[j] + y[j] == x[i] + y[i] || x[j] == x[i] || y[j] == y[i]) {
				is_exist = true;
				break;
			}
		}
	}

	if (is_exist == true) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	return 0;
}