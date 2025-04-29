#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	string tmp = "";
	int cha = s1.length() - s2.length();
	if (cha>0) {
		for (int i = 0; i < cha; i++) {
			tmp += '0';
		}
		s2 = tmp + s2;
	}
	else {
		for (int i = 0; i < -cha; i++) {
			tmp += '0';
		}
		s1 = tmp + s1;
	}
	int up = 0,digit;

	string res = "";
	for (int i = s1.length() - 1; i >=0; i--) {
		digit = s1[i] - '0' + s2[i] - '0' + up;
		up = digit / 2;
		res += to_string(digit % 2);
		if (i == 0 && up) {
			res += '1';
		}
	}
	int startZero = 0;
	for (int i = res.length() - 1; i >=0; i--) {
		if (startZero == 1) {
			cout << res[i];
		}
		else if (res[i] != '0') {
			cout << res[i];
			startZero = 1;
		}
		else if (i == 0) {
			cout << 0;

		}
	}
}