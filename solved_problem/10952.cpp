//blog : https://codesyun.tistory.com/30
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	while (1) {
		cin >> a >> b;
		if (a != 0 && b != 0) {
			cout << a + b << '\n';
		}
		else {
			break;
		}
	}
}