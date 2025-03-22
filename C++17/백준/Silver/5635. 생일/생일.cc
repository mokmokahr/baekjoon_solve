
#include <iostream>
using namespace std;

struct BIRTHDAY
{
	string name;
	int day;
	int month;
	int year;
};

int main() {
	int n;
	cin >> n;
	BIRTHDAY birthday[101];
	for (int i = 0; i < n; i++) {
		cin >> birthday[i].name >> birthday[i].day >> birthday[i].month >> birthday[i].year;
	}
	int max = 0, min = 10000,maxIdx,minIdx;
	for (int i = 0; i < n; i++) {
		if (max < birthday[i].year) {
			max = birthday[i].year;
			maxIdx = i;
		}
		else if (max == birthday[i].year) {
			if (birthday[maxIdx].month < birthday[i].month) {
				maxIdx = i;
			}
			else if (birthday[maxIdx].month == birthday[i].month) {
				if (birthday[maxIdx].day < birthday[i].day) {
					maxIdx = i;
				}
			}
		}

		if (min > birthday[i].year) {
			min = birthday[i].year;
			minIdx = i;
		}
		else if (min == birthday[i].year) {
			if (birthday[minIdx].month > birthday[i].month) {
				minIdx = i;
			}
			else if (birthday[minIdx].month == birthday[i].month) {
				if (birthday[minIdx].day > birthday[i].day) {
					minIdx = i;
				}
			}
		}
	}
	cout << birthday[maxIdx].name << '\n' << birthday[minIdx].name;
}