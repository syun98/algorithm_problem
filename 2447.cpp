#include <cstdio>

const int N = 2187;
const int M = 1093;

int n;
bool star[N][N];


void f(int n, int x, int y) {
	if (n == 1) {
		star[x][y] = true;
		return;
	}
	for (int i = 0; i<3; i++) {
		for (int j = 0; j<3; j++) {
			if (i == 1 && j == 1) continue;
			f(n / 3, x + (n / 3)*i, y + (n / 3)*j);
		}
	}
}

int main() {
	scanf("%d", &n);
	f(n, 0, M - n / 2);
	for (int i = 0; i<n; i++) {
		for (int j = M - n / 2; j <= M + n / 2; j++) {
			printf("%c", star[i][j] ? '*' : ' ');
		}
		puts("");
	}
	return 0;
}