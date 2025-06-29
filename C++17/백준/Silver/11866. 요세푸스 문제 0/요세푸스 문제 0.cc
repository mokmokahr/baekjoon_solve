#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
using namespace std;


int main() {
	queue<int> q;
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		q.push(i+1);
	}
	cout << "<";
	while (q.empty() == 0) {
		for (int i = 0; i < K - 1; i++) {
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		cout << q.front();
		if (q.size() != 1) {
			cout << ", ";
		}
		else {
			cout << ">";
		}
		q.pop();
	}
}