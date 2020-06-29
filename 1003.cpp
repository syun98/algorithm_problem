#include <iostream>
using namespace std;

int cnt[2] = {};

void fibonacci(int n) {
	if (n == 0)
		cnt[0]++;
	else if (n == 1)
		cnt[1]++;
	else {
		fibonacci(n - 1);
		fibonacci(n - 2);
	}
}

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);
		fibonacci(n);
		printf("%d %d\n", cnt[0], cnt[1]);
		cnt[0] = cnt[1] = 0;
	}
}