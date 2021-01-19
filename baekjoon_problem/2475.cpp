#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int arr[5];
	int result = 0;
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

	for (int i = 0; i < 5; i++)
		result += arr[i] * arr[i];
	result = result % 10;

	cout << result << endl;
}