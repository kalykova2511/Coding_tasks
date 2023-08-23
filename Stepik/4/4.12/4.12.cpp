#include <iostream>

int main()
{
	int n, m, x, y;
	std::cin >> n >> m >> x >> y;

	//сортировка стен
	int long_wall, short_wall;
	if (n > m) {
		long_wall = n;
		short_wall = m;
	}
	else {
		long_wall = m;
		short_wall = n;
	}

	//расстояние до бортиков
	int x1 = short_wall - x;
	int y1 = long_wall - y;

	//выбор наименьшего расстояния
	if (x < x1 && x < y1 && x < y) {
		std::cout << x;
	}
	else if (y < x1 && y < y1 && y < x) {
		std::cout << y;
	}
	else if (x1 < y1 && x1 < x && x1 < y) {
		std::cout << x1;
	}
	else {
		std::cout << y1;
	}

	return 0;
}