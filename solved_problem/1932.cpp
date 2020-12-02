#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int arr[501][501] = {};
	int result = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			cin >> arr[i][j];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			arr[i][j] += max(arr[i - 1][j], arr[i - 1][j - 1]);
		}
	}

	for (int i = 1; i <= n; i++) {
		if (result < arr[n][i])
			result = arr[n][i];
	}

	cout << result << endl;
}