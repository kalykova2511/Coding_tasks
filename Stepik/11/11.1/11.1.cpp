#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;
    int number;

    std::cin >> number;

    while (std::cin >> number) {
        numbers.insert(number);
    }

    std::cout << numbers.size();

    return 0;
}