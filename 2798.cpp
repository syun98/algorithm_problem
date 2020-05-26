#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	int card[100] = { 0, };
	int sum = 0;
	int res = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> card[i];
	}

	int min = m;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = card[i] + card[j] + card[k];
				if (m - sum < min&&sum <= m) {
					min = m - sum;
					res = sum;
				}
			}
		}
	}

	cout << res << endl;
}