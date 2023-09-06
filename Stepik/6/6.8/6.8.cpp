#include <iostream>
#include <iomanip>
#include <cmath>

int main(void) {

    int n;
    double x, result, number;

    std::cin >> n >> x;

    while (n >= 0) {
        std::cin >> number;
        result += number * pow(x, n);
        --n;
    }

    std::cout << result;

    return 0;
}