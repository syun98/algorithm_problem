#include <iostream>

using namespace std;

int main() {
	int n = 0;
	int num;
	int max = -1000000, min = 1000000;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		max = max < num ? num : max;
		min = min > num ? num : min;
	}

	cout << min << " " << max << endl;
}