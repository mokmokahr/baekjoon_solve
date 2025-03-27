#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;



int main(void) {
	int N;
	cin >> N;
	vector <int> v;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		v.push_back(-1*n);
	}
	sort(v.begin(),v.end());
	for (int i = 0; i < N; i++) {
		v[i] = v[i]*-1;
	}

	for (int i = 0; i < N; i++) {
		cout << v[i]<<"\n";
	}
}