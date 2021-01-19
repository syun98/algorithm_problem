//blog : https://codesyun.tistory.com/55
#include<stdio.h>

int main() {
	int A, B, C;
	scanf_s("%d %d %d", &A, &B, &C);
	if (B >= C) {
		printf("-1");
		return 0;
	}
	else {
		printf("%d", A / (C - B) + 1);
	}
	return 0;
}