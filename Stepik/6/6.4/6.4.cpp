#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double p, x, y;
    std::cin >> p >> x >> y;

    double kopecks = x * 100 + y;
    int final_money = kopecks + kopecks * (p / 100.0);
    int rubles = final_money / 100;
    kopecks = final_money % 100;

    std::cout << (int)rubles << " " << (int)kopecks;

    return 0;
}