#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	char num[4] = { '0' };

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> num;
		cout << num[0] + num[2] - '0' - '0' << endl;
	}
	
}