#include <iostream>
using namespace std;

int main() {
	int n;
	long long fibo[91] = { 0,1, };
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	cout << fibo[n];
}