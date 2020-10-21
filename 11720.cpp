//blog : https://codesyun.tistory.com/46
#include <cstdio>

int main() {
	int N, result = 0;
	int num[100];

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%1d", &num[i]);
	}

	for (int i = 0; i < N; i++) {
		result += num[i];
	}
	printf("%d\n", result);
}