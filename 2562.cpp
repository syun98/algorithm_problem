#include <iostream>

using namespace std;

int main() {
	int num[9];

	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	int maxvalue = 0, maxindex = 0;
	for (int i = 0; i < 9; i++) {
		if (maxvalue < num[i]) {
			maxvalue = num[i];
			maxindex = i;
		}
	}

	cout << maxvalue << endl << maxindex + 1;

}