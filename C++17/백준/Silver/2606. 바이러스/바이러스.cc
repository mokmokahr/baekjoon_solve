#include <iostream>
using namespace std;

int linkedList[101][101];
bool visited[101];
int cnt = 0;
int N;

void dfs(int v) {
	visited[v] = true;
	for (int i = 1; i <= N; i++) {
		if (linkedList[v][i] == 1 && visited[i] == false) {
			visited[i] = true;
			cnt++;
			dfs(i);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int M;
	cin >> N>>M;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		linkedList[a][b] = 1;
		linkedList[b][a] = 1;
	}
	dfs(1);

	cout << cnt;
}
