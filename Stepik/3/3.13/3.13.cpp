#include <iostream>

int main() {
	int num;
	std::cin >> num;

	int first_part = num / 100; //первые 2 цифры
	int second_part = ((num % 10) * 10) + (num / 10 % 10); //вторые 2 цифры с заменой мест

	std::cout << first_part - second_part + 1;
}

//если число симметрично вывести 1