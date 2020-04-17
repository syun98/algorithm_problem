#include <iostream>
using namespace std;

void Hansu(int n);

int main() {
	int n;

	cin >> n;

	Hansu(n);
}

void Hansu(int n) {
	int cnt = n;

	for (int i = 1; i <= n; i++) {
		if (i < 10)
			continue;
		else if (i < 100) {
			if ((i < 10) > (i % 10))
				cnt--;
		}
		else if (i < 1000) {
			if ((i / 100) > (i % 100 / 10))
				cnt--;
			else {
				if ((i % 10) != (2 * (i % 100 / 10) - (i / 100)))
					cnt--;
			}
		}
	}

	cout << cnt << endl;
}