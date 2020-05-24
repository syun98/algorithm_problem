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

		d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

		if (x1 == x2 && y1 == y2 && r1 == r2)
			result = -1;
		else if (x1 == x2 && y1 == y2 && r1 != r2)
			result = 0;
		else if (r1 + r2 > d)
			result = 2;
		else if (r1 + r2 == d)
			result = 1;
		else if (r1 + r2 < d)
			result = 0;

		cout << result << endl;
	}
}