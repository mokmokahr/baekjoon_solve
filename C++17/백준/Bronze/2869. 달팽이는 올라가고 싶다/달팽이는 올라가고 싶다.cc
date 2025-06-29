#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <cmath>
using namespace std;


int main() {
	double A,B,V;
	cin >> A >> B >> V;
	double f = (V - A) / (A - B);

	cout << int(ceil(f))+1;

}