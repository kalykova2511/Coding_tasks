#include <iostream>
#include <iomanip>
#include <cmath>

int main(void) {
    double a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;

    //решим методом Краммера
    double d0 = a * d - c * b;
    double d1 = e * d - f * b;
    double d2 = a * f - c * e;

    double x = d1 / d0;
    double y = d2 / d0;

    std::cout << x << " " << y;

    return 0;
}