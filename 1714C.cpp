#include <iostream>
using namespace std;

int res[45] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 19, 29, 39, 49, 59, 69, 79, 89, 189, 289, 389, 489, 589, 689, 789,
				1789, 2789, 3789, 4789, 5789, 6789, 16789, 26789, 36789, 46789, 56789, 156789, 256789, 356789, 456789,
				1456789, 2456789, 3456789, 13456789, 23456789, 123456789};

int main() {
//	int t, s, res, sum, temp;
//	cin >> t;
//	while (t--) {
//		int flags[10] = {0};
//		cin >> s;
//		res = 0;
//		temp = 1;
//		sum = 0;
//		while (sum < s) {
//			for (int i = 9; i > 0; i--) {
//				if (!flags[i] &&  sum + i <= s) {
//					flags[i] = 1;
//					res += temp * i;
//					temp *= 10;
//					sum += i;
//				}
//			}
//		}
//		cout << res << endl;
//	}
	int t, s;
	cin >> t;
	while (t--) {
		cin >> s;
		cout << res[s-1] << endl;
	}
	return 0;
}
