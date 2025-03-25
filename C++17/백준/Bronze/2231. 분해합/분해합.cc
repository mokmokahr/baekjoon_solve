#include <iostream>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	int res = 0;
	for (int i = N - 54; i < N; i++) {
		int sum = 0;
		int soleNum = i;
		while (soleNum) {
			sum += soleNum % 10;
			soleNum = soleNum / 10;
		}
		if (i + sum == N) {
			res = i;
			break;
		}
		
	}
	cout << res;
}