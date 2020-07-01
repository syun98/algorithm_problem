#include <iostream>
using namespace std;

int main() {
	int t, n;

	long long arr[101] = { 1,1,1,2,2 };
	for (int i = 5; i < 101; i++)
		arr[i] = arr[i - 1] + arr[i - 5];

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << arr[n-1] << endl;
	}
}