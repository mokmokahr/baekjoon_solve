#include <iostream>

using namespace std;

int main(void) {
	int N;
	cin >> N;
	int size[7];
	for (int i = 0; i < 6; i++) {
		cin >> size[i];
	}
	int T, P;
	int sum = 0;
	cin >> T >> P;
	for (int i = 0; i < 6; i++) {
		if (size[i] % T == 0) {
			sum += size[i] / T;
		}
		else {
			sum += size[i] / T + 1;
		}
	}
	cout << sum << "\n";
	cout << N/P <<" " << N % P;
}