#include <iostream>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	int temp = 0;

	cin >> n;

	while (n != 0) {
		for (int j = n + 1; j <= 2 * n; j++) {
			for (int k = 1; k <= j; k++) {
				if (j % k == 0)
					temp++;
			}

			if (temp == 2)
				cnt++;
			temp = 0;
		}

		cout << cnt << endl;
		cnt = 0;

		cin >> n;
	}

}