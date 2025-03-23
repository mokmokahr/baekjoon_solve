#include <iostream>

using namespace std;

int main(void) {
	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int n;
		int decide = 0;
		cin >> n;
		if (n == 1) continue;
		for (int j = 2; j < n; j++) {
			if (n % j == 0) decide = 1;
		}
		if (!decide) {
			cnt++;
		}
	}
	cout << cnt;
}