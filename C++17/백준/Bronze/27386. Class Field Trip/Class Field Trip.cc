#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s1,s2;
	cin >> s1>>s2;
	s1 +=s2;
	char arr[201];
	int len = s1.length();
	for (int i = 0; i < len; i++) {
		arr[i] = s1[i];
	}
	sort(arr, arr + len);
	for (int i = 0; i < len; i++) {
		cout << arr[i];
	}


}