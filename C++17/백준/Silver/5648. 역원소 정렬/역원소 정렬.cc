#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;



int main(void) {
	int N;
	cin >> N;

	vector<vector<long long>> v(N);
	vector <long long> v2;

	for (int i = 0; i < N; i++) {
		long long n;
		cin >> n;
		while(n){
			v[i].push_back(n % 10);
			n = n / 10;
		}
	}
	for (int i = 0; i < N; i++) {
		long long n = 0;
		int s = v[i].size();
		for (int j = 0; j < s; j++) {
			for (int k = 0; k < s-j-1; k++) {
				v[i][j] *= 10;
			}
			n += v[i][j];
		}
		
		v2.push_back(n);
	}

	sort(v2.begin(),v2.end());
	for (int i = 0; i < N; i++) {
		cout << v2[i]<<'\n';
	}

}