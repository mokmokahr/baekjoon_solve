#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	while (1) {
		int N;
		cin >> N;
		if (!N) {
			break;
		}
		int k = 0;
		int tmp = N;
		int len = to_string(N).length();
		while(N) {
			k *= 10;
			k += N % 10;
			N /= 10;
		}
		if (k == tmp) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}

	}
}