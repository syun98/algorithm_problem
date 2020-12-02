#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, temp;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
	
	for (int i = 0; i < n; i++) {
		//time out when used cout
		printf("%d\n", v[i]);
	}
}