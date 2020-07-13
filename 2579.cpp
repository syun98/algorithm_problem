#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int arr[301] = {};
	int result[301] = {};

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	result[1] = arr[1];
	result[2] = arr[1] + arr[2];
	result[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

	for (int i = 4; i <= n; i++)
		result[i] = max(result[i - 2] + arr[i], result[i - 3] + arr[i - 1] + arr[i]);

	cout << result[n] << endl;
}