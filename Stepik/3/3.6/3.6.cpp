#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int first_number = n / 100;
    int second_number = (n / 10) % 10;
    int third_number = n % 10;

    std::cout << first_number + second_number + third_number; 

    return 0;
}

//сумма цифр трехзначного числа