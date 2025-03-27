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
		v.push_back(n);
	}
	sort(v.begin(),v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i]<<"\n";
	}
}