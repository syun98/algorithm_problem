#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);

	int m, n, x, y;
	
	for (int i = 0; i < t; i++) {
		int cnt = 0;
		scanf("%d %d %d %d", &m, &n, &x, &y);

		while (x != y) {
			if (x > m*n || y > m*n) {
				cnt = 1;
				break;
			}
			if (x < y)
				x += m;
			else
				y += n;
		}
		if (cnt == 1)
			printf("-1\n");
		else
			printf("%d\n", x);
	}
}