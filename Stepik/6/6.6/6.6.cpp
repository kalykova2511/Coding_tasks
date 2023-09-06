#include <iostream>
#include <iomanip>

int main(void) {

    double n, n_sum = 0, counter = 0;

    while (std::cin >> n && n != 0) {
        ++counter;
        n_sum += n;
    }
    double result = n_sum / counter;

    std::cout << std::setprecision(11) << std::fixed;
    std::cout << result;

    return 0;
}