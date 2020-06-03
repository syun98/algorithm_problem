#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> x(n, vector<int>(2, 0));

	for (int i = 0; i < n; i++) {
		cin >> x[i][0] >> x[i][1];
	}

	sort(x.begin(), x.end());

	for (int i = 0; i < x.size(); i++) {
		cout << x[i][0] << " " << x[i][1] << '\n';
	}

}