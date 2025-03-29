#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <time.h>
using namespace std;

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return factorial(n - 1) * n;
	}
}

int main(void) {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		int f = factorial(n);
		if (f >= 10) {
			cout << f % 10;
		}
		else {
			cout << f;
		}
		cout << "\n";
	}
} 