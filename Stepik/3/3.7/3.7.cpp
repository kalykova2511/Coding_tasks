#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int next_even = (n / 2) * 2 + 2; //деление с округлением вниз + 2

    std::cout << next_even;

    return 0;
}

//нахождение следующего четного