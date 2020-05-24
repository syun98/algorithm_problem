#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	int x1, x2, y1, y2, r1, r2;
	double d;
	int result = 0;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		int minus = abs(r1 - r2);
		int plus = r1 + r2;

		if (d == 0) {
			if (r1 == r2)
				result = -1;
			else
				result = 0;
		}
		else {
			if (minus<d&&plus>d)
				result = 2;
			else if (plus == d || minus == d)
				result = 1;
			else
				result = 0;
		}

		cout << result << endl;
	}
}