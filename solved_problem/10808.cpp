#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int alpha[26] = {};
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		alpha[str.at(i) - 97]++;
	}

	for (int i = 0; i < 26; i++)
		printf("%d ", alpha[i]);
}