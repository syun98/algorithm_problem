#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(pair<int, string>a, pair<int, string>b) {
	return a.first < b.first;
}

int main(void) {
	int n;
	vector<pair<int, string> > vec;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int tempInt;
		string tempStr;
		cin >> tempInt >> tempStr;
		vec.push_back(pair<int, string>(tempInt, tempStr));
	}
	stable_sort(vec.begin(), vec.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << vec[i].first << " " << vec[i].second << '\n';
	}
	
}