#include <iostream>
using namespace std;

int arr[9][9] = {};

void sdoku(int i,int j) {
	int used[9] = { 0, };
	int cnt_i = 0, cnt_j = 0;

	for (int k; k < 9; k++) {
		if (arr[i][k]) {
			cnt_i++;
			used[arr[i][k]]++;
		}
		if (arr[k][j])
			cnt_j++;
	}
}

int main(void) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i][j] == 0)
				sdoku(i, j);
		}
	}
	cout << endl;	//»ı·«

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
}