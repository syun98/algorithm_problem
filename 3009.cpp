#include <iostream>
using namespace std;

int main() {
	int square[2][3];
	int result[2];

	for (int i = 0; i < 3; i++) {
		cin >> square[0][i] >> square[1][i];
	}

	if (square[0][0] == square[0][1])
		result[0] = square[0][2];
	else if (square[0][1] == square[0][2])
		result[0] = square[0][0];
	else
		result[0] = square[0][1];

	if (square[1][0] == square[1][1])
		result[1] = square[1][2];
	else if (square[1][1] == square[1][2])
		result[1] = square[1][0];
	else
		result[1] = square[1][1];

	cout << result[0] << " " << result[1] << endl;
}