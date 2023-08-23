#include <iostream>

int main() {
    int a, b, c, t;
    std::cin >> a >> b >> c;

    //сортировка пузырьком
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }

    if (a < b) {
        std::cout << a << " " << b << " " << c;
    }
    else {
        std::cout << b << " " << a << " " << c;
    }

    return 0;
}