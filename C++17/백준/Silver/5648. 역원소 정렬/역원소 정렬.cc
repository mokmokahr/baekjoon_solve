#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;



int main(void) {
	int N;
	cin >> N;
    
	vector <long long> v2;

	for (int i = 0; i < N; i++) {
		long long n;
		cin >> n;
		long long res = 0;
		while(n){
			res = res*10 + n % 10;
			n /= 10;
		}
		v2.push_back(res);
	}

	sort(v2.begin(),v2.end());
	for (int i = 0; i < N; i++) {
		cout << v2[i]<<'\n';
	}

}