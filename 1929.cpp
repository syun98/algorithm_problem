#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	int m, n;
	scanf_s("%d %d", &m, &n);

	bool * arr = new bool[n + 1];

	for (int i = 0; i < n + 1; i++) {
		arr[i] = true;
	}

	int j;

	for (int i = 2; i < n + 1; i++) {
		if (arr[i]) {
			if ((unsigned int)pow(i, 2) > 1000001) {
				break;
			}
			else {
				for (j = (int)pow(i, 2); j < n + 1;) {
					arr[j] = false;
					j += i;
				}
			}
		}
	}

	if (m == 1)
		m++;

	for (int i = m; i < n + 1; i++) {
		if (arr[i] && i >= m)
			printf("%d\n", i);
	}

	delete[]arr;
}