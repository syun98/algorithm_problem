#include <iostream>
using namespace std;

int main() {
	int m, n;
	int temp = 0;

	cin >> m >> n;

	for (int i = m; i <= n; i++) {

		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				temp++;
		}

		if (temp == 2) {
			printf("%d\n", i);
		}

		temp = 0;
	}
}