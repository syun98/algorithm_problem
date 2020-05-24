#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	int root = sqrt(n);
	if (root == 1)
		return true;
	if (n % 2) {
		for (int i = 2; i <= root; i++) {
			if (!(n%i))
				return false;
			if (i == root)
				return true;
		}
	}
	return false;
}

int main() {
	int t;
	int n;
	cin >> t;
	
	int a, b;

	for (int i = 0; i < t; i++) {
		cin >> n;

		for (int j = n / 2; j >= 2; j--) {
			a = j;
			b = n - a;
			if (isPrime(a) && isPrime(b)) {
				cout << a << " " << b << endl;
				break;
			}
		}
	}
}