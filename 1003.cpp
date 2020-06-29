#include <iostream>
using namespace std;

int main() {
	int t;
	scanf_s("%d", &t);

	int arr[41] = { 0,1,1 };
	for (int i = 3; i < 41; i++)
		arr[i] = arr[i - 1] + arr[i - 2];

	for (int i = 0; i < t; i++) {
		int n;
		scanf_s("%d", &n);

		if (n == 0)
			printf("1 0\n");
		else if (n == 1)
			printf("0 1\n");
		else
			printf("%d %d\n", arr[n - 1], arr[n]);
	}
}