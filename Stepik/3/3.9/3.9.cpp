#include <iostream>

int main() {
    int a, b, n;
    std::cin >> a >> b >> n;

    int kopecks = b * n;
    int rubles = a * n + kopecks / 100;
    kopecks %= 100;

    cout << rubles << " " << kopecks;
    return 0;
}

//нахождение стоимости n единиц товара