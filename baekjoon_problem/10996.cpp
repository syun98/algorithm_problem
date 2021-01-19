#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;
	if (n % 2 == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n / 2 + 1; j++)
				cout << "* ";
			cout << endl;
			for (int j = 0; j < n / 2; j++)
				cout << " *";
			cout << endl;
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n / 2; j++)
				cout << "* ";
			cout << endl;
			for (int j = 0; j < n / 2; j++)
				cout << " *";
			cout << endl;
		}
	}
}