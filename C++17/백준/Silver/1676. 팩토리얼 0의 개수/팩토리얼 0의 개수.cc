#include <iostream>
using namespace std;

int main() {
	int N,cnt = 0;
	cin >> N;
	for (int i = N;i > 0; i--) {
		int tmp = i;
		while (tmp % 5 == 0) {
			cnt++;
			tmp /= 5;
		}
	}
	cout << cnt;
}