#include <stdio.h>

int Max(int a, int b) {
    return a > b ? a : b;
}

int Min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int t, n, a[2005];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int res = a[n-1] - a[0];
        int max = a[0];
        int min = a[0];
        for (int i = 1; i < n; i++) {
            res = Max(a[i - 1] - a[i], res);
            max = Max(a[i], max);
            min = Min(a[i], min);
        }
        res = Max(max - a[0], res);
        res = Max(a[n - 1] - min, res);
        printf("%d\n", res);
    }
    return 0;
}
