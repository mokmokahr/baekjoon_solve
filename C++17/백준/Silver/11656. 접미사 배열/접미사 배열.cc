
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;



int main(void) {
	vector <string> v;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		v.push_back(s.substr(i));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < s.length(); i++) {
		cout << v[i]<<"\n";
	}
}