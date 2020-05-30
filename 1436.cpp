#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	int res = 665;
	string temp;
	cin >> n;

	for (int i = 0; i < n; i++) {
		while (1) {
			res++;
			temp = to_string(res);
			if (temp.find("666") != -1)
				break;
		}
	}
	cout << res;
}