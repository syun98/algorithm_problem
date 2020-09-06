#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int result;
	int arr[9] = {};
	cin >> result;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		result -= arr[i];
	}

	cout << result << endl;
}