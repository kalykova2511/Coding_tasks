#include <iostream>

int main() {
	int v, t;
	std::cin >> v >> t;

	int road_mark = (((v * t) % 109) + 109) % 109;

	std::cout << road_mark;

	return 0;
}

//число от 0 до 108 — номер отметки на кольцевой дороге, на которой остановится Вася