#include <iostream>
using namespace std;

int AlpaCentauri(int distance) {

	if (distance == 0)
		return 0;
	else if (distance == 1)
		return 1;
	else if (distance == 2)
		return 2;
	
	int res = 2;
	int cnt = 3;
	int jp = 2;

	while (1) {
		if (distance < cnt)
			break;
		res++;
		cnt += jp;
		if (distance < cnt)
			break;
		res++;
		cnt += jp;
		jp++;
	}
	return res;
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