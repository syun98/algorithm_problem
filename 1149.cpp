#include <iostream>
using namespace std;

int arr[1000][3] = { 0, };
bool chk[1000][3];
int result = 3001;

void Solve(int n, int cnt) {
	int temp = 3001;

	if (chk[n][cnt])
		return;

	if (cnt == 3) {
		if (temp < result)
			result = temp;
		temp = 0;
	}
	else {
		temp += arr[n][cnt];
		chk[n][cnt] = true;
		Solve(n - 1, cnt + 1);
		chk[n][cnt] = false;
	}

}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}

	Solve(n,0);

	cout << result << endl;
}