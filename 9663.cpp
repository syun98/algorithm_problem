#include <iostream>
using namespace std;

int n;
int res;
int board[15] = {};

bool chk(int row) {
	for (int i = 0; i < row; i++) {	//i는 0~마지막 여왕 바로 윗 행까지
		//같은 열에 있거나 대각선에 있다면
		if (board[row] == board[i] || abs(row - i) == abs(board[row] - board[i]))
			return false;
	}
	return true;
}

void run(int row) {
	if (row == n) {
		res++;
		return;
	}

	//첫 번째 행에 놓이는 말의 위치를 i가 정함
	for (int i = 0; i < n; i++) {	//i가 열의 위치
		board[row] = i;
		if (chk(row))		//chk한게 통과했으면
			run(row + 1);
		//통과 끝나면
		board[row] = 0;
	}
}

int main(void) {
	cin >> n;
	run(0);
	cout << res << endl;
}