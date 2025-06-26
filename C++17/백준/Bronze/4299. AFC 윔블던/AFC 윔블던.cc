#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if ((a + b) / 2 >=0 && (a - b) / 2 >=0 && (a + b) / 2 + (a - b) / 2 == a && (a + b) / 2 - (a - b) / 2 == b) {
		cout << (a + b) / 2 << " " << (a - b) / 2;
	}
	else {
		cout << "-1";
	}
}