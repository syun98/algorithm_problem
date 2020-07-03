#include <iostream>
using namespace std;

int arr[1000][3] = { 0, };

void Solve(int n) {
	int result = -1;

	cout << result << endl;
}

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}

	Solve(n);
}