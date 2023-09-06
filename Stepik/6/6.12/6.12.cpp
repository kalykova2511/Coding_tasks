#include <iostream>
#include <iomanip>
#include <cmath>

int main(void) {
    double a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;

    //решим методом Краммера
    double x, y;
    double d0 = a * d - c * b;
    double d1 = e * d - f * b;
    double d2 = a * f - c * e;

    if (d0 != 0) {
        x = d1 / d0;
        y = d2 / d0;
        std::cout << 2 << " " << x << " " << y;
    }
    else {
        if (d1 == 0 and d2 == 0) {
            if (a == 0 and b == 0 and c == 0 and d == 0) {
                if (e != 0 || f != 0) {
                    std::cout << 0;
                }
                else {
                    std::cout << 5;
                }
            }
            else {
                if (a == 0 && c == 0) {
                    if (b != 0) {
                        y = e / b;
                    }
                    else {
                        y = f / d;
                    }
                    std::cout << 4 << " " << y;
                }
                else {
                    if (b == 0 and d == 0) {
                        if (a != 0) {
                            x = e / a;
                        }
                        else {
                            x = f / c;
                        }
                        std::cout << 3 << " " << x;
                    }
                    else {
                        if (b != 0) {
                            x = e / b;
                            y = -a / b;
                        }
                        else {
                            x = f / d;
                            y = -c / d;
                        }
                        std::cout << 1 << " " << y << " " << x;
                    }
                }
            }
        }
        else {
            std::cout << 0;
        }
    }

    return 0;
}