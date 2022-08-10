#include <iostream>
using namespace std;

int main() {
	int t, n, tmp, res[100];
	cin >> t;
	while(t--) {
		cin >> n;
		cout << n << endl;
		for (int i = 0; i < n; i++) {
			res[i] = i + 1;
			if (i) {
				cout << " ";
			}
			cout << res[i];
		}
		cout << endl;
		for (int i = 0; i < n - 1; i++) {
			tmp = res[i];
			res[i] = res[n - 1];
			res[n - 1] = tmp;
			for (int j = 0; j < n; j++) {
				if (j) {
					cout << " ";
				}
				cout << res[j];
			}
			cout << endl;
		}
	}
	return 0;
}
