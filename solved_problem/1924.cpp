#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	int x, y;
	cin >> x >> y;

	if (x == 2)
		y += (31 * 1);
	else if (x == 3)
		y += (31 * 1) + (28 * 1);
	else if (x == 4)
		y += (31 * 2) + (28 * 1);
	else if (x == 5)
		y += (31 * 2) + (30 * 1) + (28 * 1);
	else if (x == 6)
		y += (31 * 3) + (30 * 1) + (28 * 1);
	else if (x == 7)
		y += (31 * 3) + (30 * 2) + (28 * 1);
	else if (x == 8)
		y += (31 * 4) + (30 * 2) + (28 * 1);
	else if (x == 9)
		y += (31 * 5) + (30 * 2) + (28 * 1);
	else if (x == 10)
		y += (31 * 5) + (30 * 3) + (28 * 1);
	else if (x == 11)
		y += (31 * 6) + (30 * 3) + (28 * 1);
	else if (x == 12)
		y += (31 * 6) + (30 * 4) + (28 * 1);

	y %= 7;
	switch (y) {
	case 0:
		cout << "SUN\n";
		break;
	case 1:
		cout << "MON\n";
		break;
	case 2:
		cout << "TUE\n";
		break;
	case 3:
		cout << "WED\n";
		break;
	case 4:
		cout << "THU\n";
		break;
	case 5:
		cout << "FRI\n";
		break;
	case 6:
		cout << "SAT\n";
		break;
	}
}