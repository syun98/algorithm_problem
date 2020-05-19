#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	int n = 1;
	int cnt = 0;

	while (n != 0) {
		cin >> n;

		if (n == 0)
			break;

		//에라토스테네스의 체 사용
		bool * arr = new bool[2 * n + 1];

		for (int i = 0; i < 2 * n + 1; i++) {
			arr[i] = true;
		}

		int j;

		for (int i = 2; i < 2 * n + 1; i++) {
			if (arr[i]) {
				if ((unsigned int)pow(i, 2) > 1000001) {
					break;
				}
				else {
					for (j = (int)pow(i, 2); j < 2 * n + 1;) {
						arr[j] = false;
						j += i;
					}
				}
			}
		}

		for (int i = n + 1; i < 2 * n + 1; i++) {
			if (arr[i] && i >= n)
				cnt++;
		}
		cout << cnt << endl;
		cnt = 0;
		delete[]arr;
	}
}