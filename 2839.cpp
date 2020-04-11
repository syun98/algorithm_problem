#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	int result = -1;
	
	cin >> n;

	for (int i = 0; i <= n / 5; i++){
		if ((n - 5 * (n / 5 - i)) % 3 == 0) {
			result = n / 5 - i + (n - 5 * (n / 5 - i)) / 3;
			break;
		}
	}
	cout << result << endl;

}