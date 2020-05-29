#include <iostream>
using namespace std;

int main() {
	int n;
	int x[50] = {};
	int y[50] = {};
	int rank[50] = {};
	
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (x[i] < x[j] && y[i] < y[j]) {
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << ++rank[i] << " ";
}