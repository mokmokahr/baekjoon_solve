#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s;
	while (getline(cin, s)) {
		cout << s << "\n";
	}
} 