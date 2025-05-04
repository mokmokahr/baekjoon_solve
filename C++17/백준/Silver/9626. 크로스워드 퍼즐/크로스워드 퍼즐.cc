#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main() {
	int M, N, U, L, R, D;
	char arr[10][11];
	cin >> M >> N >> U >> L >> R >> D;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < U + M + D; i++) {
		int cnt = i % 2;
		for (int j = 0; j < L + N + R; j++) {
			if (i < U || i >= U + M) {
				if (cnt % 2 == 0)cout << "#";
				else cout << ".";
			}
			else {
				if (j < L || j >= N + L) {
					if (cnt % 2 == 0)cout << "#";
					else cout << ".";
				}
				else {
					cout << arr[i - U][j - L];
				}
			}
			cnt++;
		}
		cout << "\n";
	}
}