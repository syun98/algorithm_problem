//blog : https://codesyun.tistory.com/51
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);

	int reva = 0, revb = 0;
	reva += (a % 10) * 100;
	reva += (a % 100 - a % 10);
	reva += a / 100;

	revb += (b % 10) * 100;
	revb += (b % 100 - b % 10);
	revb += b / 100;

	if (reva > revb)
		printf("%d", reva);
	else
		printf("%d", revb);
}