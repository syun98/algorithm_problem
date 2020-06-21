#include <iostream>
using namespace std;

int arr[9][9] = {};

void sdoku(int i, int j) {

}

int main(void) {
	int res_cnt = 81;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}

again:;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i][j] == 0)
				sdoku(i, j);
		}
	}

	if (res_cnt)
		goto again;
	cout << endl;	//»ý·«

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
}