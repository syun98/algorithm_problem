#include <iostream>
using namespace std;

int min(int x, int y) {
	return x > y ? y : x;
}

int main() {
	char chs[52][52];
	int res = INT32_MAX;

	int n, m;	
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> chs[i][j];

	for (int x = 0; x < n - 7; x++) {
		for (int y = 0; y < m - 7; y++) {
			int cnt = 0;
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					if (i % 2 == 1) {
						if (j % 2 == 1 && chs[x + i][y + j] == 'B')
							cnt++;
						else if (j % 2 == 0 && chs[x + i][y + j] == 'W')
							cnt++;
					}
					else {
						if (j % 2 == 0 && chs[x + i][y + j] == 'B')
							cnt++;
						else if (j % 2 == 1 && chs[x + i][y + j] == 'W')
							cnt++;
					}
				}
			}
			cnt = min(cnt, 64 - cnt);
			res = min(cnt, res);
		}
	}
	cout << res << endl;
}