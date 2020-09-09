#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);
	string str;
	int cnt = 0;
	cin >> str;

	for (int i = 1; i < str.length(); i++) {
		if (i % 10 == 0) {
			cout << str.substr(i - 10, 10) << "\n";
			cnt = i;
		}
	}
	for (int i = cnt; i < str.length(); i++) {
		cout << str.at(i);
	}
}