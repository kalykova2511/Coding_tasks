#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;
    int number1, number2, number;

    std::cin >> number1;
    for (int i = 0; i < number1; i++) {
        std::cin >> number;
        numbers.insert(number);
    }

    std::cin >> number2;
    for (int i = 0; i < number2; i++) {
        std::cin >> number;
        numbers.insert(number);
    }

    std::cout << number1 + number2 - numbers.size();

    return 0;
}