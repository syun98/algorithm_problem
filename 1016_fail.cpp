#include <iostream>
using namespace std;

int main() {
	int min, max;
	cin >> min >> max;

	int cnt = max - min + 1;

	for (int i = 1; i*i <= max; i++) {
		if(i*i>=min)
			cnt--;
	}
	cout << cnt << endl;
}
