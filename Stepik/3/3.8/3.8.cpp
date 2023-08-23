#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int first_class = a / 2 + a % 2;
    int second_class = b / 2 + b % 2;
    int third_class = c / 2 + c % 2;

    std::cout << first_class + second_class + third_class;

    return 0;
}

//количество парт для 3-х классов по кол-ву учеников