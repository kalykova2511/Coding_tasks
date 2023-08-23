#include <iostream>

int main() {
	int first_hours, first_minutes, first_seconds;
	int second_hours, second_minutes, second_seconds;
	std::cin >> first_hours >> first_minutes >> first_seconds;
	std::cin >> second_hours >> second_minutes >> second_seconds;

	int hours = second_hours - first_hours;
	int minutes = second_minutes - first_minutes;
	int seconds = second_seconds - first_seconds;
	int seconds_gap = hours * 3600 + minutes * 60 + seconds;

	std::cout << seconds_gap;

	return 0;
}

//число секунд между моментами времени