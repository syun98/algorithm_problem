#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	int range = 2;
	int count = 1;
	
	cin >> n;

	while (1) {
		if (n < range)
			break;
		range += 6*count;
		count++;
	}
	cout << count << endl;
}