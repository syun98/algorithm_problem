#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main() {
	string str;
	int alpha[26] = { 0 };
	int len, max = 0, maxalpha = 0, multialpha = 0;
	getline(cin, str, '\n');
	len = str.length();

	for (int i = 'A'; i <= 'Z'; i++) {
		for (int j = 0; j < len; j++) {
			if (str.at(j) == i) {
				alpha[i - 65]++;
			}
		}
	}
	
	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < len; j++) {
			if (str.at(j) == i) {
				alpha[i - 97]++;
			}
		}
	}

	for (int i = 'A'; i <= 'Z'; i++) {
		if (max < alpha[i - 65]) {
			max = alpha[i - 65];
			maxalpha = i;
		}
	}

	for (int i = 'A'; i <= 'Z'; i++) {
		if (max == alpha[i - 65])
			multialpha++;
	}
		

	if (multialpha == 1)
		printf("%c\n", maxalpha);
	else
		printf("?\n");
}