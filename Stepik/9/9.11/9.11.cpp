#include <iostream>

double sum() {
    int n, result = 0;
    std::cin >> n;
    if (n == 0) {
        return 0;
    }
    else {
        return n + sum();
    }
}
int main() {
    std::cout << sum();
    return 0;
}