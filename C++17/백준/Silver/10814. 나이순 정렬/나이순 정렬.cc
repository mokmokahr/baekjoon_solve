#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
	return a.first < b.first;
}

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	vector <pair <int, string>> v;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int age;
		string name;
		cin >> age >> name;
		v.push_back(make_pair(age, name));
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
}