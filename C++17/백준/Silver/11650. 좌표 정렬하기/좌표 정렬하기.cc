#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;



int main(void) {
	vector <pair <int, int>> v;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++) {	
		cout << v[i].first<<" "<<v[i].second<<"\n";
	}
}