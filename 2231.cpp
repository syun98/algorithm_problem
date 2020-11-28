//blog : https://codesyun.tistory.com/81
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, result = 10000001;
	int generate;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		generate = i + (i % 10);
		for (int j = 1; j <= log10(i); j++) {
			generate += (i % (int)pow(10, j + 1)) / pow(10, j);
		}
		if (generate == n && i < result)
			result = i;
	}
	if (result > 1000000)
		cout << 0 << '\n';
	else
		cout << result << '\n';
}