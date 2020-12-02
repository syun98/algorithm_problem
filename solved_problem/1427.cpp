#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	char n[11];
	int res[10];
	cin >> n;

	for (int i = 0; i < strlen(n); i++) {
		res[i] = n[i] - 48;
	}
	sort(res, res + strlen(n));
	for (int i = strlen(n) - 1; i >= 0; i--) {
		cout << res[i];
	}
}