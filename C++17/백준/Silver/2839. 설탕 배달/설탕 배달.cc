#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	int min = 10000;
	for (int i = 0; i <= N / 5; i++) {
		int rest = (N - (5 * i));
		int sum = 0;
		if (rest % 3 == 0) {
			sum = rest / 3 + i;
			if (min > sum) min = sum;
		}
	}
	if (min == 10000) {
		cout << -1;
	}
	else {
		cout << min;
	}
	

}