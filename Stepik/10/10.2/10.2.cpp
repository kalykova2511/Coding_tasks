#include <iostream>

int main() {
    char letter;

    std::cin >> letter;

    if (std::islower(letter)) {
        letter = std::toupper(letter);
    }

    std::cout << letter;

    return 0;
}