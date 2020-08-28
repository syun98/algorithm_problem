#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	int a[50] = {};
	int b[50] = {};
	int result = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];

	sort(a, a + n);
	sort(b, b + n);
	for (int i = 0; i < n; i++)
		result += a[i] * b[n - 1 - i];

	cout << result << endl;
}