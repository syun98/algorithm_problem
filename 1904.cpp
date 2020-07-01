#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[100001] = { 0,1,2 };
	cin >> n;

	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= 15746;
	}

	cout << arr[n] << endl;
}