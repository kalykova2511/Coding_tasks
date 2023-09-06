#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    double D = pow(b, 2) - 4 * a * c;

    if (a == 0 && b == 0 && c == 0) std::cout << 3;
    else if (a == 0 && b == 0) std::cout << 0;
    else if (a == 0) std::cout << 1 << " " << -c / b;
    else if (D == 0) std::cout << 1 << " " << -b / (2 * a);
    else if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << 2 << " " << min(x1, x2) << " " << max(x1, x2);
    }
    else std::cout << 0;
    return 0;
}