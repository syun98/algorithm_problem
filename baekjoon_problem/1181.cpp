#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compareStr(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main(void) {
	int n;
	vector<string> vec;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		if (find(vec.begin(), vec.end(), temp) == vec.end())
			vec.push_back(temp);
	}
	sort(vec.begin(), vec.end(), compareStr);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << '\n';
	}
}