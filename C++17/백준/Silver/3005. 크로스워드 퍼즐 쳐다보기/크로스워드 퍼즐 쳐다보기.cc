#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;



int main(void) {
	int R,C;
	cin >> R >> C;
	vector <vector<char>> v(R);
	vector <string> w;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			char n;
			cin >> n;
			v[i].push_back(n);
		}
	}
	for (int i = 0; i < R; i++) {
		int len = 0;
		string tmpStr="";
		for (int j = 0; j < C; j++) {
			if (v[i][j] != '#') {
				tmpStr += v[i][j];
				len++;
				if (j == C - 1 && len >= 2) {
					w.push_back(tmpStr);
					tmpStr = "";
					len = 0;
				}
			}
			else if (len < 2) {	
				len = 0;
				tmpStr = "";
			}
			else {
				w.push_back(tmpStr);
				tmpStr = "";
				len = 0;
			}

		}
	}
	for (int i = 0; i < C; i++) {
		int len = 0;
		string tmpStr="";
		for (int j = 0; j < R; j++) {
			if (v[j][i] != '#') {
				tmpStr += v[j][i];
				len++;
				if (j == R - 1 && len >= 2) {
					w.push_back(tmpStr);
					tmpStr = "";
					len = 0;
				}
			}
			else if (len < 2) {
				len = 0;
				tmpStr = "";
			}
			else {
				w.push_back(tmpStr);
				len = 0;
				tmpStr = "";
			}

		}
	}
	sort(w.begin(), w.end());

	cout << w[0];
}