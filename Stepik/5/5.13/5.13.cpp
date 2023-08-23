#include <iostream>

int main()
{
    int n, counter = 0, before_n = INT16_MAX, before_n2 = INT16_MAX;

    while (std::cin >> n && n != 0) {
        if (before_n > n && before_n2 < before_n) {
            ++counter;
        }
        before_n2 = before_n;
        before_n = n;
    }

    std::cout << counter;

    return 0;
}