#include <iostream>
using namespace std;

int n;
int arr[11] = {};
int op[4] = {};
int max_res = -1000000001;
int min_res = 1000000001;

void dfs(int plus, int minus, int mul, int div, int cnt, int res) {
	if (cnt == n) {
		max_res = (max_res > res) ? max_res : res;
		min_res = (min_res < res) ? min_res : res;
	}

	if (plus > 0)
		dfs(plus - 1, minus, mul, div, cnt + 1, res + arr[cnt]);
	if (minus > 0)
		dfs(plus, minus - 1, mul, div, cnt + 1, res - arr[cnt]);
	if (mul > 0)
		dfs(plus, minus, mul - 1, div, cnt + 1, res * arr[cnt]);
	if (div > 0)
		dfs(plus, minus, mul, div - 1, cnt + 1, res / arr[cnt]);
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cin >> op[0] >> op[1] >> op[2] >> op[3];

	dfs(op[0], op[1], op[2], op[3], 1, arr[0]);
	cout << max_res << endl << min_res << endl;
}