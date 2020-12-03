//blog : https://codesyun.tistory.com/86
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int arr[1001];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int temp;
	for (int i = 1; i < n; i++) {
		int *p = min_element(arr + i-1, arr + n);
		temp = *p;
		*p = arr[i - 1];
		arr[i - 1] = temp;
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << '\n';
}