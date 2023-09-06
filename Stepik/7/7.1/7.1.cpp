#include <iostream>
#include <vector>

int main() {
    int elements_number;
    std::cin >> elements_number;
    std::vector <int> elements(elements_number);

    for (int i = 0; i < elements_number; i++) {
        std::cin >> elements[i];
    }

    for (int i = 0; i < elements_number; i += 2) {
        std::cout << elements[i] << " ";
    }

    return 0;
}