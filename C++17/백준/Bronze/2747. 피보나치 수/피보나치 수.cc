#include <iostream>

using namespace std;

int main(void) {
	int arr[46];
	arr[0] = 0;
	arr[1] = 1;
	int N;
	cin >> N;
	for (int i = 2; i < N+1; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[N];
	
}