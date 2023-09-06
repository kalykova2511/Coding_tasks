#include <iostream>
#include <string>

int main() {
    std::string s;
    int index = 0;
    int counter = 1;

    std::getline(std::cin, s);

    while ((index = s.find(" ", index)) != std::string::npos) {
        ++counter;
        ++index;
    }

    std::cout << counter;

    return 0;
}