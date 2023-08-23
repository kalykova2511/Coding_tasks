#include <iostream>

int main() {
    int m, k = 1;
    std::cin >> m;

    while ((k * k) <= m) {
        std::cout << k * k << ' ';
        k = k + 1;
    }

    return 0;
}