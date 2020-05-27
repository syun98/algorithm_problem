#include <iostream>
using namespace std;

int main() {
	int n;
	int temp = 0;
	int res = 0;
	cin >> n;

	for (int i = 1; i < n; i++) {
		temp = i;
		temp += i / 1000000 + i % 1000000 / 100000
			+ i % 100000 / 10000 + i % 10000 / 1000
			+ i % 1000 / 100 + i % 100 / 10 + i % 10;
		if (temp == n) {
			res = i;
			break;
		}
	}
	cout << res << endl;
}