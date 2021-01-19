#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = {};
int chk[MAX] = {};

void dfs(int pre_i, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = pre_i; i <= n; i++) {
		if (!chk[i] && cnt < i) {
			chk[i] = true;
			arr[cnt] = i;
			dfs(i+1, cnt + 1);
			chk[i] = false;
		}
	}
}

int main(void) {
	cin >> n >> m;
	dfs(1, 0);
}