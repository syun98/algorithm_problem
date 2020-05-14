#include <iostream>
using namespace std;

int AlpaCentauri(int distance) {

	if (distance == 1)
		return 1;
	else if (distance == 2)
		return 2;

	int i = 2;	//i
	int cnt = 0;	//cnt
	int j = 2;		//j


	while (1) {
		if (cnt == 2) {
			i++;
			cnt = 0;
		}
		j += i;
		cnt++;
		if (j >= distance)
			break;
	}
	return (cnt == 1) ? i * 2 - 1 : i * 2;
}

int main() {
	int t;
	int x, y, result;
	scanf_s("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf_s("%d %d", &x, &y);
		printf("%d\n", AlpaCentauri(y - x));
	}
}