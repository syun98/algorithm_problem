#include <iostream>
using namespace std;

int arr[9][9] = {};
int res_cnt = 81;

void sdoku(int i, int j) {
	int chk[9] = { 0, };
	int zeroChk = 0;

	for (int k = 0; k < 9; k++) {
		if (arr[i][k] == 0) {
			zeroChk++;
		}
		else {
			chk[arr[i][k] - 1]++;
		}
	}

	if (zeroChk == 1) {
		for (int k = 0; k < 9; k++) {
			if (chk[k] == 0) {
				arr[i][j] = k + 1;
				res_cnt--;
				return;
			}
			chk[k] = 0;
		}
	}

	zeroChk = 0;

	for (int k = 0; k < 9; k++) {
		if (arr[k][j] == 0) {
			zeroChk++;
		}
		else {
			chk[arr[k][j] - 1]++;
		}
	}

	if (zeroChk == 1) {
		for (int k = 0; k < 9; k++) {
			if (chk[k] == 0) {
				arr[i][j] = k + 1;
				res_cnt--;
				return;
			}
			chk[k] = 0;
		}
	}

	zeroChk = 0;

	for (int k = i / 3 * 3; k < i / 3 * 3 + 3; k++) {
		for (int L = j / 3 * 3; L < j / 3 * 3 + 3; L++) {
			if (arr[L][k] == 0) {
				zeroChk++;
			}
			else {
				chk[arr[L][k] - 1]++;
			}
		}
	}

	if (zeroChk == 1) {
		for (int k = 0; k < 9; k++) {
			if (chk[k] == 0) {
				arr[i][j] = k + 1;
				res_cnt--;
				return;
			}
			chk[k] = 0;
		}
	}
}

int main() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}

again:;
	res_cnt = 81;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i][j] == 0)
				sdoku(i, j);
			else
				res_cnt--;
		}
	}

	if (res_cnt)
		goto again;
	//cout << endl;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
}