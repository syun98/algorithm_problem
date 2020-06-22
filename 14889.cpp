#include <iostream>
using namespace std;

int n;
int arr[20][20] = {};

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
}