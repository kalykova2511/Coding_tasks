#include <iostream>

int main() {
	int n;
	int hours, minutes, seconds;
	std::cin >> n;

	int hours = n / 3600 % 24;
	int minutes = n % 3600 / 60;
	int seconds = n % 3600 % 60;

	cout << hours << ":" << minutes / 10 << minutes % 10 << ":" << seconds / 10 << seconds % 10;

	return 0;
}

//время в формате h:mm:ss