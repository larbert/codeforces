#include <iostream>

int Max(int a, int b) {
    return a > b ? a : b;
}

int Min(int a, int b) {
    return a < b ? a : b;
}

int Abs(int x) {
    return x > 0 ? x : -1 * x;
}

int main() {
    int t, n, a[1005];
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        int res = a[n-1] - a[0];
        int max = a[0];
        int min = a[0];
        for (int i = 1; i < n; i++) {
            res = Max(Abs(a[i] - a[i - 1]), res);
            max = Max(a[i], max);
            min = Min(a[i], min);
        }
        res = Max(Abs(Max(a[0], a[n - 1]) - min), res);
        res = Max(Abs(Min(a[0], a[n - 1]) - max), res);
        std::cout << res << std::endl;
    }
    return 0;
}

