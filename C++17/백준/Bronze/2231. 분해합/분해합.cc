#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void) {
	int N;
	cin >> N;
	int n = N;
	int res = 0;
	while (n) {
		n--;
		int sum = n%10;
		int soleNum = n;
		int size = to_string(n).size();
		for (int i = 1; i < size; i++) {
			
			soleNum /=10;
			sum += soleNum %10;
			
		}
		if (n + sum == N) {
			res = n;
		}
		
	}
	if (res == 0) {
		cout << 0;
	}
	else {
		cout << res;
	}
}