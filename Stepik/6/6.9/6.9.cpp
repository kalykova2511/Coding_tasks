#include <iostream>
#include <iomanip>
#include <cmath>

int main(void) {
    double a, b, c, discriminant;

    std::cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;
    if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << root;
    }
    else if (discriminant > 0) {
        double root1 = (-b - sqrt(discriminant)) / (2 * a);
        double root2 = (-b + sqrt(discriminant)) / (2 * a);

        if (root1 > root2) {
            std::cout << root2 << " " << root1;
        }
        else {
            std::cout << root1 << " " << root2;
        }
    }

    return 0;
}