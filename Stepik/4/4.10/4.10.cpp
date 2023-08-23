#include <iostream>

int main()
{
	int a1, b1, a2, b2;
	std::cin >> a1 >> b1 >> a2 >> b2;

	int first_gap = a2 - a1;
	int second_gap = b2 - b1;

	if ((first_gap * first_gap == 1 && second_gap * second_gap == 4)
		|| (first_gap * first_gap == 4 && second_gap * second_gap == 1)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}

//ход коня