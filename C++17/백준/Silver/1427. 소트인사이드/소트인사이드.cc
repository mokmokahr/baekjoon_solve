#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a,int b) {
	return a > b;
}


int main() {
	int arr[11];
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		arr[i] = int(s[i]) - '0';
	}
	sort(arr, arr + s.size(),compare);
	for (int i = 0; i < s.size(); i++) {
		cout << arr[i];
	}
}