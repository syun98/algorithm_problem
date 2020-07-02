#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[1000][3] = { 0, };
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}
}