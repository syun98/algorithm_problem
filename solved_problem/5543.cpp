#include <iostream>
#define min(a,b) (((a)>(b))?(b):(a))

using namespace std;

int main() {

	int burger[3];
	int coke[2];
	int set[6];

	for (int i = 0; i < 3; i++) {
		cin >> burger[i];
	}
	for (int i = 0; i < 2; i++) {
		cin >> coke[i];
	}

	int k = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			set[k] = burger[i] + coke[j];
			k++;
		}
	}

	int minvalue = 5000;

	for (int i = 0; i < 6; i++) {
		minvalue = min(set[i], minvalue);
	}
	 
	cout << minvalue - 50 << endl;
}