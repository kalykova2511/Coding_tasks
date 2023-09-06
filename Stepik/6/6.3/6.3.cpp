#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    double p = (a + b + c) / 2; //полупериметр
    double space = sqrt(p * (p - a) * (p - b) * (p - c)); // формула Герона

    std::cout << space;

    return 0;
}

//вычисление площади треугольника
