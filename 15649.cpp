#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = {};
int chk[MAX] = {};		//전역 변수로 선언

void dfs(int cnt) {
	if (cnt == m) {		//m번 반복하고 m숫자가 된다면 해당 배열 출력
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {	//숫자를 1부터 검사
		if (!chk[i]) {		//상위 호출된 함수에서 사용됐었다면 pass
			chk[i] = true;	//사용했다고 바꾸고
			arr[cnt] = i;	//cnt번째로 저장해둔 후
			dfs(cnt + 1);	//다음 배열 숫자를 저장하기 위한 재귀
			chk[i] = false;	//해당 숫자의 사용 해제
		}
	}
}

int main(void) {
	cin >> n >> m;
	dfs(0);
}