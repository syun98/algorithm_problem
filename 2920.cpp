#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);

	int arr[8] = {};
	int result = 0;		//1:asc 2:desc 3:mixed

	for (int i = 0; i < 8; i++)
		cin >> arr[i];
	
	if (arr[0] < arr[1])
		result = 1;
	else
		result = 2;

	for (int i = 1; i < 7; i++) {
		if (arr[i] < arr[i + 1] && result == 1)
			;
		else if (arr[i] > arr[i + 1] && result == 2)
			;
		else
			result = 3;
	}

	if (result == 1)
		cout << "ascending";
	else if (result == 2)
		cout << "descending";
	else
		cout << "mixed";
}