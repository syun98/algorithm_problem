#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	x = ((w - x) < x) ? (w - x) : x;
	y = ((h - y) < y) ? (h - y) : y;

	if (x < y)
		cout << x;
	else
		cout << y;
}
