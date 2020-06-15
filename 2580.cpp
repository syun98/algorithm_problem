#include <iostream>
using namespace std;

int a[9][9] = {};

void sdoku(int i, int j) {
	int res = 45;
}

int main(void) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (a[i][j] == 0)
				sdoku(i, j);
		}
	}
	cout << endl;	//»ý·«

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
}