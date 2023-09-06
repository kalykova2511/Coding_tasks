#include <iostream>

double power(double a, int n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 != 0) {
        return a * power(a, n - 1);
    }
    else return power(a * a, n / 2);
}
int main() {
    double a, n;
    std::cin >> a >> n;
    std::cout << power(a, n);
    return 0;
}