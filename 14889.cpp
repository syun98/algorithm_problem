#include <iostream>
using namespace std;

int n;
int arr[20][20] = {};
int res = 101;

void dfs(int i, int j) {
	int temp;
	
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			dfs(i, j);
		}
	}

	cout << res << endl;
}