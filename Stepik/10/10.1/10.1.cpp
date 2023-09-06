#include <iostream>
#include <string>

int main() {
    char n;
    std::cin >> n;
    if (int(n) >= int('0') && int(n) <= '9') {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }

    return 0;
}