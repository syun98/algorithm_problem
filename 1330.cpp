//blog : https://codesyun.tistory.com/14
#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a > b)
		cout << ">" << endl;
	else if (a < b)
		cout << "<" << endl;
	else
		cout << "==" << endl;
}