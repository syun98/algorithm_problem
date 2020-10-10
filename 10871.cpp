//blog : https://codesyun.tistory.com/29
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x;
	int arr[10000] = {};
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < x)
			;
		else
			arr[i] = -1;
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			cout << arr[i] << " ";
		}
	}
}