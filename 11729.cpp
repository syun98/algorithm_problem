#include <cstdio>
int num;

void hanoi_count(int a, int b, int c, int N) {
	if (N == 1) {
		num++;
	}
	else if (N > 1) {
		hanoi_count(a, c, b, N - 1);
		num++;
		hanoi_count(b, a, c, N - 1);
	}

}

void hanoi(int a, int b, int c, int N) {
	if (N == 1) {
		printf("%d %d\n", a, c);
	}
	else if (N > 1) {
		hanoi(a, c, b, N - 1);
		printf("%d %d\n", a, c);
		hanoi(b, a, c, N - 1);
	}
	
}

int main() {
	int N;
	scanf("%d", &N);
	num = 0;
	hanoi_count(1, 2, 3, N);
	printf("%d\n", num);
	hanoi(1, 2, 3, N);
}