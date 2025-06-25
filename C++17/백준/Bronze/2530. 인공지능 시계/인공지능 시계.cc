#include <iostream>
using namespace std;

int main() {
	int h, m, s;
	cin >> h >> m >> s;
	int t;
	cin >> t;
	int t_ = s + t;
	t = t_ / 60;
	s = t_ % 60;
	t_ = m + t;
	t = t_ / 60;
	m = t_ % 60;
	h = (h + t) % 24;

	cout << h << " " << m << " " << s;
}