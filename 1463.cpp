#include <iostream>
using namespace std;

int main() {
	int x;
	int result[1000001] = { 0,0,1,1,2, };

	cin >> x;

	for (int i = 5; i <= x; i++) {
		result[i] = result[i - 1] + 1;

		if (i % 2 == 0 && result[i] > result[i / 2] + 1)
			result[i] = result[i / 2] + 1;

		if (i % 3 == 0 && result[i] > result[i / 3] + 1)
			result[i] = result[i / 3] + 1;
	}
	cout << result[x] << endl;

}