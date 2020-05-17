#include <iostream>
using namespace std;

int main() {
	int m, n;
	int sum = 0;
	int min = -1;
	int temp = 0;

	cin >> m >> n;

	for (int i = m; i <= n; i++) {

		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				temp++;
		}

		if (temp == 2) {
			sum += i;
			if (min == -1) {
				min = i;
			}
		}

		temp = 0;
	}

	if (min == -1)
		cout << "-1" << endl;
	else
		cout << sum << endl << min << endl;
}