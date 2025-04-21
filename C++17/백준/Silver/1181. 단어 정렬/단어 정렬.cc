#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main() {
	int N;
	cin >> N;
	vector <string> v;
	for (int i = 0; i < N; i++) {
		string a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end(),compare);
	string tmp = "";
	for (int i = 0; i < N; i++) {
		if (tmp != v[i]) {
			cout << v[i] << "\n";
			tmp = v[i];
		}
	}
}