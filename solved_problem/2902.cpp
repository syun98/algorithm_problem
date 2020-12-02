#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string str;
	string result;
	cin >> str;

	result = str.at(0);
	for (int i = 1; i < str.length(); i++) {
		if (str.at(i) == '-')
			result.append(str, i + 1, 1);
	}

	cout << result << endl;
}