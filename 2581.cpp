#include <iostream>
using namespace std;

int main() {
	int m, n;
	int num[10000];
	int sum = 0;
	int temp = 0;
	int min = -1;

	cin >> m >> n;

	for (int i = m; i <= n; i++) {

		for (int j = 1; j <= num[i]; j++) {
			if (num[i] % j == 0)
				temp++;
		}

		if (temp == 2) {
			sum += num[i];
		}

		if (min == -1) {
			min = num[i];
		}
		temp = 0;
	}
	cout << sum << endl << min << endl;
}