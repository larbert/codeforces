#include <iostream>
using namespace std;

int main() {
	int n, a, arr[200005], t;
	cin >> n;
	while (n--) {
		cin >> a;
		bool nums[200005] = {0};
		for (int i = 0; i < a; i ++ ){
			cin >> arr[i];
		}
		int res = a - 1;
		for (; res >= 0; res -- ) {
			if (nums[arr[res]]) {
				break;
			} else {
				nums[arr[res]] = 1;
			}
		}
		cout << res + 1 << endl;
	}
	return 0;
}
