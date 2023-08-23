#include <iostream>

int main()
{
    int a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;

    int first_gap = a1 - a2;
    int second_gap = b1 - b2;

    if (first_gap * first_gap <= 1) && (second_gap * second_gap <= 1) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}

//ход короля