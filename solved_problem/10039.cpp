#include <iostream>
using namespace std;

int main() {
	int score[5];
	int mean = 0;

	for (int i = 0; i < 5; i++) {
		cin >> score[i];
		if (score[i] < 40)
			mean += 40;
		else
			mean += score[i];
	}
	cout << mean / 5 << endl;
}