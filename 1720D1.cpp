#include <iostream>
using namespace std;

const int MAX_N = 100005;

int main () {
    int t, m, n, a[MAX_N], b[MAX_N];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max_len = 0;
        int s = 0;
        int e = 0;
        int p = 0;
        while (s <= e && e < n) {
            if (!a[e]) {
                e++;
                s = e;
                continue;
            }
            if (e != s && a[e] <= a[e - 1]) {
                s = e;
                continue;
            }
            b[e - s] = a[e];
            m = e - s + 1;
            for (int p = 0; p < m; p++) {
                // 𝑎𝑏𝑝⊕𝑏𝑝+1<𝑎𝑏𝑝+1⊕𝑏𝑝 .
                if ((a[b[p]] | b[p + 1] )) {

                }
            }
            e++;
        }
        cout << max_len << endl;
    }
    return 0;
}