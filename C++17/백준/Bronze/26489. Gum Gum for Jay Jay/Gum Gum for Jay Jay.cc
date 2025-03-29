#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <time.h>
using namespace std;



int main(void) {
	string s;
	int n = 0;

	while (getline(cin, s)) {
		n++;
	}
	cout << n;
} 