#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	double avg = 0;
	int median, mode = 0, range;
	int cnt[8001] = {}, max = 0;
	int arr[500000];
	cin >> n;

	int temp = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		avg += arr[i];
		if (arr[i] < 0)
			temp = arr[i] + 8001;
		else
			temp = arr[i];
		cnt[temp]++;
		if (cnt[temp] > max)
			max = cnt[temp];
	}

	sort(arr, arr + n);

	avg = round(avg / n);

	if (n % 2 == 1)
		median = arr[n / 2];
	else
		median = arr[n / 2 - 1];

	int max_cnt = 0;
	for (int i = 4001; i < 8001; i++) {
		if (cnt[i] == max) {
			if (max_cnt < 2)
				mode = i;
			max_cnt++;
		}
	}
	for (int i = 0; i < 4001; i++) {
		if (cnt[i] == max) {
			if (max_cnt < 2)
				mode = i;
			max_cnt++;
		}
	}

	if (mode > 4000)
		mode -= 8001;

	range = arr[n - 1] - arr[0];

	cout << avg << endl << median << endl << mode << endl << range << endl;
}