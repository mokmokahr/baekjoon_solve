#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;



int main(void) {
	vector <int> v;
	long long n;
	double res = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int comment;
		cin >> comment;
		v.push_back(comment);
	}
	sort(v.begin(), v.end());

	int average = round(n * 0.15);

	for (int i = average; i < n - average; i++) {
		res += v[i];
	}
	if(n) cout << round(res / (n - (average * 2)));
	else {
		cout << 0;
	}

}