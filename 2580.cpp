#include <iostream>
using namespace std;

int a[81] = {};

int sdoku(int i) {

}

int main(void) {
	for (int i = 0; i < 81; i++)
		cin >> a[i];
	
	int cnt = 0;
	bool chk = true;
	while (1) {
		for (int i = 0; i < 81; i++) {
			if (a[i] == 0) {
				a[i] = sdoku(i);
				chk = false;
			}

		}
	}


	for (int i = 0; i < 81; i++) {
		if (i % 9 == 0 && i != 0)
			cout << '\n';
		cout << a[i]<<' ';
	}
}