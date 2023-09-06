#include <iostream>

int main() {
    char letter;

    std::cin >> letter;

    if (std::lower(letter) == letter) {
        letter = std::toupper(letter);
    }
    else {
        letter = std::tolower(letter);
    }

    std::cout << letter;

    return 0;
}