#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int people[2] = {};
	int cnt = 0, max = 0;
		
	for (int i = 0; i < 4; i++) {
		cin >> people[0] >> people[1];
		cnt = cnt - people[0] + people[1];
		if (cnt > max)
			max = cnt;
	}
	cout << max << endl;
}