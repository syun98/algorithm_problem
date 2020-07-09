#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int arr[500][500] = {};
	int result = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < i + 1; j++)
			cin >> arr[i][j];

	result += arr[0][0];
	int temp = 0;
	for (int i = 1; i < n; i++) {
		temp = arr[i][temp] > arr[i][temp + 1] ? temp : temp + 1;
		result += arr[i][temp];
	}

	cout << result << endl;
}