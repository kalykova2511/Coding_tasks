#include <iostream>

int main()
{
    int a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 || b1 == b2) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}

//ход ладьи