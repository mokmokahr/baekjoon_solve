#include <iostream>
#include <deque>
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int k = 0; k < T;k++) {
		int n,search;
		cin >> n>>search;
		int arr[10] = { 0 };

		deque<pair<int,int>>deq;

		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			arr[a]++;
			deq.push_back(make_pair(i,a));
		}
		int cnt = 1,isEnd =  0;
		for (int i = 9; i >0; i--) {
			while (arr[i]) {
				if (deq.front().second == i) {
					arr[i]--;
					if (deq.front().first == search) {
						cout << cnt<<"\n";
						break;
					}
					else {
						cnt++;
						deq.pop_front();
					}
				}
				else {
					deq.push_back(deq.front());
					deq.pop_front();
				}
			}
		}
	}
}