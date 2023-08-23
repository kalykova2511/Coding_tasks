#include <iostream>

int main()
{
	int n, k = 1, f = 1;
	int first = 0, second = 1;
	std::cin >> n;

	while (n != k) {
		f = first + second;
		first = second;
		second = f;
		k++;
	}

	cout << f;

	return 0;
}

//фиббоначи
