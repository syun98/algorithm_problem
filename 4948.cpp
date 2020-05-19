#include <iostream>
using namespace std;

int main() {
	int t;
	int n;
	int num[100];
	int cnt = 0;
	int temp = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = n; j <= 2n; j++) {
			cin >> num[i];
			for (int j = 1; j <= num[i]; j++) {
				if (num[i] % j == 0)
					temp++;
			}

			if (temp == 2)
				cnt++;
			temp = 0;
		}

		cout << cnt << endl;
		cnt = 0;
	}
}