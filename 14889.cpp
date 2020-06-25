#include <iostream>
#include <cmath>
using namespace std;

int n, half;
int res = 101;
int arr[21][21] = {};
int start[11], link[11];
bool use[21];

void divide(int cnt, int index) {
	if (cnt == half) {
		int startSum = 0, linkSum = 0, startSize = 0, linkSize = 0;
		for (int i = 1; i <= n; i++) {
			if (use[i])
				start[startSize++] = i;
			else
				link[linkSize++] = i;
		}

		for (int i = 0; i < half; i++) {
			for (int j = 0; j < half; j++) {
				if (i == j)
					continue;
				startSum += arr[start[i]][start[j]];
				linkSum += arr[link[i]][link[j]];
			}
		}

		int diff = abs(startSum - linkSum);
		res = res > diff ? diff : res;
		return;
	}

	for (int i = index; i <= n; i++) {
		if (!use[i]) {
			use[i] = true;
			divide(cnt + 1, i + 1);
			use[i] = false;
		}
	}
}

int main() {
	cin >> n;
	half = n / 2;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}

	use[1] = true;
	divide(1, 2);
	cout << res << endl;
}