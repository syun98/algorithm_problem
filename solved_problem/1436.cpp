//blog : https://codesyun.tistory.com/84
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int result = 665;
	string temp;
	cin >> n;

	for (int i = 0; i < n; i++) {
		while (1) {
			result++;
			temp = to_string(result);
			if (temp.find("666") != -1)
				break;
		}
	}
	cout << result << '\n';
}