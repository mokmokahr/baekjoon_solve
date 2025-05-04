#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main() {
	map<string, float> m = { 
		{"A+",4.3},{"A0",4.0},{"A-",3.7},
		{"B+",3.3},{"B0",3.0},{"B-",2.7},
		{"C+",2.3},{"C0",2.0},{"C-",1.7},
		{"D+",1.3},{"D0",1.0},{"D-",0.7},
		{"F",0.0}
	};
	int N,sumNum = 0;
	float sum = 0;
	cin >> N;
	while (N--) {
		string s,score;
		int num;
		cin >> s >> num >> score;
		sumNum += num;
		sum += num * m[score];
	}
	sum = round(sum / sumNum * 100) / 100;
	printf("%.2f", sum);
}