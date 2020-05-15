#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int j = 0; j < t; j++) {
		long double x, y, d, i = 1;
		cin >> x >> y;
		d = y - x;
		for (;; i++)
			if (i*i > d)
				break;

		if (pow(i - 1, 2) == y - x)
			cout << 2 * i - 3 << '\n';
		else if ((pow(i, 2) + pow(i - 1, 2)) / 2 >= y - x)
			cout << 2 * (i - 1) << '\n';
		else
			cout << 2 * (i - 1) + 1 << '\n';
	}
}