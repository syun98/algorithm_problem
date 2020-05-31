#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	double avg = 0;
	int median, mode = 0, range;
	int arr[500];	//500000
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		avg += arr[i];
	}
	sort(arr, arr + n);

	avg = round(avg / n);

	if (n % 2 == 1)
		median = arr[n / 2];
	else
		median = arr[n / 2 - 1];

	/*mode ±¸ÇÏ±â*/

	range = arr[n - 1] - arr[0];

	cout << avg << endl << median << endl << mode << endl << range << endl;
	
}