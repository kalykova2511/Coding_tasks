﻿#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a > b) {
        cout << 1;
    }
    else if (a < b) {
        cout << 2;
    }
    else {
        cout << 0;
    }

    return 0;
}