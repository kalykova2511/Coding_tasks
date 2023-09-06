#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> a[i][j];

    int imax = 0, jmax = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] > a[imax][jmax]) {
                imax = i;
                jmax = j;
            }

    std::cout << imax << ' ' << jmax;

    return 0;
}