#include <iostream>

int main(void) {
    int p, x, y, k;
    std::cin >> p >> x >> y >> k;

    int final_sum = x * 100 + y;
    while (k--) {
        final_sum += final_sum * p / 100;
    }

    std::cout << final_sum / 100 << " " << final_sum % 100;

    return 0;
}