#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;
	long long sum = 0;
	char c[51];
	for (int i = 0; i < N; i++) {
		cin >> c[i];
		int num = int(c[i]) -96;
		sum += num * pow(31, i);
	}
	cout << sum % 1234567891;

}