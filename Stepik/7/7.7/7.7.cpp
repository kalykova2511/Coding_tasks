#include <iostream>
#include <vector>

int main() {
    int n, min_mod = 0;
    std::cin >> n;
    vector <int> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if ((min_mod > a[i] || min_mod == 0) && a[i] % 2 != 0) {
            min_mod = a[i];
        }
    }
    std::cout << min_mod;
    return 0;
}