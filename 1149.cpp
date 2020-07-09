#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[1000][3] = { 0, };
	int result[1000][3] = { 0, };
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}

	for (int i = 1; i <= n; i++) {
		result[i][0] = arr[i][0] + min(result[i - 1][1], result[i - 1][2]);
		result[i][1] = arr[i][1] + min(result[i - 1][0], result[i - 1][2]);
		result[i][2] = arr[i][2] + min(result[i - 1][1], result[i - 1][0]);
	}

	cout << min(result[n][0], min(result[n][1], result[n][2]));
}