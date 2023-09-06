#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;
    int number, previous_size = 0, current_size = 0;

    std::cin >> number;

    while (std::cin >> number) {
        numbers.insert(number);
        current_size = numbers.size();
        if (current_size > previous_size) {
            std::cout << "NO" << std::endl;
        }
        else {
            std::cout << "YES" << std::endl;
        }
        previous_size = current_size;
    }

    return 0;
}