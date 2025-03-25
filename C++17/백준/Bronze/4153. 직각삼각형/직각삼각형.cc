#include <iostream>

using namespace std;

int main(void) {
	int a,b,c,max = 0,triSum;

	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)break;

		if (a > b) {
			if (a > c) {
				max = a;
				triSum = b * b + c * c;
			}
			else {
				max = c;
				triSum = a * a + b * b;
			}
		}
		else {
			if (b > c) {
				max = b;
				triSum = a * a + c * c;
			}
			else {
				max = c;
				triSum = a * a + b * b;
			}
		}
		if (triSum == max * max) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}
	}


}