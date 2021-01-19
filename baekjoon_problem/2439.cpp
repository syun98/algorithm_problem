//blog : https://codesyun.tistory.com/28
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";
		for (int j = n - i - 1; j < n; j++)
			cout << "*";
		cout << "\n";
	}
}