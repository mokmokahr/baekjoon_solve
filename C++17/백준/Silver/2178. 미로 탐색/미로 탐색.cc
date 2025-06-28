#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
using namespace std;


int arr[100][100];
int N, M;
int cnt = 0;

void bfs() {
	queue<pair<int,int>> q;
	q.push({0,0});

	while (q.empty() == 0) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			switch (i) {
			case 0:
				if (arr[b + 1][a] == 1 && b != N-1) {
					q.push({ a,b + 1 });
					arr[b + 1][a] += arr[b][a];
				}
				break;
			case 1:
				if (arr[b][a+1] == 1 && a != M-1) {
					q.push({ a+1 ,b });
					arr[b][a + 1] += arr[b][a];
				}
				break;
			case 2:
				if (arr[b-1][a] == 1 && b != 0) {
					q.push({ a,b - 1 });
					arr[b-1][a] += arr[b][a];
				}
				break;
			case 3:
				if (arr[b][a-1] == 1 && a != 0) {
					q.push({ a-1,b});
					arr[b][a-1] += arr[b][a];
				}
				break;
			}
		}
	}
}


int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string t;
		cin >> t;
		for (int j = 0; j < M; j++) {
			arr[i][j] = t[j]-'0';
		}
	}
	bfs();
	cout << arr[N-1][M-1];
}