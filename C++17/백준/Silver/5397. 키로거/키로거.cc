#include <iostream>
#include <string>
#include <deque>
#include <stack>
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
		deque <char> stk;
		stack <char> tmp;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '<') {
				if (!stk.empty()) {
					tmp.push(stk.back());
					stk.pop_back();
				}
			}
			else if (s[j] == '>') {
				if (tmp.empty() == 0) {
					stk.push_back(tmp.top());
					tmp.pop();
				}
			}
			else if (s[j] == '-') {
				if (!stk.empty()) {
					stk.pop_back();
				}
			}
			else {
				stk.push_back(s[j]);
			}
		}
		while (tmp.empty() == 0) {
			stk.push_back(tmp.top());
			tmp.pop();
		}
		int size = stk.size();
		for (int i = 0; i <size ; i++) {
			cout << stk.front();
			stk.pop_front();
		}
		cout << "\n";

	}
}