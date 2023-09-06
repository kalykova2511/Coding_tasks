#include <iostream>
#include <set>

int main() {
    std::set<int> numbers, repeated_numbers;
    int elements1, elements2, previous_size, current_size = 0;

    std::cin >> elements1;

    for (int i = 0; i < elements1; i++) {
        int number;
        std::cin >> number;
        numbers.insert(number);
    }

    std::cin >> elements2;
    previous_size = numbers.size();

    for (int i = 0; i < elements2; i++) {
        int number;
        std::cin >> number;
        numbers.insert(number);
        current_size = numbers.size();
        if (current_size = previous_size) {
            repeated_numbers.insert(number);
        }
        previous_size = current_size;
    }
    
    for (auto now : repeated_numbers) {
        std::cout << now;
    }

    return 0;
}