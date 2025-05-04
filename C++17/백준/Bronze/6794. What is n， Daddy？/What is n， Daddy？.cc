#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	if (N > 5) N = 10 - N;
	cout << N/2+1;
}