#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[11] = {};
int op[4] = {};
int max_res = -1000000001;
int min_res = 1000000001;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cin >> op[0] >> op[1] >> op[2] >> op[3];
}