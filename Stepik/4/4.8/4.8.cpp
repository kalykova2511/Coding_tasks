#include <iostream>

int main()
{
	int a1, b1, a2, b2;
	std::cin >> a1 >> b1 >> a2 >> b2;

	int fisrst_gap = a2 - a1;
	int second_gap = b2 - b1;

	if (first_gap * first_gap == second_gap * second_gap)
	{
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	return 0;
}

//ход слона