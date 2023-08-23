#include <iostream>

int main()
{
    int n, strike = 1, max_strike = 1, before_n = 0;

    while (std::cin >> n && n != 0) {
        if (n == before_n) {
            ++strike;
        }
        else {
            strike = 1;
        }
        if (strike > max_strike) {
            max_strike = strike;
        }
        before_n = n;
    }

    std::cout << max_strike;

    return 0;
}
