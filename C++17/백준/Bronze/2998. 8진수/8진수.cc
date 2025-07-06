#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	string n, res = "";
	int idx = 0;
	cin >> n;
	switch (n.length() % 3) {
	case 0:
		break;
	case 1:
		n = "00" + n;
		break;
	case 2:
		n = "0" + n;
		break;
	}
	while (idx != n.length()) {
		string tmp = "";
		for (int i = 0; i < 3; i++) {
			tmp += n[idx++];
		}
		switch (stoi(tmp)) {
		case 1:
			res += '1';
			break;
		case 10:
			res += '2';
			break;
		case 11:
			res += '3';
			break;
		case 100:
			res += '4';
			break;
		case 101:
			res += '5';
			break;
		case 110:
			res += '6';
			break;
		case 111:
			res += '7';
			break;
		default:
			res += '0';
		}
	}
	cout << res;
}	