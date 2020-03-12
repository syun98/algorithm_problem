#include <iostream>
#include <string>

using namespace std;

int main() {
	int num[3];
	int num_result[10] = { 0 };

	for (int i = 0; i < 3; i++) {
		cin >> num[i];
	}
	
	int i_result;
	i_result = num[0] * num[1] * num[2];
	string result = to_string(i_result);

	for (int i = 0; i < size(result); i++) {
		num_result[result[i] - '0']++;
	}

	for (int i = 0; i < 10; i++) {
		cout << num_result[i] << endl;
	}
}