#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int stair[301] = {};
	int result = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
			cin >> stair[i];

	cout << result << endl;
}