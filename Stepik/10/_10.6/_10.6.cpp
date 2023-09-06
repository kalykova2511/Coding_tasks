#include <iostream>
#include <string>

int main() {
    std::string longest_word, current_word;

    while (std::cin) {
        std::cin >> current_word;
        if (current_word.length() > longest_word.length()) {
            longest_word = now_word;
        }
    }

    std::cout << longest_word;
    return 0;
}