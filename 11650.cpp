#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int x[100000][2] = {};
	cin >> n;
	
	for (int i = 0; i < n; i++) 
		cin >> x[i][0] >> x[i][1];
	
	//error
	sort(x[0][0], x[n][0]);

	for (int i = 0; i < n; i++)
		cout << x[i][0] << x[i][1] << endl;
}